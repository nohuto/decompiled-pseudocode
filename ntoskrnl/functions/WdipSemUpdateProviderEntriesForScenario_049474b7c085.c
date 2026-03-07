__int64 __fastcall WdipSemUpdateProviderEntriesForScenario(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v4; // si
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = 0LL;
  v4 = *(_DWORD *)(a1 + 52) != 0;
  LOBYTE(a2) = v4;
  for ( result = WdipSemUpdateProviderEntryForEvent(a1, a2);
        (unsigned int)v2 < *(_DWORD *)(a1 + 52);
        v2 = (unsigned int)(v2 + 1) )
  {
    LOBYTE(v6) = v4;
    result = WdipSemUpdateProviderEntryForEvent(*(_QWORD *)(a1 + 8 * v2 + 1048), v6);
  }
  return result;
}
