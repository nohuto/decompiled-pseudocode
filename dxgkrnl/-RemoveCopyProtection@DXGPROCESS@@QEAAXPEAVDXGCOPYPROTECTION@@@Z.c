/*
 * XREFs of ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0040C58
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02B71FC (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::RemoveCopyProtection(struct _KTHREAD **this, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  if ( this[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 698LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v3,
          v4,
          0,
          2,
          -1,
          (__int64)L"IsCopyProtectionMutexOwner()",
          698LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = a2 + 24;
  v6 = -a2;
  v7 = v5 & -(__int64)(v6 != 0);
  v8 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)((v5 & -(__int64)(v6 != 0)) + 8), *v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
}
