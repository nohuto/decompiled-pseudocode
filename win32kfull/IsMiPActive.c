__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // eax

  if ( a2 == 1 || *(_QWORD *)(a1 + 608) || !(unsigned int)IsMiPEnabledForThread(a1) )
    return 0LL;
  if ( !v2 )
    return 1LL;
  v4 = *(_DWORD *)(v2 + 100);
  if ( (v4 & 0x20) != 0 )
    return 0LL;
  return (~v4 & 0x8000000u) >> 27;
}
