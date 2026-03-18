/*
 * XREFs of ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C030C7F0
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02B6020 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FA00 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C00471AC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall DXG_REGISTRY_KEY_LIST::InsertHead(DXG_REGISTRY_KEY_LIST *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = operator new[](0x218uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    v6 = *(_QWORD *)this;
    if ( *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v4 + 8) = this;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)this = v4;
    return RtlStringCbCopyUnicodeString((char *)(v4 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, 2178LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate memory for DXG_REGISTRY_KEY_ENTRY",
      2178LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
}
