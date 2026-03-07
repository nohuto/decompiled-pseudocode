__int64 __fastcall NormBuffer__RewindOutputCharacter(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 v2; // dx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_WORD *)(v1 - 2) + 9215;
  *(_QWORD *)(a1 + 40) = v1 - 2;
  if ( v2 <= 0x3FDu )
    *(_QWORD *)(a1 + 40) = v1 - 4;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 24) - 2LL;
  result = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 72) = 0;
  return result;
}
