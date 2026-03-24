/*
 * XREFs of EngAssociateSurface @ 0x1C00A2570
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00A2510 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00319D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00C9B94 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage @ 0x1C00CB688 (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F6E4 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  v6 = (unsigned int)hsurf;
  if ( hdev )
  {
    SURFREF::SURFREF((SURFREF *)v9);
    v7 = HmgShareLockCheckIgnoreStockBit(v6, 5);
    v10 = v7;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 112) & 0x200000) != 0 )
      {
        *(_QWORD *)(v7 + 136) = 0LL;
        v3 = 1;
        *(_QWORD *)(v10 + 48) = hdev;
        *(_QWORD *)(v10 + 40) = *((_QWORD *)hdev + 225);
        *(_DWORD *)(v10 + 112) |= v4;
      }
      else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage() )
      {
        TraceLoggingWriteUnsupportedGdiUsage(3LL, *(unsigned int *)(v10 + 112), 0LL);
      }
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  return v3;
}
