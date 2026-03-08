/*
 * XREFs of GetAdjustedPointerPixelLocation @ 0x1C0217910
 * Callers:
 *     GetAdjustedPointerLocations @ 0x1C00F4070 (GetAdjustedPointerLocations.c)
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C0208CD0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C00A7CFC (LongLongToLong.c)
 */

__int64 __fastcall GetAdjustedPointerPixelLocation(__int64 a1, __int64 a2, LONG *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  int v6; // [rsp+34h] [rbp+Ch]
  int v7; // [rsp+3Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v6 = HIDWORD(a1);
  if ( LongLongToLong((int)a2 + (__int64)(int)a1, a3) < 0 )
    return 0LL;
  LOBYTE(v4) = LongLongToLong(v6 + (__int64)v7, (LONG *)(v3 + 4)) >= 0;
  return v4;
}
