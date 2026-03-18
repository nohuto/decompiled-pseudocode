/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02AC2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138894 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  DC *v3; // r8
  __int64 v4; // rdx
  int v5; // edi
  DC *v6; // rcx
  DC *v8[6]; // [rsp+30h] [rbp-69h] BYREF
  struct _XFORMOBJ v9; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-29h] BYREF
  __int64 v11; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = 0;
  if ( !v8[0] )
    goto LABEL_5;
  if ( *((_WORD *)v8[0] + 6) != 1 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(19);
LABEL_5:
    v2 = 87;
LABEL_8:
    EngSetLastError(v2);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v8[0] + 9) & 0x10000) != 0 )
    goto LABEL_5;
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
    v2 = 1003;
    goto LABEL_8;
  }
  v4 = *((_QWORD *)v3 + 122);
  v5 = *(_DWORD *)(v4 + 152);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 160));
    v3 = v8[0];
  }
  if ( (v5 & 0x2000) != 0 )
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 122) + 168LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v8);
  if ( v11 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v8, 516);
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v8, (LINEATTRS *)((char *)v8[0] + 208), &v9, 3u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v6 = v8[0];
  *((_DWORD *)v8[0] + 62) &= ~1u;
  DC::hpath(v6, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_17:
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v1;
}
