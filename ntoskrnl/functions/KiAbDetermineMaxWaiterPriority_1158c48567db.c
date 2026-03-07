char __fastcall KiAbDetermineMaxWaiterPriority(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)a2 = 0;
  if ( (_BYTE)v2 )
    *(_BYTE *)(a2 + 1) = 2;
  if ( (v2 & 0x7F00) != 0 )
    *(_BYTE *)(a2 + 2) = 1;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 24);
    *(_BYTE *)a2 = v3;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
    if ( (char)v3 > 30 )
      LOBYTE(v3) = 30;
    if ( (char)v3 > *(char *)a2 )
      *(_BYTE *)a2 = v3;
  }
  return v3;
}
