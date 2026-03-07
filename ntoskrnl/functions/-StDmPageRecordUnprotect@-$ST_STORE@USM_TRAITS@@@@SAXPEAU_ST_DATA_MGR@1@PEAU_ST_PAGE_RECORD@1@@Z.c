__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(__int64 a1, __int64 a2)
{
  SmHpChunkUnprotect(a1 + 192, a2, 1LL);
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 4LL, 1000LL, 30000LL);
}
