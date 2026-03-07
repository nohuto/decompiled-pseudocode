_WORD *__fastcall CmpGetNodeName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int16 v5; // bx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, __int64); // rax
  unsigned __int16 v7; // bx
  _WORD *v8; // rax
  _WORD *v9; // rdi
  _WORD *v11; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_WORD *)(a2 + 72);
  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v7 = v5 + 2;
    v11 = (_WORD *)v6(v7, 0LL, 540167491LL);
    v9 = v11;
    if ( v11 )
    {
      memmove(v11, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v9[((unsigned __int64)v7 >> 1) - 1] = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
  v7 = 2 * (v5 + 1);
  v8 = (_WORD *)v6(v7, 0LL, 540167491LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  CmpCopyCompressedName(v8, v7, (unsigned __int8 *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
  v9[((unsigned __int64)v7 >> 1) - 1] = 0;
LABEL_6:
  if ( a3 )
    *a3 = v7;
  return v9;
}
