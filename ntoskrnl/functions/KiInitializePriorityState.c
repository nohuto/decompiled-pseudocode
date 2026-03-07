__int64 __fastcall KiInitializePriorityState(_BYTE *a1, struct _KPRCB *a2, __int64 a3)
{
  bool v5; // zf
  char v6; // al
  __int64 result; // rax

  v5 = !KiIsThreadRankNonZero(a3, a2);
  v6 = 1;
  if ( v5 )
    v6 = *(_BYTE *)(a3 + 195);
  *a1 ^= (*a1 ^ v6) & 0x7F;
  result = *(_DWORD *)(a3 + 120) >> 1;
  LOBYTE(result) = *a1 & 0x7F | ((_BYTE)result << 7);
  *a1 = result;
  return result;
}
