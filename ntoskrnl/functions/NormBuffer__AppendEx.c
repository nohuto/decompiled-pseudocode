char __fastcall NormBuffer__AppendEx(__int64 a1, int a2, char a3, char a4)
{
  char result; // al
  __int64 v9; // rax

  result = NormBuffer__Append(a1, a2);
  if ( result )
  {
    v9 = *(_QWORD *)(a1 + 40) - 2LL;
    *(_DWORD *)(a1 + 56) = a2;
    *(_QWORD *)(a1 + 64) = v9;
    result = 1;
    *(_BYTE *)(a1 + 72) = a3;
    *(_BYTE *)(a1 + 73) = a4;
  }
  return result;
}
