/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C00C9F90 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C005CA7C (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005CBD8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C005CC10 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1)
{
  unsigned __int64 v2; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *QuotaZInit; // rax
  unsigned int v6; // edx
  __int64 v7; // r8
  int *v8; // rdi
  __int64 v9; // rcx
  int inserted; // ebx
  struct DirectComposition::CProcessData *v11; // rax
  struct DirectComposition::CProcessData *v12; // r14
  struct _ERESOURCE *v13; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  QuotaZInit = (DirectComposition::CApplicationChannel *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           v3,
                                                           v2,
                                                           0xAF0uLL,
                                                           0x63644344u);
  v8 = (int *)QuotaZInit;
  if ( !QuotaZInit )
  {
    inserted = -1073741801;
    goto LABEL_7;
  }
  LOBYTE(v7) = 1;
  DirectComposition::CApplicationChannel::CApplicationChannel(QuotaZInit, DefaultConnection, v7, 0LL);
  *(_QWORD *)v8 = &DirectComposition::CDwmChannel::`vftable';
  inserted = DirectComposition::CApplicationChannel::Initialize((DirectComposition::CApplicationChannel *)v8, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_11;
  v11 = DirectComposition::CProcessData::Current(v9);
  v12 = v11;
  if ( !v11 )
  {
    inserted = -1073741823;
    goto LABEL_11;
  }
  v13 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v13, 1u);
  inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
               *(struct _RTL_GENERIC_TABLE **)v12,
               v8[7],
               (__int64)v8);
  ExReleaseResourceLite(*((PERESOURCE *)v12 + 1));
  KeLeaveCriticalRegion();
  if ( inserted < 0 )
  {
LABEL_11:
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
    goto LABEL_7;
  }
  *a1 = v8[7];
LABEL_7:
  DirectComposition::CConnection::Release(DefaultConnection, v6);
  return (unsigned int)inserted;
}
