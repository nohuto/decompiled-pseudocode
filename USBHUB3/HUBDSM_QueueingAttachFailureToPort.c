__int64 __fastcall HUBDSM_QueueingAttachFailureToPort(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1636LL), 0xFFFFFFFE);
  return 4077LL;
}
