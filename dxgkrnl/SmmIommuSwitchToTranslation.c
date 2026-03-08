/*
 * XREFs of SmmIommuSwitchToTranslation @ 0x1C03D14A4
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03D1B20 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     SmmAssignDomain @ 0x1C006DD94 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 *     SmmIommuDeleteDomain @ 0x1C03D1194 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1C03D1710 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToTranslation(__int64 a1)
{
  __int64 v1; // r13
  char v3; // r12
  __int64 (__fastcall *v4)(_QWORD, _QWORD); // rax
  int v5; // eax
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r15
  const wchar_t *v10; // r9
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  v12 = 0LL;
  v3 = 0;
  if ( SmmUseIommuV3Interface() )
  {
    v4 = qword_1C013BC00;
LABEL_3:
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))v4)(0LL, 0LL, 0LL, 0LL, &v12);
    goto LABEL_6;
  }
  v6 = !SmmUseIommuV2Interface();
  v4 = qword_1C013BC00;
  if ( !v6 )
    goto LABEL_3;
  LOBYTE(v7) = 1;
  v5 = qword_1C013BC00(v7, &v12);
LABEL_6:
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = v5;
    WdLogSingleEntry2(2LL, a1, v5);
    v10 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, a1, v9, 0LL, 0LL, 0LL);
    if ( v3 )
    {
      if ( !*(_QWORD *)(a1 + 352) )
      {
        WdLogSingleEntry1(1LL, 2283LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.CallbackContext != nullptr",
          2283LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 328))(a1, *(_QWORD *)(a1 + 352));
    }
    goto LABEL_20;
  }
  SmmAssignDomain(a1, v12, 0);
  v8 = SmmMapExistingMemoryToDomain(a1);
  if ( v8 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 352) )
    {
LABEL_11:
      if ( (dword_1C013BCE4 & 1) != 0 )
      {
        WdLogSingleEntry1(2LL, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Verifier fault: Fail to attach to translation domain. SysMmAdapter=0x%.16I64x",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        v8 = -1073741823;
      }
      else
      {
        v8 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 112), v1);
        if ( v8 >= 0 )
          return (unsigned int)v8;
      }
      v9 = v8;
      WdLogSingleEntry2(2LL, a1, v8);
      v10 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(__int64))(a1 + 320))(a1);
    if ( v8 >= 0 )
    {
      v3 = 1;
      goto LABEL_11;
    }
  }
LABEL_20:
  if ( v12 )
  {
    SmmAssignDomain(a1, v1, 1);
    SmmIommuDeleteDomain();
  }
  return (unsigned int)v8;
}
