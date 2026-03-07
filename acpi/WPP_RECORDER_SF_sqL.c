__int64 WPP_RECORDER_SF_sqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+60h] [rbp-18h]
  __int64 v21; // [rsp+68h] [rbp-10h]
  __int64 v22; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v22 = va_arg(va1, _QWORD);
  v6 = a6;
  v9 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v17 = v9 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v19, v6, v17, (__int64 *)va, 8LL, va1, 4LL, 0LL, v20, v21);
}
