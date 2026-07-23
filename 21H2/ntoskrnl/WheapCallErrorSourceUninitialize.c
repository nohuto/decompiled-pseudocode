/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x1405BCED0
 * Callers:
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403BB100 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  void (__fastcall *ErrorSourceFunction)(_QWORD); // rax
  __int64 v2; // r11
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    ErrorSourceFunction = (void (__fastcall *)(_QWORD))WheapGetErrorSourceFunction(a1, 4, 1);
    v3 = 0;
    if ( !ErrorSourceFunction )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  ErrorSourceFunction = (void (__fastcall *)(_QWORD))WheapGetErrorSourceFunction(a1, 4, 1);
  v3 = 0;
  if ( ErrorSourceFunction )
LABEL_3:
    ErrorSourceFunction(*(_QWORD *)(v2 + 56));
  return v3;
}
