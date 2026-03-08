/*
 * XREFs of CitProcessForegroundChange @ 0x1C00B0410
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0458 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 */

__int64 __fastcall CitProcessForegroundChange(
        __int64 a1,
        struct tagWND *a2,
        __int64 a3,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a4)
{
  struct tagPROCESSINFO *v6; // r8
  struct tagPROCESSINFO *v7; // rcx
  struct tagPROCESSINFO *v8; // rax

  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v8 = *(struct tagPROCESSINFO **)(a1 + 424);
    if ( v8 )
      v7 = v8;
  }
  if ( a3 && *(_QWORD *)(a3 + 424) )
    v6 = *(struct tagPROCESSINFO **)(a3 + 424);
  return CitpProcessForegroundChange(v7, a2, v6, a4);
}
