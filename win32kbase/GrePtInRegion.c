/*
 * XREFs of GrePtInRegion @ 0x1C0007000
 * Callers:
 *     NtGdiPtInRegion @ 0x1C0185900 (NtGdiPtInRegion.c)
 * Callees:
 *     ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0007080 (-bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GrePtInRegion(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  _POINTL v8; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 1, 0);
  v5 = 0;
  if ( v7[0] )
  {
    v8.x = a2;
    v8.y = a3;
    LOBYTE(v5) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v7, &v8) == 2;
  }
  else
  {
    EngSetLastError(6u);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
