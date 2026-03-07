__int64 __fastcall IopGenericPackResource(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)a3 = *(_BYTE *)(a1 + 1);
  *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(a3 + 4) = a2;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
  return 0LL;
}
