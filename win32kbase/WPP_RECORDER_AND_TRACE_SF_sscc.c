_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sscc(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rbx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+70h] [rbp-18h]
  __int64 v25; // [rsp+78h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+58h] BYREF
  va_list va; // [rsp+E0h] [rbp+58h]
  va_list va1; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v27 = va_arg(va1, _QWORD);
  result = &retaddr;
  v11 = a9;
  v12 = a10;
  v13 = -1LL;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
    }
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
    }
    WORD1(v19) = WORD1(a9);
    if ( !a9 )
      v19 = "NULL";
    HIWORD(v23) = WORD1(v19);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    if ( !a10 )
      v12 = "NULL";
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v22 = v13 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    if ( !a9 )
      v11 = "NULL";
    LOWORD(v23) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          6LL,
                          &WPP_2101e6ada08e3422177879c6f3be7480_Traceguids,
                          v23,
                          v11,
                          v22,
                          v12,
                          v21,
                          (__int64 *)va,
                          1LL,
                          va1,
                          1LL,
                          0LL,
                          v24,
                          v25);
  }
  return result;
}
