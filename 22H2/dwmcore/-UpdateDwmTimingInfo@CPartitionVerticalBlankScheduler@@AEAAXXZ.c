/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007352C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180070200 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800733A4 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *((_QWORD *)this + 638) = *(_QWORD *)(*((_QWORD *)this + 629) + 64LL);
  *(_QWORD *)((char *)this + 5084) = *(_QWORD *)(*((_QWORD *)this + 629) + 56LL);
  *(_QWORD *)((char *)this + 5092) = *(_QWORD *)(*((_QWORD *)this + 629) + 16LL);
  *((_DWORD *)this + 1280) = *(_DWORD *)(*((_QWORD *)this + 629) + 32LL);
  *((_DWORD *)this + 1275) = *(_DWORD *)(*((_QWORD *)this + 629) + 44LL);
  *(_QWORD *)((char *)this + 5124) = *(_QWORD *)(*((_QWORD *)this + 629) + 8LL);
  *((_QWORD *)this + 639) = **((_QWORD **)this + 629);
  *(_QWORD *)((char *)this + 5060) = *(_QWORD *)(*((_QWORD *)this + 629) + 280LL);
  *(_QWORD *)((char *)this + 5068) = *(_QWORD *)(*((_QWORD *)this + 629) + 288LL);
  *(_QWORD *)((char *)this + 5076) = *(_QWORD *)(*((_QWORD *)this + 629) + 280LL);
  *((_QWORD *)this + 646) = *((_QWORD *)this + 1398);
  *((_DWORD *)this + 1294) = *((_DWORD *)this + 2794);
  v1 = *((unsigned int *)this + 1256);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 5132) = *((_QWORD *)this + 38 * v1 + 19);
    *((_DWORD *)this + 1285) = *((_DWORD *)this + 76 * *((unsigned int *)this + 1256) + 46);
  }
  v2 = *((unsigned int *)this + 1257);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 643) = *((_QWORD *)this + 38 * v2 + 19);
    *(_QWORD *)((char *)this + 5156) = *((_QWORD *)this + 38 * *((unsigned int *)this + 1257) + 20);
  }
  *((_DWORD *)this + 1288) = *(_DWORD *)(*((_QWORD *)this + 629) + 104LL);
  *((_DWORD *)this + 1291) = *(_DWORD *)(*((_QWORD *)this + 629) + 108LL);
  *(_QWORD *)((char *)this + 5356) = *(_QWORD *)((char *)this + 5348);
  *(_QWORD *)((char *)this + 5348) = *((unsigned int *)this + 1288);
}
