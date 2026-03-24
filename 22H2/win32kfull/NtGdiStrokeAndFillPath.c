/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02AD510
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014475C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C01447BC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C01457E4 (-bInactive@DC@@QEBAHXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx
  ULONG v5; // ecx
  DC *v6; // r8
  __int64 v7; // rdx
  int v8; // edi
  DC *v9; // rcx
  DC *v11[6]; // [rsp+30h] [rbp-69h] BYREF
  struct _XFORMOBJ v12; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-29h] BYREF
  __int64 v14; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v1 = 0;
  if ( !v11[0] )
    goto LABEL_8;
  v2 = *((unsigned __int16 *)v11[0] + 6);
  if ( (_DWORD)v2 != 1 )
  {
    v3 = *((_QWORD *)v11[0] + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 40);
    else
      v4 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(19, v4, v2, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( (*((_DWORD *)v11[0] + 9) & 0x10000) != 0 )
  {
LABEL_8:
    v5 = 87;
LABEL_11:
    EngSetLastError(v5);
    goto LABEL_20;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v5 = 1003;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)v6 + 122);
  v8 = *(_DWORD *)(v7 + 152);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v6, *(_QWORD *)(v7 + 160));
    v6 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v6, *(_QWORD *)(*((_QWORD *)v6 + 122) + 168LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v11);
  if ( v14 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 516);
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v11, (LINEATTRS *)((char *)v11[0] + 208), &v12, 3u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v9 = v11[0];
  *((_DWORD *)v11[0] + 62) &= ~1u;
  DC::hpath(v9, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v1;
}
