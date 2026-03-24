/*
 * XREFs of GreSelectPalette @ 0x1C01497F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00295B4 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CA024 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v8; // ecx
  _QWORD v10[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v6 = *(unsigned __int16 *)(v10[0] + 12LL);
    if ( (_DWORD)v6 == 1 )
    {
      v5 = SelectPaletteWorker((struct XDCOBJ *)v10, a2, a3);
    }
    else
    {
      v7 = *(_QWORD *)(v10[0] + 48LL);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 40);
      else
        v8 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(17LL, v8, v6, 0LL, 0LL);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v5;
}
