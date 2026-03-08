/*
 * XREFs of ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0307A78
 * Callers:
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0305D80 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C004617C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall DXG_REGISTRY_KEY_LIST::InsertTail(DXG_REGISTRY_KEY_LIST *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rax
  DXG_REGISTRY_KEY_LIST **v6; // rcx

  v4 = operator new[](0x218uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    v6 = (DXG_REGISTRY_KEY_LIST **)*((_QWORD *)this + 1);
    if ( *v6 != this )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v4 = this;
    *v6 = (DXG_REGISTRY_KEY_LIST *)v4;
    *((_QWORD *)this + 1) = v4;
    return RtlStringCbCopyUnicodeString((char *)(v4 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, 2202LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate memory for DXG_REGISTRY_KEY_ENTRY",
      2202LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
}
