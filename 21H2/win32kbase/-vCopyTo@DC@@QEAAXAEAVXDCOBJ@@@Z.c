/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008ABF4
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C01696D0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00CB7C0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall DC::vCopyTo(DC *this, DC **a2)
{
  DC *v2; // rax
  DC *v5; // rcx
  char *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm1
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  DC *v15; // rcx
  unsigned int v16; // eax
  PVOID v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 Pool2; // rbx
  char v21; // r14
  void *v22; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = *a2;
  v5 = *a2;
  v6 = (char *)*((_QWORD *)*a2 + 37);
  if ( v6 && v6 != (char *)v2 + 264 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
    v5 = *a2;
  }
  v7 = (_OWORD *)*((_QWORD *)this + 122);
  v8 = 3LL;
  v9 = (_OWORD *)*((_QWORD *)v5 + 122);
  v10 = 3LL;
  do
  {
    *v9 = *v7;
    v9[1] = v7[1];
    v9[2] = v7[2];
    v9[3] = v7[3];
    v9[4] = v7[4];
    v9[5] = v7[5];
    v9[6] = v7[6];
    v9 += 8;
    v11 = v7[7];
    v7 += 8;
    *(v9 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *v9 = *v7;
  v9[1] = v7[1];
  v9[2] = v7[2];
  DC::hpath(*a2, *((struct HPATH__ **)this + 25));
  v12 = (_OWORD *)((char *)this + 80);
  v13 = (_OWORD *)((char *)*a2 + 80);
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v8;
  }
  while ( v8 );
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v13[4] = v12[4];
  v15 = (DC *)*((_QWORD *)this + 37);
  if ( v15 == (DC *)((char *)this + 264) )
  {
    *((_QWORD *)*a2 + 37) = (char *)*a2 + 264;
    return;
  }
  if ( v15 )
  {
    v16 = 8 * *((_DWORD *)this + 76);
    if ( v16 )
    {
      v17 = gpLeakTrackingAllocator;
      v18 = v16;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64646147) != 0x64646147
        || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_17:
        Pool2 = ExAllocatePool2(260LL, v18);
        goto LABEL_29;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1684300103 )
      {
        if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_17;
      }
      v21 = 0;
      if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
      {
        v21 = 1;
        v18 += 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v18);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v17,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_29;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v17,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_29;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
    Pool2 = 0LL;
LABEL_29:
    *((_QWORD *)*a2 + 37) = Pool2;
    v22 = (void *)*((_QWORD *)*a2 + 37);
    if ( v22 )
      memmove(v22, *((const void **)this + 37), 8LL * *((unsigned int *)this + 76));
    else
      *((_DWORD *)*a2 + 76) = 0;
  }
}
