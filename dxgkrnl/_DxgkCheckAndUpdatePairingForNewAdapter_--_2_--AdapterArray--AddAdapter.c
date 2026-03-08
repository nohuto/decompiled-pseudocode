/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02C8E40
 * Callers:
 *     _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1C02C8BA0 (_lambda_85aa73a68ff66b421643f8c78198376d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C00453C4 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(
        unsigned int *a1,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int i; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  DXGADAPTER_REFERENCE *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  DXGADAPTER **v18; // rcx

  v2 = a1[1];
  if ( *a1 < v2 )
  {
LABEL_14:
    v16 = *a1;
    v17 = v16 + 1;
    v18 = (DXGADAPTER **)(*((_QWORD *)a1 + 1) + 16 * v16);
    *a1 = v17;
    DXGADAPTER_REFERENCE::Assign(v18, a2);
    return 0LL;
  }
  v5 = v2 + 16;
  v6 = v2 + 16;
  v7 = 16 * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v7 = -1LL;
  v8 = __CFADD__(v7, 8LL);
  v9 = v7 + 8;
  if ( v8 )
    v9 = -1LL;
  v10 = operator new[](v9, 0x4B677844u, 256LL);
  if ( v10 )
  {
    v11 = v10 + 8;
    *(_QWORD *)v10 = v6;
    `vector constructor iterator'(
      (char *)(v10 + 8),
      16LL,
      (unsigned int)v6,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    if ( v11 )
    {
      if ( *((_QWORD *)a1 + 1) )
      {
        for ( i = 0; i < *a1; *(_QWORD *)(v13 + 8 * v14 + 8) = 0LL )
        {
          v13 = *((_QWORD *)a1 + 1);
          v14 = i++;
          v14 *= 2LL;
          *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v13 + 8 * v14);
          *(_QWORD *)(v11 + 8 * v14 + 8) = *(_QWORD *)(v13 + 8 * v14 + 8);
          *(_QWORD *)(v13 + 8 * v14) = 0LL;
        }
        v15 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
        if ( v15 )
          DXGADAPTER_REFERENCE::`vector deleting destructor'(v15);
      }
      a1[1] = v5;
      *((_QWORD *)a1 + 1) = v11;
      goto LABEL_14;
    }
  }
  WdLogSingleEntry1(6LL, 12132LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGADAPTER_REFERENCE array.",
    12132LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
