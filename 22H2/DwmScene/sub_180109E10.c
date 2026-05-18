/*
 * XREFs of sub_180109E10 @ 0x180109E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180107934 @ 0x180107934 (sub_180107934.c)
 *     sub_18010B778 @ 0x18010B778 (sub_18010B778.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18011F9A0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_180109E10(__int64 a1, __int64 a2)
{
  __m128i v4; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+40h] [rbp-C0h]
  char v7; // [rsp+50h] [rbp-B0h]
  _QWORD v8[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v9; // [rsp+78h] [rbp-88h]
  __int64 v10; // [rsp+80h] [rbp-80h] BYREF
  __int128 v11; // [rsp+90h] [rbp-70h]
  char v12; // [rsp+A0h] [rbp-60h]
  _QWORD v13[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v16; // [rsp+E0h] [rbp-20h]
  char v17; // [rsp+F0h] [rbp-10h]
  _QWORD v18[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v19; // [rsp+118h] [rbp+18h]
  __int64 v20; // [rsp+120h] [rbp+20h] BYREF
  __int128 v21; // [rsp+130h] [rbp+30h]
  char v22; // [rsp+140h] [rbp+40h]
  _QWORD v23[4]; // [rsp+148h] [rbp+48h] BYREF
  char v24; // [rsp+168h] [rbp+68h]
  __int64 v25; // [rsp+170h] [rbp+70h] BYREF
  __int128 v26; // [rsp+180h] [rbp+80h]
  char v27; // [rsp+190h] [rbp+90h]
  _QWORD v28[4]; // [rsp+198h] [rbp+98h] BYREF
  char v29; // [rsp+1B8h] [rbp+B8h]
  __int64 v30; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v31; // [rsp+1D0h] [rbp+D0h]
  char v32; // [rsp+1E0h] [rbp+E0h]
  char v33; // [rsp+1E8h] [rbp+E8h] BYREF

  if ( dword_18021A510 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021A510);
    if ( dword_18021A510 == -1 )
    {
      v6 = 0LL;
      sub_18001CDF8(v5, (__int64)&qword_18020B4D8);
      v7 = 0;
      v8[2] = 0LL;
      v8[3] = 0LL;
      sub_18001CDF8(v8, (__int64)&qword_18020B418);
      v9 = 0;
      v11 = 0LL;
      sub_18001CDF8(&v10, (__int64)&qword_18020B618);
      v12 = 0;
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001CDF8(v13, (__int64)&qword_18020B518);
      v14 = 2;
      v16 = 0LL;
      sub_18001CDF8(&v15, (__int64)&qword_18020B438);
      v17 = 2;
      v18[2] = 0LL;
      v18[3] = 0LL;
      sub_18001CDF8(v18, (__int64)&qword_18020B4F8);
      v19 = 3;
      v21 = 0LL;
      sub_18001CDF8(&v20, (__int64)&qword_18020B478);
      v22 = 3;
      v23[2] = 0LL;
      v23[3] = 0LL;
      sub_18001CDF8(v23, (__int64)&qword_18020B538);
      v24 = 1;
      v26 = 0LL;
      sub_18001CDF8(&v25, (__int64)&qword_18020B4B8);
      v27 = 1;
      v28[2] = 0LL;
      v28[3] = 0LL;
      sub_18001CDF8(v28, (__int64)&qword_18020B578);
      v29 = 5;
      v31 = 0LL;
      sub_18001CDF8(&v30, (__int64)&qword_18020B498);
      v32 = 5;
      v4.m128i_i64[0] = (__int64)v5;
      v4.m128i_i64[1] = (__int64)&v33;
      sub_180107934(&qword_18021A4D0, &v4);
      `eh vector destructor iterator'(v5, 0x28uLL, 0xBuLL, (void (*)(void *))std::string::_Tidy_deallocate);
      atexit(sub_180133750);
      Init_thread_footer(&dword_18021A510);
    }
  }
  v4.m128i_i64[0] = 0LL;
  sub_18010B778(&qword_18021A4D0, &v4, a2);
  if ( v4.m128i_i64[0] == qword_18021A4D8 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return *(_BYTE *)(v4.m128i_i64[0] + 48);
}
