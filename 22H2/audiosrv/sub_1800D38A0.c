/*
 * XREFs of sub_1800D38A0 @ 0x1800D38A0
 * Callers:
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 *     sub_1800D3180 @ 0x1800D3180 (sub_1800D3180.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800D38A0(_DWORD *a1, _WORD *a2)
{
  _DWORD *v3; // r12
  int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // rax
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // r8
  char *v13; // rdx
  volatile signed __int32 *v14; // rcx
  unsigned __int16 *v15; // rbx
  unsigned __int16 *v16; // r15
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r8
  __int64 *v19; // rax
  unsigned __int16 *v20; // rcx
  char v21; // r15
  int *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v28[8]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v29; // [rsp+40h] [rbp-48h] BYREF
  int v31; // [rsp+98h] [rbp+10h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int16 *v33; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0;
  LODWORD(v32) = 0;
  sub_180003E08(&v26, (__int64)&qword_18019F818);
  sub_180003E08(&v25, (__int64)&qword_18019F818);
  sub_180003E08(&v33, (__int64)&qword_18019F818);
  v5 = 0;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  try
  {
    sub_18002BB70(&v26, a2, v6);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v23 = (int *)v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      o__resetstkoflw();
    v31 = *v23;
    v5 = v31;
    v4 = 0;
    if ( v31 < 0 )
    {
      v9 = v25;
      goto LABEL_32;
    }
    v3 = a1;
  }
  v31 = 0;
  v7 = (char *)*sub_1800CADB4(&v26, &v32, v24, &v31);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = v25;
  v10 = v25 - 24;
  if ( v7 - 24 != (char *)(v25 - 24) )
  {
    if ( *(int *)(v10 + 16) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v10 )
    {
      v11 = sub_180006C80(v8);
      sub_180006A30((volatile signed __int32 *)v10);
      v9 = (__int64)(v11 + 6);
      v25 = v9;
    }
    else
    {
      sub_18002BB70(&v25, v7, *((_DWORD *)v7 - 4));
      v9 = v25;
    }
  }
  sub_180006A30((volatile signed __int32 *)(v32 - 24));
  if ( v31 == -1 )
  {
    v5 = -2147467259;
LABEL_32:
    v15 = v33;
    goto LABEL_33;
  }
  v13 = (char *)*sub_1800CADB4(&v26, &v32, v12, &v31);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = v33;
  v16 = v33 - 12;
  if ( v13 - 24 != (char *)(v33 - 12) )
  {
    if ( *((int *)v16 + 4) >= 0 && *(_QWORD *)v14 == *(_QWORD *)v16 )
    {
      v17 = sub_180006C80(v14);
      sub_180006A30((volatile signed __int32 *)v16);
      v15 = (unsigned __int16 *)(v17 + 6);
      v33 = v15;
    }
    else
    {
      sub_18002BB70((__int64 *)&v33, v13, *((_DWORD *)v13 - 4));
      v15 = v33;
    }
  }
  sub_180006A30((volatile signed __int32 *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_21;
  v19 = sub_1800CADB4(&v26, &v27, v18, &v31);
  LODWORD(v32) = 1;
  if ( sub_1800D3024(v20, v19) || (v21 = 0, v31 != -1) )
    v21 = 1;
  sub_180006A30((volatile signed __int32 *)(v27 - 24));
  if ( v21 )
  {
LABEL_21:
    v5 = -2147467259;
LABEL_33:
    sub_18005E8F8((__int64)"CAppInstanceId::Initialize", 633, v5);
    goto LABEL_34;
  }
  if ( *((_DWORD *)v15 - 4) == 1 && (unsigned __int16)sub_1800D3180(&v33) == 35 )
    v3[2] = 1;
  else
    v4 = o_wcstoul(v15, v28, 10LL);
  *v3 = v4;
  v3[1] = o_wcstoul(v9, v28, 10LL);
LABEL_34:
  sub_180006A30((volatile signed __int32 *)v15 - 6);
  sub_180006A30((volatile signed __int32 *)(v9 - 24));
  sub_180006A30((volatile signed __int32 *)(v26 - 24));
  return v5;
}
