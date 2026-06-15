/*
 * XREFs of sub_1800DC0A4 @ 0x1800DC0A4
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 * Callees:
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800DC0A4(__int64 a1, __int64 a2, unsigned __int16 *a3, _QWORD *a4)
{
  void *v7; // rdi
  unsigned int v8; // r14d
  int v9; // ebx
  unsigned int v10; // esi
  _BYTE *v11; // rdx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v25[6]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[112]; // [rsp+B0h] [rbp-50h] BYREF

  v24 = 0LL;
  v15 = 0LL;
  v13 = 0;
  v7 = 0LL;
  Src = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v25[0] = 590439624;
  v25[1] = 1283267372;
  v25[2] = 1907779772;
  v8 = 104;
  v25[3] = 1730509416;
  v25[4] = 1;
  memset(v26, 0, 0x68uLL);
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  if ( a3 && a1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &unk_18015C488,
           23LL,
           0LL,
           &v24);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v15);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
               v15,
               &xmmword_18015A8B0,
               pvar);
        if ( v9 >= 0 )
        {
          if ( LOWORD(pvar[0]) != 19 )
          {
LABEL_7:
            v9 = -2147418113;
            goto LABEL_26;
          }
          v10 = (unsigned int)pvar[1];
          *(_OWORD *)pvar = 0LL;
          v23 = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(v15, v25, pvar);
          if ( v9 >= 0 )
          {
            if ( LOWORD(pvar[0]) != 31 )
              goto LABEL_10;
            v9 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
                   *(_QWORD *)&dwCreationFlags,
                   pvar[1],
                   &v21);
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v21 + 24LL))(
                     v21,
                     &unk_18015B078,
                     1LL);
              if ( v9 >= 0 )
              {
                v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, v10, &v14);
                if ( v9 >= 0 )
                {
                  v9 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v14)(v14, &unk_18015BB38, &v19);
                  if ( v9 >= 0 )
                  {
                    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v16);
                    if ( v9 >= 0 )
                    {
                      if ( v16 != 3 )
                        goto LABEL_7;
                      v9 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                             v14,
                             1LL,
                             &unk_1801705A8,
                             &v18);
                      if ( v9 >= 0 )
                      {
                        v9 = sub_18004A758(a3, (__int64 *)&Src);
                        v7 = Src;
                        if ( v9 >= 0 )
                        {
                          v11 = Src;
                          if ( *(_DWORD *)Src >= 0x68u )
                          {
                            v8 = *(_DWORD *)Src;
                          }
                          else
                          {
                            memcpy(v26, Src, *(unsigned int *)Src);
                            v11 = v26;
                          }
                          v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(*(_QWORD *)v18 + 24LL))(
                                 v18,
                                 v11,
                                 v8,
                                 &v13);
                          if ( v9 >= 0 && !v13 )
LABEL_10:
                            v9 = -2004287480;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -2147024809;
  }
LABEL_26:
  if ( a4 )
    *a4 = 0LL;
  PropVariantClear(pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v9 < 0 )
    sub_18005E8F8((__int64)"IsFormatSupportedByHwAudioEngine", 418, v9);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
