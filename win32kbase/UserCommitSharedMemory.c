__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return MmCommitSessionMappedView(*a2, *a3);
}
