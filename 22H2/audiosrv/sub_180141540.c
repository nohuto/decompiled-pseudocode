/*
 * XREFs of sub_180141540 @ 0x180141540
 * Callers:
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 *     sub_180142450 @ 0x180142450 (sub_180142450.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_1801425A8 @ 0x1801425A8 (sub_1801425A8.c)
 */

__int64 __fastcall sub_180141540(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 *v24; // rax
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+54h] [rbp-ACh]
  _OWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  _BYTE v31[1056]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+4C0h] [rbp+3C0h] BYREF

  v28 = 512;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v2 = a1[24];
  v3 = 0;
  v27 = 0;
  v26 = xmmword_180178F18;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _OWORD *, int, char *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &v26,
         24LL,
         v29,
         40,
         &v32);
  if ( v4 >= 0 )
  {
    v5 = sub_180055F40(DWORD1(v29[0]));
    v6 = v5;
    if ( v5 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD *, _DWORD, char *))(*(_QWORD *)a1[24] + 24LL))(
             a1[24],
             &v26,
             24LL,
             v5,
             DWORD1(v29[0]),
             &v32);
      if ( v7 >= 0 )
      {
        v8 = v6[1] - 0x4E320E64ABF25C7ELL;
        if ( v6[1] == 0x4E320E64ABF25C7ELL )
          v8 = v6[2] + 0x68C13A28092F6F4FLL;
        if ( v8
          || *((_DWORD *)v6 + 6)
          || *((_DWORD *)v6 + 7)
          || *((_DWORD *)v6 + 8) != 1
          || *((_DWORD *)v6 + 9)
          || *((_DWORD *)v6 + 10) != 3
          || *((_DWORD *)v6 + 11) != 1048
          || !*((_DWORD *)v6 + 12)
          || *((_DWORD *)v6 + 13) )
        {
          v3 = -2147024809;
        }
        else
        {
          sub_1800F4CBC((__int64)(a1 + 9));
          v9 = 0;
          if ( *((_DWORD *)v6 + 12) )
          {
            v10 = a1[10];
            do
            {
              v11 = 8LL;
              v12 = &v6[131 * v9 + 7];
              v13 = v31;
              do
              {
                v14 = *v12;
                v15 = v12[1];
                v12 += 8;
                *v13 = v14;
                v16 = *(v12 - 6);
                v13[1] = v15;
                v17 = *(v12 - 5);
                v13[2] = v16;
                v18 = *(v12 - 4);
                v13[3] = v17;
                v19 = *(v12 - 3);
                v13[4] = v18;
                v20 = *(v12 - 2);
                v13[5] = v19;
                v21 = *(v12 - 1);
                v13[6] = v20;
                v13 += 8;
                *(v13 - 1) = v21;
                --v11;
              }
              while ( v11 );
              v22 = *v12;
              v23 = *((_QWORD *)v12 + 2);
              *v13 = v22;
              *((_QWORD *)v13 + 2) = v23;
              v10 = sub_1801425A8(a1 + 9, v31, v10);
              v24 = (__int64 *)a1[10];
              if ( v24 )
                *v24 = v10;
              else
                a1[9] = v10;
              ++v9;
              a1[10] = v10;
            }
            while ( v9 < *((_DWORD *)v6 + 12) );
          }
        }
      }
      else
      {
        v3 = v7;
      }
      sub_180033A70(v6);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)v4;
  }
  return v3;
}
