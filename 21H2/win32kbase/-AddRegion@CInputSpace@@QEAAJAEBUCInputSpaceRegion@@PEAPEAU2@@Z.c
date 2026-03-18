/*
 * XREFs of ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C009FFF0
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CInputSpace::AddRegion(
        CInputSpace *this,
        const struct CInputSpaceRegion *a2,
        struct CInputSpaceRegion **a3)
{
  PVOID v6; // rdi
  __int64 Pool2; // rbx
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  CInputSpace **v11; // rcx
  __int64 v13; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F436E49) != 0x6F436E49
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 728LL);
LABEL_5:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1866690121 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(260LL, 744LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v6,
                             Pool2,
                             BackTrace) )
      goto LABEL_19;
    Pool2 += 16LL;
    goto LABEL_5;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           BackTrace) )
  {
LABEL_19:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_6:
  v8 = 5LL;
  v9 = (_OWORD *)(Pool2 + 16);
  do
  {
    *v9 = *(_OWORD *)a2;
    v9[1] = *((_OWORD *)a2 + 1);
    v9[2] = *((_OWORD *)a2 + 2);
    v9[3] = *((_OWORD *)a2 + 3);
    v9[4] = *((_OWORD *)a2 + 4);
    v9[5] = *((_OWORD *)a2 + 5);
    v9[6] = *((_OWORD *)a2 + 6);
    v9 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (const struct CInputSpaceRegion *)((char *)a2 + 128);
    *(v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v9 = *(_OWORD *)a2;
  v9[1] = *((_OWORD *)a2 + 1);
  v9[2] = *((_OWORD *)a2 + 2);
  v9[3] = *((_OWORD *)a2 + 3);
  *((_QWORD *)v9 + 8) = *((_QWORD *)a2 + 8);
  v11 = (CInputSpace **)*((_QWORD *)this + 183);
  if ( *v11 != (CInputSpace *)((char *)this + 1456) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = (char *)this + 1456;
  *(_QWORD *)(Pool2 + 8) = v11;
  *v11 = (CInputSpace *)Pool2;
  *((_QWORD *)this + 183) = Pool2;
  ++*((_DWORD *)this + 363);
  if ( a3 )
    *a3 = (struct CInputSpaceRegion *)(Pool2 + 16);
  return 0LL;
}
