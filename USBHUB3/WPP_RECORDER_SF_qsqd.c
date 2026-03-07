__int64 WPP_RECORDER_SF_qsqd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  const char *v10; // rcx
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v15; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, const char *);
  v5 = (__int64)v15;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v15 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v15[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = "NULL";
    if ( v15 )
      v10 = v15;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      84LL,
      (__int64 *)va,
      8LL,
      v10,
      v9,
      va1);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(v5 + v6) );
  }
  LOWORD(v12) = 84;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v12, (__int64 *)va);
}
