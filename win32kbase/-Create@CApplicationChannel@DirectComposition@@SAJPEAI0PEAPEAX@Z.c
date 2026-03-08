/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C005C970 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C005CA7C (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005CBD8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C005CC10 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0098628 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  unsigned __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *QuotaZInit; // rax
  DirectComposition::CApplicationChannel *v10; // rax
  int *v11; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v13; // rax
  struct DirectComposition::CProcessData *v14; // r14
  struct _ERESOURCE *v15; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  QuotaZInit = (DirectComposition::CApplicationChannel *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           v7,
                                                           v6,
                                                           0xAF0uLL,
                                                           0x63614344u);
  if ( !QuotaZInit
    || (v10 = (DirectComposition::CApplicationChannel *)DirectComposition::CApplicationChannel::CApplicationChannel(
                                                          QuotaZInit,
                                                          DefaultConnection,
                                                          1,
                                                          *a2),
        (v11 = (int *)v10) == 0LL) )
  {
    inserted = -1073741801;
    goto LABEL_8;
  }
  inserted = DirectComposition::CApplicationChannel::Initialize(v10, a2, a3);
  if ( inserted < 0 )
    goto LABEL_12;
  v13 = DirectComposition::CProcessData::Current();
  v14 = v13;
  if ( !v13 )
  {
    inserted = -1073741823;
    goto LABEL_12;
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)v13 + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v15, 1u);
  inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
               *(struct _RTL_GENERIC_TABLE **)v14,
               v11[7],
               (__int64)v11);
  ExReleaseResourceLite(*((PERESOURCE *)v14 + 1));
  KeLeaveCriticalRegion();
  if ( inserted < 0 )
  {
LABEL_12:
    DirectComposition::CChannel::Release((DirectComposition::CChannel *)v11);
    goto LABEL_8;
  }
  *a1 = v11[7];
LABEL_8:
  DirectComposition::CConnection::Release(DefaultConnection);
  return (unsigned int)inserted;
}
