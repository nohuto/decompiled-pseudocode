/*
 * XREFs of EngMarkBandingSurface @ 0x1C014F130
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C014F060 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ @ 0x1C015DDC8 (-Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  BOOL v4; // ebx
  int v5; // ecx
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v4 = 0;
  v8 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 112);
    if ( (v5 & 0x200000) != 0 )
    {
      v4 = 1;
      *(_DWORD *)(v3 + 112) = v5 | 0x2000000;
    }
    else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled() )
    {
      TraceLoggingWriteUnsupportedGdiUsage(2LL, *(unsigned int *)(v8 + 112), 0LL);
    }
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
