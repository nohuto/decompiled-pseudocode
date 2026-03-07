void (__fastcall **__fastcall WPP_RECORDER_AND_TRACE_SF_dqqdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        char a12,
        const wchar_t *a13))(unsigned __int64)
{
  const wchar_t *v13; // rbx
  void (__fastcall **result)(unsigned __int64); // rax
  struct RECORDER_LOG__ *v15; // rbp
  __int64 v16; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  __int64 v22; // rdi
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+80h] [rbp-38h] BYREF
  void (__fastcall **v25)(unsigned __int64); // [rsp+88h] [rbp-30h] BYREF

  v13 = a13;
  result = &off_1C0281C60;
  v15 = gRimLog;
  v16 = -1LL;
  v25 = &off_1C0281C60;
  v24 = 2;
  if ( a2 )
  {
    if ( a13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a13[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v20 = 10LL;
    }
    v21 = a13;
    if ( !a13 )
      v21 = L"NULL";
    result = (void (__fastcall **)(unsigned __int64))((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, char *, __int64, void (__fastcall ***)(unsigned __int64), __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                                                       a1,
                                                       43LL,
                                                       &WPP_520c372abf713e449e1c94695c528942_Traceguids,
                                                       10LL,
                                                       &v24,
                                                       4LL,
                                                       &a10,
                                                       8LL,
                                                       &v25,
                                                       8LL,
                                                       &a12,
                                                       4LL,
                                                       v21,
                                                       v20,
                                                       0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v16;
      while ( v13[v16] );
      v22 = 2 * v16 + 2;
    }
    else
    {
      v22 = 10LL;
    }
    if ( !v13 )
      v13 = L"NULL";
    LOWORD(v23) = 10;
    return (void (__fastcall **)(unsigned __int64))WppAutoLogTrace(
                                                     v15,
                                                     4LL,
                                                     1LL,
                                                     &WPP_520c372abf713e449e1c94695c528942_Traceguids,
                                                     v23,
                                                     &v24,
                                                     4LL,
                                                     &a10,
                                                     8LL,
                                                     &v25,
                                                     8LL,
                                                     &a12,
                                                     4LL,
                                                     v13,
                                                     v22,
                                                     0LL);
  }
  return result;
}
