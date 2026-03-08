/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801CE9E0
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800D5CD8 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::`scalar deleting destructor'(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
