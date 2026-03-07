unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::GetNextFrameStartTime(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  return *(_QWORD *)(*((_QWORD *)this + 526) + 64LL) + CPartitionVerticalBlankScheduler::GetSmoothedDuration(this, a2);
}
