/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C001CF34
 * Callers:
 *     FxDriverEntryWorker @ 0x1C001CDB4 (FxDriverEntryWorker.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x1C001CFDC (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  char *i; // rbx
  unsigned __int64 NextClassBindInfo; // rax
  unsigned int *v4; // rbx
  __int64 (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax
  int v7; // eax

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START > &__KMDF_CLASS_BIND_END )
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &__KMDF_CLASS_BIND_START,
      &__KMDF_CLASS_BIND_END,
      -1073741701);
  }
  else
  {
    for ( i = (char *)&Ucx_BIND_INFO; ; i = (char *)v4 + *v4 )
    {
      NextClassBindInfo = FxGetNextClassBindInfo(i, &__KMDF_CLASS_BIND_END);
      v4 = (unsigned int *)NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= (unsigned __int64)&__KMDF_CLASS_BIND_END )
        return v1;
      off_1C0064788 = (_UNKNOWN *)NextClassBindInfo;
      v5 = *(__int64 (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))(NextClassBindInfo + 56);
      if ( v5 )
      {
        v7 = v5(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, v4);
        v1 = v7;
        if ( v7 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v4 + 7),
            v4,
            *((const wchar_t **)v4 + 1),
            v7);
          return v1;
        }
      }
      else
      {
        v1 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, v4);
        if ( (v1 & 0x80000000) != 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            v4,
            *((const wchar_t **)v4 + 1),
            v1);
          return v1;
        }
      }
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
  return 3221225595LL;
}
