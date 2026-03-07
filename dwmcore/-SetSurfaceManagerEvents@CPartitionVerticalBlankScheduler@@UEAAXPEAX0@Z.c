void __fastcall CPartitionVerticalBlankScheduler::SetSurfaceManagerEvents(
        CPartitionVerticalBlankScheduler *this,
        void *a2,
        void *a3)
{
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 5) = a3;
}
