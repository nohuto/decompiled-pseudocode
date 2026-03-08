/*
 * XREFs of RtlpCreateUserProcess @ 0x140B6653C
 * Callers:
 *     RtlCreateUserProcessEx @ 0x140B664C0 (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x140413CF0 (ZwCreateUserProcess.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v15[5]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  _BYTE v23[80]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v24; // [rsp+130h] [rbp+30h]
  __int64 v25; // [rsp+138h] [rbp+38h]
  __int64 v26; // [rsp+140h] [rbp+40h]
  _DWORD *v27; // [rsp+148h] [rbp+48h]
  _QWORD v28[42]; // [rsp+150h] [rbp+50h] BYREF

  memset(&v28[5], 0, 0x120uLL);
  v17 = 48LL;
  v20 = 512LL;
  v14 = 0LL;
  v15[1] = 48LL;
  v15[4] = 512LL;
  memset(a6 + 1, 0, 0x64uLL);
  *a6 = 104;
  v18 = 0LL;
  v19 = 0LL;
  v15[2] = 0LL;
  v21 = 0LL;
  v15[3] = 0LL;
  v16 = 0LL;
  v15[0] = 0LL;
  memset(v23, 0, sizeof(v23));
  v23[8] |= 4u;
  v27 = a6 + 6;
  v28[3] = a6 + 10;
  v9 = 2;
  v22 = 88LL;
  v25 = 65539LL;
  v26 = 16LL;
  v28[0] = 0LL;
  v28[1] = 6LL;
  v28[2] = 64LL;
  v28[4] = 0LL;
  if ( a1 )
  {
    v28[6] = *a1;
    v28[7] = *((_QWORD *)a1 + 1);
    LODWORD(v14) = 2;
    v9 = 4;
    v28[11] = &v14;
    v28[5] = 131077LL;
    v28[8] = 0LL;
    v28[9] = 131082LL;
    v28[10] = 8LL;
    v28[12] = 0LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v10 = 4LL * v9++;
    *(__int64 *)((char *)&v25 + v10 * 8) = 393233LL;
    *(__int64 *)((char *)&v26 + v10 * 8) = 1LL;
    v28[v10] = 0LL;
    v28[v10 - 1] = 97LL;
  }
  if ( a2 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    if ( v11 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v11 & 0x7FFFFFFF;
      v13 = 4LL * v9++;
      *(__int64 *)((char *)&v25 + v13 * 8) = 131090LL;
      *(__int64 *)((char *)&v26 + v13 * 8) = 8LL;
      v28[v13] = 0LL;
      v28[v13 - 1] = v15;
    }
  }
  v24 = 32LL * v9 + 8;
  return ZwCreateUserProcess((__int64)(a6 + 2), (__int64)(a6 + 4));
}
