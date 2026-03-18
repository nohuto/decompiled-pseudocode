/*
 * XREFs of EngMarkBandingSurface @ 0x1C028E860
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C02CA490 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v6; // eax
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v8 = v3;
  v4 = v3;
  if ( !v3 )
    goto LABEL_2;
  v6 = *(_DWORD *)(v3 + 112);
  if ( (v6 & 0x200000) == 0 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(2, *(unsigned int *)(v4 + 112), 0LL, 0LL, 0LL);
LABEL_2:
    SURFREF::~SURFREF((SURFREF *)v7);
    return 0;
  }
  *(_DWORD *)(v4 + 112) = v6 | 0x2000000;
  if ( v8 )
    DEC_SHARE_REF_CNT(v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
  return 1;
}
