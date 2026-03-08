/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02C3E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C3208 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  ULONG v3; // ecx
  DC *v5; // r8
  __int64 v6; // rdx
  int v7; // ebx
  DC *v8; // rcx
  unsigned int v9; // eax
  DC *v10; // rcx
  unsigned int v11; // ebx
  DC *v12[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v13; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !v12[0] )
    goto LABEL_7;
  if ( *((_WORD *)v12[0] + 6) != 1 )
  {
    v1 = *((_QWORD *)v12[0] + 6);
    if ( v1 )
      v2 = *(_DWORD *)(v1 + 40);
    else
      v2 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(19, v2, *((unsigned __int16 *)v12[0] + 6), 0LL, 0LL);
    goto LABEL_7;
  }
  if ( (*((_DWORD *)v12[0] + 9) & 0x10000) != 0 )
  {
LABEL_7:
    v3 = 87;
LABEL_8:
    EngSetLastError(v3);
LABEL_9:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v12[0]) )
  {
    v3 = 1003;
    goto LABEL_8;
  }
  v6 = *((_QWORD *)v5 + 122);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v5, *(_QWORD *)(v6 + 160));
    v5 = v12[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*((_QWORD *)v5 + 122) + 168LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v12);
  if ( !v15 )
  {
    EngSetLastError(8u);
    v8 = v12[0];
    *((_DWORD *)v12[0] + 62) &= ~1u;
    DC::hpath(v8, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_9;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v12, 516);
  EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
  v9 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v12, (LINEATTRS *)((char *)v12[0] + 208), &v13, 3u);
  v10 = v12[0];
  v11 = v9;
  *((_DWORD *)v12[0] + 62) &= ~1u;
  DC::hpath(v10, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v11;
}
