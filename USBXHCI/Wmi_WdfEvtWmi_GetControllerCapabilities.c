__int64 __fastcall Wmi_WdfEvtWmi_GetControllerCapabilities(__int64 a1, unsigned int a2, void *a3, unsigned int *a4)
{
  size_t v6; // rbp
  __int64 v7; // rbx
  unsigned int v8; // eax

  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00632E8);
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 <= (unsigned int)v6 )
  {
    memset(a3, 0, v6);
    memmove(a3, *(const void **)(v7 + 16), *(unsigned int *)(v7 + 8));
    *a4 = *(_DWORD *)(v7 + 8);
    return 0LL;
  }
  else
  {
    *a4 = v8;
    return 3221225507LL;
  }
}
