/*
 * XREFs of GreRestoreDC @ 0x1C000D6C0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepRestoreDCOBJ((struct XDCOBJ *)v5, a2);
  else
    EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
