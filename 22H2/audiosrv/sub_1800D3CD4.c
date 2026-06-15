/*
 * XREFs of sub_1800D3CD4 @ 0x1800D3CD4
 * Callers:
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800D3CD4(__int64 a1, char *a2, _WORD *a3)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 v6; // rax
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // r15
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  char *v12; // rdx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // r15
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rax
  bool v18; // bl
  __int64 v19; // rdx
  int *v21; // rbx
  __int64 v22; // r8
  volatile signed __int32 *v23; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+28h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v27; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v28; // [rsp+48h] [rbp-30h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  LODWORD(v32) = 0;
  sub_180003E08(&v24, (__int64)&qword_18019F818);
  sub_180003E08(&v23, (__int64)&qword_18019F818);
  sub_180003E08(&v25, (__int64)&qword_18019F818);
  v5 = 0;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  try
  {
    sub_18002BB70(&v25, a3, v6);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v21 = (int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      o__resetstkoflw();
    v31 = *v21;
    v5 = v31;
    if ( v31 < 0 )
      goto LABEL_29;
    v4 = a1;
  }
  v31 = 0;
  v7 = (char *)*sub_1800CADB4(&v25, &v32, v22, &v31);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = v24 - 6;
  if ( v7 - 24 != (char *)(v24 - 6) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = sub_180006C80(v8);
      sub_180006A30(v9);
      v24 = v10 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v24, v7, *((_DWORD *)v7 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_23;
  v12 = (char *)*sub_1800CADB4(&v25, &v32, v11, &v31);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = v23 - 6;
  if ( v12 - 24 != (char *)(v23 - 6) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = sub_180006C80(v13);
      sub_180006A30(v14);
      v23 = v15 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v23, v12, *((_DWORD *)v12 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_23;
  v17 = sub_1800CADB4(&v25, &v26, v16, &v31);
  v18 = 1;
  LODWORD(v32) = 1;
  if ( !sub_1800C6588((__int64)v17, v19) )
    v18 = v31 != -1;
  sub_180006A30((volatile signed __int32 *)(v26 - 24));
  if ( v18 )
  {
LABEL_23:
    v5 = -2147467259;
LABEL_29:
    sub_18005E8F8((__int64)"CAudioSessionInstanceId::Initialize", 867, v5);
    goto LABEL_30;
  }
  try
  {
    sub_1800D4618(&v24);
    sub_1800D4618(&v23);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v31 = *(_DWORD *)v28;
    v4 = a1;
    v5 = v31;
  }
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = sub_1800183C0((char **)v4, a2);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = sub_1800D32F4(v4 + 8, v24);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = sub_1800D38A0((_DWORD *)(v4 + 56), v23);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = sub_1800188D0(v4);
  if ( v5 < 0 )
    goto LABEL_29;
LABEL_30:
  sub_180006A30((volatile signed __int32 *)(v25 - 24));
  sub_180006A30(v23 - 6);
  sub_180006A30(v24 - 6);
  return (unsigned int)v5;
}
