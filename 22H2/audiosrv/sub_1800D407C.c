/*
 * XREFs of sub_1800D407C @ 0x1800D407C
 * Callers:
 *     sub_1800D0620 @ 0x1800D0620 (sub_1800D0620.c)
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

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800D407C(__int64 a1, _WORD *a2)
{
  __int64 v3; // r14
  int v4; // edi
  __int64 v5; // rax
  char *v6; // rdx
  volatile signed __int32 *v7; // rcx
  char *v8; // r15
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  char *v11; // rdx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // r15
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r8
  char *v16; // rdx
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // r15
  volatile signed __int32 *v19; // rbx
  __int64 v20; // r8
  __int64 *v21; // rax
  bool v22; // bl
  __int64 v23; // rdx
  int *v25; // rbx
  __int64 v26; // r8
  volatile signed __int32 *v27; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+28h] [rbp-50h] BYREF
  char *v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v31; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v32; // [rsp+48h] [rbp-30h] BYREF
  int v34; // [rsp+88h] [rbp+10h] BYREF
  __int64 v35; // [rsp+90h] [rbp+18h] BYREF
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1;
  LODWORD(v35) = 0;
  sub_180003E08(&v29, (__int64)&qword_18019F818);
  sub_180003E08(&v28, (__int64)&qword_18019F818);
  sub_180003E08(&v27, (__int64)&qword_18019F818);
  sub_180003E08(&v36, (__int64)&qword_18019F818);
  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  try
  {
    sub_18002BB70(&v36, a2, v5);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v25 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      o__resetstkoflw();
    v34 = *v25;
    v4 = v34;
    if ( v34 < 0 )
      goto LABEL_36;
    v3 = a1;
  }
  v34 = 0;
  v6 = (char *)*sub_1800CADB4(&v36, &v35, v26, &v34);
  v7 = (volatile signed __int32 *)(v6 - 24);
  v8 = v29 - 24;
  if ( v6 - 24 != v29 - 24 )
  {
    if ( *((int *)v8 + 4) >= 0 && *(_QWORD *)v7 == *(_QWORD *)v8 )
    {
      v9 = sub_180006C80(v7);
      sub_180006A30((volatile signed __int32 *)v8);
      v29 = (char *)(v9 + 6);
    }
    else
    {
      sub_18002BB70((__int64 *)&v29, v6, *((_DWORD *)v6 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v11 = (char *)*sub_1800CADB4(&v36, &v35, v10, &v34);
  v12 = (volatile signed __int32 *)(v11 - 24);
  v13 = v28 - 6;
  if ( v11 - 24 != (char *)(v28 - 6) )
  {
    if ( *((int *)v13 + 4) >= 0 && *(_QWORD *)v12 == *(_QWORD *)v13 )
    {
      v14 = sub_180006C80(v12);
      sub_180006A30(v13);
      v28 = v14 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v28, v11, *((_DWORD *)v11 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v16 = (char *)*sub_1800CADB4(&v36, &v35, v15, &v34);
  v17 = (volatile signed __int32 *)(v16 - 24);
  v18 = v27 - 6;
  if ( v16 - 24 != (char *)(v27 - 6) )
  {
    if ( *((int *)v18 + 4) >= 0 && *(_QWORD *)v17 == *(_QWORD *)v18 )
    {
      v19 = sub_180006C80(v17);
      sub_180006A30(v18);
      v27 = v19 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)&v27, v16, *((_DWORD *)v16 - 4));
    }
  }
  sub_180006A30((volatile signed __int32 *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v21 = sub_1800CADB4(&v36, &v30, v20, &v34);
  v22 = 1;
  LODWORD(v35) = 1;
  if ( !sub_1800C6588((__int64)v21, v23) )
    v22 = v34 != -1;
  sub_180006A30((volatile signed __int32 *)(v30 - 24));
  if ( v22 )
  {
LABEL_14:
    v4 = -2147467259;
LABEL_36:
    sub_18005E8F8((__int64)"CAudioSessionInstanceId::Initialize", 790, v4);
    goto LABEL_37;
  }
  try
  {
    sub_1800D4618(&v29);
    sub_1800D4618(&v28);
    sub_1800D4618(&v27);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v34 = *(_DWORD *)v32;
    v3 = a1;
    v4 = v34;
  }
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = sub_1800183C0((char **)v3, v29);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = sub_1800D32F4(v3 + 8, v28);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = sub_1800D38A0((_DWORD *)(v3 + 56), v27);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = sub_1800188D0(v3);
  if ( v4 < 0 )
    goto LABEL_36;
LABEL_37:
  sub_180006A30((volatile signed __int32 *)(v36 - 24));
  sub_180006A30(v27 - 6);
  sub_180006A30(v28 - 6);
  sub_180006A30((volatile signed __int32 *)v29 - 6);
  return (unsigned int)v4;
}
