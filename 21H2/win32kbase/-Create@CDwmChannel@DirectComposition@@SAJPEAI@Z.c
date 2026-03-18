/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C000A980 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000CCC0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C000CF50 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  PVOID v3; // rbx
  __int64 Pool2; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rsi
  struct _ERESOURCE *v8; // rbx
  __int64 v10; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63644344) == 0x63644344
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1667515204 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_3;
    }
    Pool2 = ExAllocatePool2(261LL, 1840LL);
    if ( !Pool2 )
      goto LABEL_20;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v3,
                               Pool2,
                               BackTrace) )
      {
LABEL_19:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_20;
      }
      goto LABEL_5;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_19;
    Pool2 += 16LL;
  }
  else
  {
LABEL_3:
    Pool2 = ExAllocatePool2(261LL, 1824LL);
  }
  if ( !Pool2 )
  {
LABEL_20:
    inserted = -1073741801;
    goto LABEL_9;
  }
LABEL_5:
  DirectComposition::CApplicationChannel::CApplicationChannel(
    (DirectComposition::CApplicationChannel *)Pool2,
    DefaultConnection,
    1,
    0);
  *(_QWORD *)Pool2 = &DirectComposition::CDwmChannel::`vftable';
  inserted = DirectComposition::CApplicationChannel::Initialize(
               (DirectComposition::CApplicationChannel *)Pool2,
               0LL,
               0LL);
  if ( inserted < 0 )
    goto LABEL_24;
  v6 = DirectComposition::CProcessData::Current();
  v7 = v6;
  if ( !v6 )
  {
    inserted = -1073741823;
    goto LABEL_24;
  }
  v8 = (struct _ERESOURCE *)*((_QWORD *)v6 + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v8, 1u);
  inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
               *(_QWORD *)v7,
               *(unsigned int *)(Pool2 + 28),
               Pool2);
  ExReleaseResourceLite(*((PERESOURCE *)v7 + 1));
  KeLeaveCriticalRegion();
  if ( inserted < 0 )
  {
LABEL_24:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 32LL))(Pool2, 1LL);
    goto LABEL_9;
  }
  *a1 = *(_DWORD *)(Pool2 + 28);
LABEL_9:
  DirectComposition::CConnection::Release(DefaultConnection);
  return (unsigned int)inserted;
}
