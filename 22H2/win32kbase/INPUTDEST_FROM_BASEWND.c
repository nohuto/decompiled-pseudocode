/*
 * XREFs of INPUTDEST_FROM_BASEWND @ 0x1C01B5B44
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5044 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01E8150 (HandleBaseWindowDestruction.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_BASEWND(_DWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 1;
  }
  return a1;
}
