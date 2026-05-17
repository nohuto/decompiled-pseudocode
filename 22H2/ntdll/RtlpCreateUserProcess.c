/*
 * XREFs of RtlpCreateUserProcess @ 0x180089000
 * Callers:
 *     RtlCreateUserProcessEx @ 0x180088F40 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtCreateUserProcess @ 0x18009EDF0 (NtCreateUserProcess.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  _QWORD v39[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v40; // [rsp+140h] [rbp+40h] BYREF
  __int64 v41; // [rsp+148h] [rbp+48h]
  __int64 v42; // [rsp+150h] [rbp+50h]
  _DWORD *v43; // [rsp+158h] [rbp+58h]
  _QWORD v44[42]; // [rsp+160h] [rbp+60h]

  memset(a6 + 1, 0, 0x64uLL);
  *a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return 3221225485LL;
  v34 = 0LL;
  v33 = 48;
  v36 = 512;
  v35 = 0LL;
  if ( a5 )
    v37 = *(_QWORD *)(a5 + 8);
  else
    v37 = 0LL;
  v38 = 0LL;
  v27 = 48;
  v28 = 0LL;
  v30 = 512;
  v29 = 0LL;
  if ( a5 )
    v31 = *(_QWORD *)(a5 + 16);
  else
    v31 = 0LL;
  v32 = 0LL;
  v26 = 0LL;
  memset(&v39[1], 0, 0x50uLL);
  LOBYTE(v39[2]) |= 4u;
  v43 = a6 + 6;
  v39[0] = 88LL;
  v44[3] = a6 + 10;
  v10 = 2;
  v41 = 65539LL;
  v42 = 16LL;
  v44[0] = 0LL;
  v44[1] = 6LL;
  v44[2] = 64LL;
  v44[4] = 0LL;
  if ( a1 )
  {
    v10 = 4;
    v44[6] = *a1;
    v44[7] = *((_QWORD *)a1 + 1);
    v44[5] = 131077LL;
    v44[8] = 0LL;
    v25 = v25 & 0xFFFFFFE0 | 2;
    v44[11] = &v25;
    v44[9] = 131082LL;
    v44[10] = 8LL;
    v44[12] = 0LL;
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)(a5 + 24);
    if ( v11 )
    {
      v19 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v19 * 8) = 393216LL;
      *(__int64 *)((char *)&v42 + v19 * 8) = 8LL;
      v44[v19] = 0LL;
      v44[v19 - 1] = v11;
    }
    v12 = *(_QWORD *)(a5 + 32);
    if ( v12 )
    {
      v20 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v20 * 8) = 393217LL;
      *(__int64 *)((char *)&v42 + v20 * 8) = 8LL;
      v44[v20] = 0LL;
      v44[v20 - 1] = v12;
    }
    v13 = *(_QWORD *)(a5 + 40);
    if ( v13 )
    {
      v21 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v21 * 8) = 393218LL;
      *(__int64 *)((char *)&v42 + v21 * 8) = 8LL;
      v44[v21] = 0LL;
      v44[v21 - 1] = v13;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v22 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v22 * 8) = 131091LL;
      *(__int64 *)((char *)&v42 + v22 * 8) = 8LL;
      v44[v22] = 0LL;
      v44[v22 - 1] = a5 + 48;
    }
    v14 = *(_WORD *)(a5 + 2);
    if ( v14 )
    {
      v24 = v14 - 1;
      v18 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v18 * 8) = 131085LL;
      *(__int64 *)((char *)&v42 + v18 * 8) = 2LL;
      v44[v18] = 0LL;
      v44[v18 - 1] = &v24;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v15 = 4LL * v10++;
    *(__int64 *)((char *)&v41 + v15 * 8) = 393233LL;
    *(__int64 *)((char *)&v42 + v15 * 8) = 1LL;
    v44[v15] = 0LL;
    v44[v15 - 1] = 97LL;
  }
  if ( a2 )
  {
    v16 = *(_DWORD *)(a2 + 8);
    if ( v16 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v16 & 0x7FFFFFFF;
      v23 = 4LL * v10++;
      *(__int64 *)((char *)&v41 + v23 * 8) = 131090LL;
      *(__int64 *)((char *)&v42 + v23 * 8) = 8LL;
      v44[v23] = 0LL;
      v44[v23 - 1] = &v26;
    }
  }
  v40 = 32LL * v10 + 8;
  return NtCreateUserProcess(a6 + 2, a6 + 4, 0x2000000LL, 0x2000000LL, &v33, &v27, a3, a4, a2, v39, &v40);
}
