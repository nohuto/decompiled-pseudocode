/*
 * XREFs of RIMVirtAssignTouchType @ 0x1C0195B9C
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMVirtAssignTouchType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  PVOID v7; // r14
  __int64 v8; // rax
  __int64 Pool2; // rdi
  _DWORD *v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r12
  __int128 v21; // [rsp+28h] [rbp-E0h]
  __int128 v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  PVOID BackTrace[20]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v25[20]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = *(_DWORD *)(a1 + 360) & 0xFFFFFFFD | (*(_DWORD *)(a3 + 540) != 0 ? 2 : 0);
  *(_DWORD *)(a1 + 360) = v5;
  *(_WORD *)(a1 + 776) = *(_WORD *)(a3 + 1160);
  v6 = v5 & 0xFFFFFFDF | (*(_DWORD *)(a3 + 556) != 0 ? 0x20 : 0);
  *(_DWORD *)(a1 + 360) = v6;
  if ( (v6 & 2) != 0 )
  {
    v7 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x71707352) != 0x71707352
      || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(260LL, 40LL);
      goto LABEL_7;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1903194962 )
    {
      if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    Pool2 = ExAllocatePool2(260LL, 56LL);
    if ( !Pool2 )
      goto LABEL_18;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v7,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_21;
      Pool2 += 16LL;
    }
    else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v7,
                 Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_21:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_18:
      Pool2 = 0LL;
    }
LABEL_7:
    *(_QWORD *)(a1 + 760) = Pool2;
    *(_DWORD *)(a1 + 24) = 3;
    if ( !Pool2 )
      return 3221225628LL;
    v10 = gpLeakTrackingAllocator;
    WORD4(v21) = *(_WORD *)(a3 + 1124);
    WORD5(v21) = *(_WORD *)(a3 + 1128);
    HIDWORD(v21) = *(_DWORD *)(a3 + 1132);
    LODWORD(v21) = *(_DWORD *)(a3 + 1112);
    LODWORD(v23) = *(_DWORD *)(a3 + 1144) != 0;
    HIDWORD(v23) = *(_DWORD *)(a3 + 1148);
    WORD2(v21) = *(_WORD *)(a3 + 1116);
    WORD3(v21) = *(_WORD *)(a3 + 1120);
    *(_OWORD *)Pool2 = v21;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = v23;
    v11 = 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 760) + 12LL);
    if ( (v10[10] & 0x71707352) == 0x71707352 && (v12 = 0LL, v10[11]) )
    {
      while ( v10[v12] != 1903194962 )
      {
        if ( ++v12 >= (unsigned __int64)(unsigned int)v10[11] )
          goto LABEL_12;
      }
      v19 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v19 = 1;
        v11 += 16LL;
      }
      v13 = ExAllocatePool2(260LL, v11);
      if ( v13 )
      {
        memset(v25, 0, sizeof(v25));
        RtlCaptureStackBackTrace(0, 0x14u, v25, 0LL);
        if ( v19 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v10,
                 (const void *)v13,
                 (struct NSInstrumentation::CBackTrace *)v25) )
          {
            v13 += 16LL;
            goto LABEL_13;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v10,
                    v13,
                    (struct NSInstrumentation::CBackTrace *)v25) )
        {
          goto LABEL_13;
        }
        ExFreePoolWithTag((PVOID)v13, 0);
      }
      v13 = 0LL;
    }
    else
    {
LABEL_12:
      v13 = ExAllocatePool2(260LL, v11);
    }
LABEL_13:
    *(_QWORD *)(*(_QWORD *)(a1 + 760) + 16LL) = v13;
    v14 = *(_QWORD *)(a1 + 760);
    if ( *(_QWORD *)(v14 + 16) )
    {
      v15 = 0LL;
      if ( *(_DWORD *)(v14 + 12) )
      {
        do
        {
          v16 = *(_QWORD *)(a3 + 1136) + 48 * v15;
          LOWORD(v22) = *(_WORD *)v16;
          WORD1(v22) = *(_WORD *)(v16 + 4);
          WORD2(v22) = *(_WORD *)(v16 + 8);
          WORD3(v22) = *(_WORD *)(v16 + 12);
          WORD4(v22) = *(_WORD *)(v16 + 16);
          WORD5(v22) = *(_WORD *)(v16 + 20);
          HIDWORD(v22) = (*(_DWORD *)(v16 + 32) << 9) | (unsigned __int8)*(_DWORD *)(v16 + 24) | (*(_DWORD *)(v16 + 28) != 0
                                                                                                ? 0x100
                                                                                                : 0);
          v17 = 3 * v15;
          v15 = (unsigned int)(v15 + 1);
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 760) + 16LL);
          *(_OWORD *)(v18 + 8 * v17) = v22;
          *(_QWORD *)(v18 + 8 * v17 + 16) = 0LL;
        }
        while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)(a1 + 760) + 12LL) );
      }
      return 0LL;
    }
    if ( v14 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v14);
      *(_QWORD *)(a1 + 760) = 0LL;
    }
    return 3221225628LL;
  }
  *(_QWORD *)(a1 + 760) = 0LL;
  return 0LL;
}
