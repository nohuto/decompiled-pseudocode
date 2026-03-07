__int64 __fastcall IopIrqPackResource(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)a3 = 2;
  *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(a3 + 12) = 0xFFFFFFFFLL;
  result = 0LL;
  *(_WORD *)(a3 + 6) = 0;
  *(_DWORD *)(a3 + 8) = a2;
  *(_WORD *)(a3 + 4) = a2;
  return result;
}
