__int64 __fastcall IopDmaPackResource(__int64 a1, int a2, __int64 a3)
{
  __int16 v3; // ax

  *(_BYTE *)a3 = 4;
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  v3 = *(_WORD *)(a1 + 4);
  *(_WORD *)(a3 + 2) = v3;
  if ( (v3 & 0x80u) == 0 )
  {
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = a2;
  }
  else
  {
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(a3 + 12) = *(_BYTE *)(a1 + 20);
  }
  return 0LL;
}
