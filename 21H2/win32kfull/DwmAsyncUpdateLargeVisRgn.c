/*
 * XREFs of DwmAsyncUpdateLargeVisRgn @ 0x1C0273180
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00B4534 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateLargeVisRgn(PVOID Object, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    v10[0] = 4194328;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741956;
    *(_QWORD *)&v10[11] = a2;
    *(_QWORD *)&v10[13] = a4;
    v10[15] = a3;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
