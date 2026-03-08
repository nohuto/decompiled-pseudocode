/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x140844538
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x140844498 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14084463C (RtlpMuiRegGetStringIndexInPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, _WORD *a2, char a3, _DWORD *a4)
{
  int StringIndexInPool; // eax
  __int64 v9; // rbp
  unsigned int v10; // r10d
  __int64 v11; // rdi
  ULONGLONG v12; // rdi
  __int16 v13; // r11
  __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rax
  ULONGLONG pullResult; // [rsp+68h] [rbp+20h] BYREF

  pullResult = 0LL;
  StringIndexInPool = RtlpMuiRegGetStringIndexInPool();
  LODWORD(v9) = StringIndexInPool;
  if ( a4 )
    *a4 = 0;
  if ( StringIndexInPool >= 0 )
    return (unsigned int)v9;
  v10 = -1;
  if ( a1 && a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    v12 = v11 + 1;
    if ( v12 + *(unsigned __int16 *)(a1 + 10) > *(unsigned __int16 *)(a1 + 8) )
    {
      if ( a4 )
        *a4 = v12;
    }
    else if ( a3 && *(_WORD *)(a1 + 6) < *(_WORD *)(a1 + 4) && RtlULongLongMult(v12, 2uLL, &pullResult) >= 0 )
    {
      v14 = *(__int16 *)(a1 + 10);
      v9 = *(unsigned __int16 *)(a1 + 6);
      v15 = pullResult;
      *(_WORD *)(a1 + 6) = v13 + v9;
      *(_WORD *)(a1 + 10) = v13 + v14;
      memmove((void *)(*(_QWORD *)(a1 + 24) + 2 * v14), a2, v15);
      v16 = *(_QWORD *)(a1 + 16);
      *(_WORD *)(a1 + 10) += v12;
      *(_WORD *)(v16 + 2 * v9) = v14;
      return (unsigned int)v9;
    }
  }
  return v10;
}
