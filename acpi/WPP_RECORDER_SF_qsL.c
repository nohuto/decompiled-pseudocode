/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C0022EB8
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001FEA4 (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x1C00325E0 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qsL(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v5; // rbx
  const char *v6; // rdi
  unsigned __int64 v9; // r11
  int v11; // eax
  __int64 v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp-10h]
  __int64 v19; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v21; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  v5 = -1LL;
  v6 = v21;
  v9 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v9 + 1) >= 4u )
  {
    if ( v21 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v21[v12] );
    }
    v13 = v21;
    if ( !v21 )
      v13 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v9),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      v13);
  }
  if ( v6 )
  {
    do
      ++v5;
    while ( v6[v5] );
    v14 = v5 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v16, (__int64 *)va, 8LL, v6, v14, va1, 4LL, 0LL, v17, v18);
}
