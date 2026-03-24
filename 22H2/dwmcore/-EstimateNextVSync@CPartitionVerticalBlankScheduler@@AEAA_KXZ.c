/*
 * XREFs of ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800DD6F8
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18006FAB0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::EstimateNextVSync(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)this + 630);
  if ( v1[2] )
    return v1[7] + *((_QWORD *)this + 1990) - v1[7] + v1[36] - (*((_QWORD *)this + 1990) - v1[7]) % v1[36];
  else
    return *(_QWORD *)(*((_QWORD *)this + 629) + 288LL)
         + *((_QWORD *)this + 1990)
         - *((_QWORD *)this + 1990) % *(_QWORD *)(*((_QWORD *)this + 629) + 288LL);
}
