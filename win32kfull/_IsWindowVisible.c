__int64 __fastcall IsWindowVisible(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v1 + 31) & 0x10) == 0 && (*(_BYTE *)(v1 + 25) & 8) == 0 )
      break;
    if ( (*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D )
      return 1LL;
    a1 = *(_QWORD *)(a1 + 104);
  }
  return 0LL;
}
