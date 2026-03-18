/*
 * XREFs of DwmAsyncNotifyIsInMoveSizeChange @ 0x1C027286C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     EditionTouchResizeAction @ 0x1C02101C0 (EditionTouchResizeAction.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyIsInMoveSizeChange(PVOID Object, __int64 a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  v9 = -1073741823;
  if ( Object )
  {
    memset(v11, 0, sizeof(v11));
    v11[0] = 4194328;
    LOWORD(v11[1]) = 0x8000;
    v11[15] = a5;
    v11[10] = 1073741852;
    *(_QWORD *)&v11[11] = a2;
    v11[13] = a3;
    v11[14] = a4;
    EtwUpdateEvent(a2);
    v9 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
