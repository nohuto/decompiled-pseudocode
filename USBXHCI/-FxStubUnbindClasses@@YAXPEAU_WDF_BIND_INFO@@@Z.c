/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00529C4
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0052950 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x1C001CFDC (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  _QWORD *v1; // rbx
  unsigned int *v2; // rdi
  unsigned int *NextClassBindInfo; // rax
  unsigned int *v4; // rbx
  void (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax

  v1 = &Ucx_BIND_INFO;
  if ( off_1C0064788 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (unsigned int *)((char *)off_1C0064788 + 80);
    while ( 1 )
    {
      NextClassBindInfo = (unsigned int *)FxGetNextClassBindInfo(v1, (unsigned __int64)v2);
      v4 = NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= v2 )
        return;
      v5 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))*((_QWORD *)NextClassBindInfo + 8);
      if ( v5 )
        v5(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v4);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v4);
      v1 = (_QWORD *)((char *)v4 + *v4);
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
}
