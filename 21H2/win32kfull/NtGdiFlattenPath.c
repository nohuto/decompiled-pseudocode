/*
 * XREFs of NtGdiFlattenPath @ 0x1C02ABDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138894 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // rdx
  DC *v5[6]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v6[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v7; // [rsp+68h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( !v5[0] )
  {
    v2 = 6;
LABEL_7:
    EngSetLastError(v2);
    goto LABEL_13;
  }
  if ( !(unsigned int)DC::bInactive(v5[0]) )
  {
LABEL_6:
    v2 = 1003;
    goto LABEL_7;
  }
  if ( *(_WORD *)(v3 + 12) > 1u )
  {
    TraceLoggingWriteUnsupportedGdiUsage(6);
    goto LABEL_6;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v5);
  if ( v7 && EPATHOBJ::bFlatten((EPATHOBJ *)v6) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v1;
}
