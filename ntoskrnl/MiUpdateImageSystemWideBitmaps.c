__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap((__int64 *)a1, a2, a3);
}
