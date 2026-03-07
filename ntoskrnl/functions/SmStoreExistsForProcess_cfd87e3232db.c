_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2008) && SmpKeyedStoreEntryGet(v1 + 2072) != 0;
}
