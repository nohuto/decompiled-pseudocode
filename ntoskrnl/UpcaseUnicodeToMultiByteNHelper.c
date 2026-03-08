/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x14045B5C4
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14079FFE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1407A00A0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  _DWORD *v6; // rsi
  _BYTE *v8; // rbx
  int v9; // r15d
  __int64 CurrentServerSilo; // rax
  _QWORD *v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 v20; // dx
  __int16 v21; // dx
  unsigned int v22; // eax

  v6 = a3;
  v8 = a1;
  v9 = (int)a1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v11 = &PspHostSiloGlobals;
  if ( CurrentServerSilo )
    v11 = *(_QWORD **)(CurrentServerSilo + 1488);
  v12 = a5;
  v13 = v11[137];
  v14 = v11[138];
  v15 = v11[151];
  if ( a5 )
  {
    v16 = v11[154];
    do
    {
      if ( !a2 )
        break;
      v17 = *a4++;
      v18 = *(_WORD *)(v14 + 2 * v17);
      v19 = *(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v18 >> 8));
      if ( (_WORD)v19 )
        v20 = *(_WORD *)(v11[140] + 2 * ((unsigned __int8)v18 + v19));
      else
        v20 = *(_WORD *)(v13 + 2LL * (unsigned __int8)v18);
      v21 = *(_WORD *)(v14 + 2LL * NLS_UPCASE(v16, v20));
      if ( HIBYTE(v21) )
      {
        v22 = a2--;
        if ( v22 < 2 )
          break;
        *v8++ = HIBYTE(v21);
      }
      *v8 = v21;
      --a2;
      ++v8;
      --v12;
    }
    while ( v12 );
    v6 = a3;
  }
  if ( v6 )
    *v6 = (_DWORD)v8 - v9;
  return a2 < v12 ? 0x80000005 : 0;
}
