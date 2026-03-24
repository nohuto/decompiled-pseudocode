/*
 * XREFs of xxxCheckImeShowStatusInThread @ 0x1C00F77D0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F7808 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxCheckImeShowStatusInThread(__int64 a1)
{
  if ( (*gpsi & 4) != 0 && *(char *)(*(_QWORD *)(a1 + 40) + 20LL) >= 0 )
    xxxCheckImeShowStatus((struct tagWND *)a1, *(struct tagTHREADINFO **)(a1 + 16));
  return 1LL;
}
