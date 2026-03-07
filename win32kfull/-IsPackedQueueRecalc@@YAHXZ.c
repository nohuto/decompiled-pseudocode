_BOOL8 __fastcall IsPackedQueueRecalc(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  return *(_QWORD *)(v1 + 16880) != v1 + 16880;
}
