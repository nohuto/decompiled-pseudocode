__int64 __fastcall IsPointerDeviceAccessible(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*((_DWORD *)PtiCurrentShared(a1, a2, a3, a4) + 318) & 0x10000) != 0 )
    return 1;
  return v4;
}
