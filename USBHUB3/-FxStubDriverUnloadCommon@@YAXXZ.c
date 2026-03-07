void FxStubDriverUnloadCommon(void)
{
  char *v0; // rbx
  char *v1; // rdi
  void (__fastcall *v2)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax

  v0 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_1C006D948 != &__KMDF_CLASS_BIND_START )
  {
    v1 = (char *)off_1C006D948 + 80;
    while ( 1 )
    {
      while ( v0 + 8 <= v1 && !*(_QWORD *)v0 )
        v0 += 8;
      if ( v0 < v1 )
      {
        if ( v0 + 80 > v1 || *(_DWORD *)v0 != 80 )
        {
LABEL_16:
          DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
          break;
        }
      }
      else
      {
        v0 = v1;
      }
      if ( !v0 )
        goto LABEL_16;
      if ( v0 >= v1 )
        break;
      v2 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)v0 + 8);
      if ( v2 )
        v2(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v0);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v0);
      v0 += *(unsigned int *)v0;
    }
  }
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
