/*
 * XREFs of EngMarkBandingSurface @ 0x1C015E360
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C015E290 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage @ 0x1C016AF9C (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  BOOL v5; // ebx
  int v6; // ecx
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v5 = 0;
  v9 = v3;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 112);
    if ( (v6 & 0x200000) != 0 )
    {
      v5 = 1;
      *(_DWORD *)(v3 + 112) = v6 | 0x2000000;
    }
    else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage() )
    {
      TraceLoggingWriteUnsupportedGdiUsage(2LL, *(unsigned int *)(v9 + 112), 0LL, 0LL, 0LL);
    }
  }
  SURFREF::~SURFREF((SURFREF *)v8, v4);
  return v5;
}
