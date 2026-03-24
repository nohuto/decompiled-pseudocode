/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0018674
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00182B4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // rbx
  _DWORD *v3; // rsi
  __int64 (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _DWORD *); // rax
  int v6; // eax
  const wchar_t *v7; // rcx

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START > (_UNKNOWN *)__KMDF_CLASS_BIND_END )
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &__KMDF_CLASS_BIND_START,
      __KMDF_CLASS_BIND_END,
      -1073741701);
    return 3221225595LL;
  }
  else
  {
    v2 = &Ucx_BIND_INFO;
    if ( &Ucx_BIND_INFO < (_UNKNOWN *)__KMDF_CLASS_BIND_END )
    {
      while ( 1 )
      {
        if ( v2 + 1 > __KMDF_CLASS_BIND_END )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: invalid driver image.\nNot enough space for WDF_CLASS_BIND_INFO.Size field.\n");
          return 3221225595LL;
        }
        if ( *v2 != 80 )
          break;
        v3 = v2 + 20;
        if ( v2 + 20 > __KMDF_CLASS_BIND_END )
        {
          DbgPrintEx(0x4Du, 0, "FxStubBindClasses: invalid driver image.\nNot enough space for WDF_CLASS_BIND_INFO.\n");
          return 3221225595LL;
        }
        v4 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _DWORD *))*((_QWORD *)v2 + 7);
        off_1C0061708 = v2;
        if ( v4 )
        {
          v6 = v4(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, v2);
          v1 = v6;
          if ( v6 < 0 )
          {
            DbgPrintEx(
              0x4Du,
              0,
              "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
              *((const void **)v2 + 7),
              v2,
              *((const wchar_t **)v2 + 1),
              v6);
            return v1;
          }
        }
        else
        {
          v1 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, v2);
          if ( (v1 & 0x80000000) != 0 )
          {
            DbgPrintEx(
              0x4Du,
              0,
              "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
              v2,
              *((const wchar_t **)v2 + 1),
              v1);
            return v1;
          }
        }
        v2 += 20;
        if ( v3 >= __KMDF_CLASS_BIND_END )
          return v1;
      }
      v7 = L"(null)";
      v1 = -1073741820;
      if ( *((_QWORD *)v2 + 1) )
        v7 = (const wchar_t *)*((_QWORD *)v2 + 1);
      DbgPrintEx(
        0x4Du,
        0,
        "FxStubBindClasses: WDF_CLASS_BIND_INFO 0x%p, class %S, size 0x%x incorrect, expected 0x%Ix, status 0x%x\n",
        v2,
        v7,
        *v2,
        80LL,
        -1073741820);
    }
    return v1;
  }
}
