/*
 * XREFs of WPP_RECORDER_SF_sqqD @ 0x1C0038878
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0037EA0 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C008B620 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqqD(
        __int64 a1,
        _DWORD a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v6; // rbx
  const char *v7; // rdi
  unsigned __int64 v10; // r11
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rbx
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v21; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v6 = -1LL;
  v7 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a4,
      v15,
      v14,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v16 = v6 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !a6 )
    v7 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           a3,
           &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
           v18,
           v7,
           v16,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
