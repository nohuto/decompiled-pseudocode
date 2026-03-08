/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C0009AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C0009B28 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = 0;
  if ( v4[0] )
  {
    v2 = DC::iSetMetaRgn(v4[0]);
    if ( v4[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
  return v1;
}
