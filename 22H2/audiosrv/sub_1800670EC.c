/*
 * XREFs of sub_1800670EC @ 0x1800670EC
 * Callers:
 *     sub_18004DDF0 @ 0x18004DDF0 (sub_18004DDF0.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_180067090 @ 0x180067090 (sub_180067090.c)
 *     sub_1800D7D70 @ 0x1800D7D70 (sub_1800D7D70.c)
 *     sub_1800D8C50 @ 0x1800D8C50 (sub_1800D8C50.c)
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 *     sub_1800E5760 @ 0x1800E5760 (sub_1800E5760.c)
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180052F70 @ 0x180052F70 (sub_180052F70.c)
 *     sub_1800671EC @ 0x1800671EC (sub_1800671EC.c)
 *     sub_18006725C @ 0x18006725C (sub_18006725C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800D542C @ 0x1800D542C (sub_1800D542C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800670EC(__int64 a1, __int64 a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  void *v6; // rbx
  __int64 v7; // rax
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v4 = sub_180052F70(a1);
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)sub_18006A18C(24LL, &unk_18019F848);
      v6 = v5;
      if ( v5 )
      {
        *v5 = 0LL;
        v5[1] = 0LL;
        v5[2] = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v7 = sub_18006725C(v11, a2);
        v4 = sub_1800671EC(v6, v7, a1);
        if ( v4 >= 0 )
        {
          ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)pfnwk, v6, (PTP_CALLBACK_ENVIRON)(a1 + 8));
          if ( ThreadpoolWork )
          {
            v4 = 0;
          }
          else
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
          }
          if ( v4 >= 0 )
          {
            SubmitThreadpoolWork(ThreadpoolWork);
            v6 = 0LL;
          }
        }
      }
      else
      {
        v4 = -2147024882;
      }
      if ( v6 )
        sub_1800D542C(v6);
    }
  }
  unknown_libname_207(a2, a2);
  return (unsigned int)v4;
}
