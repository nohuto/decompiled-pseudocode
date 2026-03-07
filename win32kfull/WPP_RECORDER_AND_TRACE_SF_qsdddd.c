_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qsdddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rdi
  __int64 v10; // rbx
  struct RECORDER_LOG__ *v11; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+48h] BYREF
  va_list va; // [rsp+E0h] [rbp+48h]
  const char *v21; // [rsp+E8h] [rbp+50h]
  __int64 v22; // [rsp+F0h] [rbp+58h] BYREF
  va_list va1; // [rsp+F0h] [rbp+58h]
  __int64 v24; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  __int64 v26; // [rsp+100h] [rbp+68h] BYREF
  va_list va3; // [rsp+100h] [rbp+68h]
  va_list va4; // [rsp+108h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  result = &retaddr;
  v9 = v21;
  v10 = -1LL;
  v11 = gFullLog;
  if ( a2 )
  {
    if ( v21 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v21[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v21;
    if ( !v21 )
      v16 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
                            16LL,
                            (__int64 *)va,
                            8LL,
                            v16,
                            v15,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            va4,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v17) = 16;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v11,
                          5LL,
                          26LL,
                          &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
                          v17,
                          (__int64 *)va,
                          8LL,
                          v9);
  }
  return result;
}
