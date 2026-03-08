/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x140610450
 * Callers:
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14037D8DC (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  void (__fastcall *ErrorSourceFunction)(_QWORD); // rax
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
    ErrorSourceFunction(*(_QWORD *)(a1 + 56));
  return v3;
}
