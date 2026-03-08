/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C00411F8
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0041064 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  unsigned int *i; // rcx
  unsigned int *v4; // rbx
  __int64 (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax
  int v6; // eax

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START <= &__KMDF_CLASS_BIND_END )
  {
    for ( i = (unsigned int *)&__KMDF_CLASS_BIND_END; ; i = (unsigned int *)((char *)v4 + *v4) )
    {
      while ( i + 2 <= (unsigned int *)&__KMDF_CLASS_BIND_END && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)&__KMDF_CLASS_BIND_END )
        return v1;
      if ( i + 20 > (unsigned int *)&__KMDF_CLASS_BIND_END )
        break;
      if ( *i != 80 )
        break;
      v4 = i;
      if ( !i )
        break;
      v5 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))*((_QWORD *)i + 7);
      off_1C006D948 = i;
      if ( v5 )
      {
        v6 = v5(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, i);
        v1 = v6;
        if ( v6 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v4 + 7),
            v4,
            *((const wchar_t **)v4 + 1),
            v6);
          return v1;
        }
      }
      else
      {
        v1 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, i);
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
  else
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
  return 3221225595LL;
}
