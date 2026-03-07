__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 24);
  if ( v3 != 1599096397 && v3 != 1480934989 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
    return 0LL;
  }
  HmgFree(*(_QWORD *)v2);
  return 1LL;
}
