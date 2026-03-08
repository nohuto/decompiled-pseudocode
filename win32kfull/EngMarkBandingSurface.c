/*
 * XREFs of EngMarkBandingSurface @ 0x1C02911C0
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C02CC9A0 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  char v1; // dl
  __int64 v2; // rax
  unsigned int v4; // ecx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(hsurf, v1);
  v5 = v2;
  if ( !v2 )
    goto LABEL_2;
  v4 = *(_DWORD *)(v2 + 112);
  if ( (v4 & 0x200000) == 0 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(2, v4, 0LL, 0LL, 0LL);
LABEL_2:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
    return 0;
  }
  *(_DWORD *)(v2 + 112) = v4 | 0x2000000;
  DEC_SHARE_REF_CNT(v2);
  return 1;
}
