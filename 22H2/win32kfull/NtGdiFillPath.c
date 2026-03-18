/*
 * XREFs of NtGdiFillPath @ 0x1C02C0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0284C7C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C0988 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  ULONG v3; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  DC *v7; // rcx
  unsigned int v8; // eax
  DC *v9; // rcx
  unsigned int v10; // ebx
  DC *v11[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-49h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-29h] BYREF
  __int64 v14; // [rsp+68h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( !v11[0] )
    goto LABEL_7;
  if ( *((_WORD *)v11[0] + 6) != 1 )
  {
    v1 = *((_QWORD *)v11[0] + 6);
    if ( v1 )
      v2 = *(_DWORD *)(v1 + 40);
    else
      v2 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(18, v2, *((unsigned __int16 *)v11[0] + 6), 0LL, 0LL);
    goto LABEL_7;
  }
  if ( (*((_DWORD *)v11[0] + 9) & 0x10000) != 0 )
  {
LABEL_7:
    v3 = 87;
LABEL_8:
    EngSetLastError(v3);
LABEL_9:
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v3 = 1003;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(v5 + 976);
  if ( (*(_DWORD *)(v6 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v6 + 160));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v11);
  if ( !v14 )
  {
    EngSetLastError(8u);
    v7 = v11[0];
    *((_DWORD *)v11[0] + 62) &= ~1u;
    DC::hpath(v7, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_9;
  }
  EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
  v8 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v11, 0LL, 0LL, 2u);
  v9 = v11[0];
  v10 = v8;
  *((_DWORD *)v11[0] + 62) &= ~1u;
  DC::hpath(v9, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v10;
}
