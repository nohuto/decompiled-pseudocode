/*
 * XREFs of sub_18011D2C0 @ 0x18011D2C0
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011A25C @ 0x18011A25C (sub_18011A25C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18011D2C0(int a1, __int64 a2, _QWORD *a3)
{
  _OWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // eax
  LPVOID v10; // rax
  __int64 *v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v15; // [rsp+48h] [rbp-8h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+28h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v12 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &unk_18015C488,
         23LL,
         0LL,
         &v12);
  if ( v6 >= 0 )
  {
    sub_18011A25C(&v15);
    v5 = v15;
    if ( v15 )
    {
      *v15 = 64;
      v5[1] = xmmword_180160A08;
      v5[3] = xmmword_1801609F8;
      v5[2] = xmmword_18015B710;
      v7 = *(unsigned int *)v5;
      v8 = *v12;
      if ( a1 == 3 )
        v9 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64, _QWORD, __int64 *))(v8 + 96))(
               v12,
               v5,
               v7,
               0LL,
               &v17);
      else
        v9 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64, _QWORD, __int64 *))(v8 + 24))(
               v12,
               v5,
               v7,
               0LL,
               &v17);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v14);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                 v14,
                 1LL,
                 &unk_180173740,
                 &v13);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 24LL))(v13, &pv);
            if ( v6 >= 0 )
            {
              v10 = pv;
              pv = 0LL;
              *a3 = v10;
            }
          }
        }
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CoTaskMemFree(v5);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return (unsigned int)v6;
}
