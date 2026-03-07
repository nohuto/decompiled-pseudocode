__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  if ( a2 < 0xFFFFFFFE && *(_DWORD *)(a1 + 20) >= a2 + 2 )
    return *(unsigned __int16 *)(a2 + *(_QWORD *)(a1 + 8));
  AslLogCallPrintf(1LL);
  AslLogCallPrintf(1LL);
  return 0LL;
}
