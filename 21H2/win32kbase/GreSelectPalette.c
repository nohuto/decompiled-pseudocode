/*
 * XREFs of GreSelectPalette @ 0x1C01757D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00DA864 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  _QWORD v9[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( *(_WORD *)(v9[0] + 12LL) == 1 )
    {
      v5 = SelectPaletteWorker((struct XDCOBJ *)v9, a2, a3);
    }
    else
    {
      v6 = *(_QWORD *)(v9[0] + 48LL);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 40);
      else
        v7 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(17LL, v7, *(unsigned __int16 *)(v9[0] + 12LL), 0LL, 0LL);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v5;
}
