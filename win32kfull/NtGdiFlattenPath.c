/*
 * XREFs of NtGdiFlattenPath @ 0x1C02C37C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C3208 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // eax
  DC *v6[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( !v6[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
LABEL_17:
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
LABEL_5:
    v1 = 1003;
    goto LABEL_3;
  }
  if ( *(_WORD *)(v2 + 12) > 1u )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 40);
    else
      v4 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(6, v4, *(unsigned __int16 *)(v2 + 12), 0LL, 0LL);
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, v6);
  if ( !v8 || !EPATHOBJ::bFlatten((EPATHOBJ *)v7) )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
    goto LABEL_17;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return 1LL;
}
