/*
 * XREFs of PopFxQueryCurrentComponentPerfState @ 0x14056C07C
 * Callers:
 *     PoFxQueryCurrentComponentPerfState @ 0x1405693C0 (PoFxQueryCurrentComponentPerfState.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x14056D6F0 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     PopPluginQueryCurrentComponentPerfState @ 0x14056DF44 (PopPluginQueryCurrentComponentPerfState.c)
 */

_BYTE *__fastcall PopFxQueryCurrentComponentPerfState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rax
  _BYTE *result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a2 + 424);
  v12 = 0LL;
  v8 = *(_QWORD *)(v6 + 152) + 32LL * a3;
  v9 = *(_BYTE *)(v6 + 73) == 0;
  LODWORD(v12) = a3;
  if ( v9 || !*(_QWORD *)(a1 + 64) )
  {
    *a5 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    PopPluginQueryCurrentComponentPerfState(a1, *(unsigned int *)(a2 + 16), &v12);
    v10 = DWORD2(v12);
    if ( *(_DWORD *)(*(_QWORD *)v8 + 28LL) )
      v10 = *((_QWORD *)&v12 + 1);
    *a5 = v10;
    if ( v10 != *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 24) = a4;
      *(_QWORD *)(v8 + 8) = *a5;
      result = a6;
      if ( a6 )
        *a6 = 1;
      return result;
    }
  }
  result = a6;
  if ( a6 )
    *a6 = 0;
  return result;
}
