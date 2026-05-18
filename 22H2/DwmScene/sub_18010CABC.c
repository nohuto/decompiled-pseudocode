/*
 * XREFs of sub_18010CABC @ 0x18010CABC
 * Callers:
 *     sub_18010D300 @ 0x18010D300 (sub_18010D300.c)
 * Callees:
 *     sub_180026B88 @ 0x180026B88 (sub_180026B88.c)
 *     sub_18010BA00 @ 0x18010BA00 (sub_18010BA00.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010CABC(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 (__fastcall *v18)(); // rax
  _QWORD *v19; // rdx
  int v20; // r14d
  __int64 i; // rdi
  float v22; // xmm0_4
  float v23; // xmm3_4
  float *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  float *v30; // rax
  int v31; // ebx
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _DWORD *v40; // rcx
  char *v41; // rdx
  __int64 v42; // r10
  _DWORD *v43; // rcx
  char *v44; // rdx
  __int64 v45; // r10
  __int64 result; // rax
  _BYTE *v47; // rdx
  _QWORD v48[7]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-A8h]
  int v50[4]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v51[56]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v52; // [rsp+B0h] [rbp-58h]
  int v53[32]; // [rsp+B8h] [rbp-50h] BYREF
  int v54; // [rsp+138h] [rbp+30h] BYREF
  _DWORD v56[62]; // [rsp+140h] [rbp+38h] BYREF
  int v57; // [rsp+238h] [rbp+130h] BYREF
  _DWORD v59[63]; // [rsp+240h] [rbp+138h] BYREF
  int v60; // [rsp+33Ch] [rbp+234h] BYREF
  _DWORD v61[62]; // [rsp+340h] [rbp+238h] BYREF

  v9 = *(int *)(a1 + 372);
  v10 = *(_DWORD *)(a1 + 372) / 2;
  v11 = 16LL;
  v12 = v56;
  do
  {
    *(v12 - 1) = 0LL;
    *v12 = 0LL;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  v13 = 16LL;
  v14 = v59;
  do
  {
    *(v14 - 1) = 0LL;
    *v14 = 0LL;
    v14 += 2;
    --v13;
  }
  while ( v13 );
  memset(v53, 0, sizeof(v53));
  v52 = 0LL;
  v15 = *(_DWORD *)(a1 + 368);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_15;
        v48[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
        v18 = sub_18010CF40;
      }
      else
      {
        v48[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
        v18 = sub_18010CF70;
      }
    }
    else
    {
      v48[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
      v18 = sub_18010CFF0;
    }
  }
  else
  {
    v48[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
    v18 = sub_18010CFD0;
  }
  v48[1] = v18;
  v49 = v48;
  sub_180026B88((__int64)v48, (__int64)v51);
  if ( v49 )
  {
    v19 = v48;
    LOBYTE(v19) = v49 != v48;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v49 + 32LL))(v49, v19);
  }
LABEL_15:
  if ( *(_DWORD *)(a1 + 368) )
  {
    v20 = 0;
    if ( v9 > 0 )
    {
      for ( i = 0LL; i < v9; ++i )
      {
        v22 = fmaxf(
                (float)((float)((float)((float)v20 + 1.0) / (float)((float)(int)v9 + 1.0))
                      + (float)((float)((float)v20 + 1.0) / (float)((float)(int)v9 + 1.0)))
              - 1.0,
                -1.0);
        v50[0] = fminf(v22, 1.0);
        if ( !v52 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x18010CF3DLL);
        }
        *(float *)&v53[i] = (*(float (__fastcall **)(_BYTE *, int *))(*(_QWORD *)v52 + 16LL))(v52, v50);
        ++v20;
      }
    }
  }
  else
  {
    v50[0] = 0;
    sub_18010BA00(v53, (unsigned __int64)&v54, v50);
    v53[v10] = 1065353216;
  }
  v23 = 0.0;
  v24 = (float *)v53;
  v25 = 32LL;
  do
  {
    v23 = v23 + *v24++;
    --v25;
  }
  while ( v25 );
  v26 = 16LL;
  v27 = v61;
  do
  {
    *(v27 - 1) = 0LL;
    *v27 = 0LL;
    v27 += 2;
    --v26;
  }
  while ( v26 );
  v28 = v10;
  if ( (int)v10 > 0 )
  {
    v29 = 0LL;
    v30 = (float *)&v60;
    v31 = -(int)v10;
    do
    {
      v32 = *(float *)&v53[2 * v29 + 1] + *(float *)&v53[2 * v29];
      if ( v32 == 0.0 )
        v33 = 0.5;
      else
        v33 = *(float *)&v53[2 * v29 + 1] / v32;
      v34 = (float)v31 + v33;
      *(v30 - 1) = v34;
      *v30 = v34;
      v30[2] = v32;
      v31 += 2;
      ++v29;
      v30 += 4;
    }
    while ( v29 < v28 );
  }
  v35 = 0LL;
  v36 = 16LL;
  do
  {
    *(int *)((char *)&v54 + v35 * 4) = v59[v35 + 62];
    v56[v35 - 1] = v61[v35 - 1];
    v56[v35] = v61[v35];
    v56[v35 + 1] = v61[v35 + 1];
    v35 += 4LL;
    --v36;
  }
  while ( v36 );
  v37 = 0LL;
  v38 = 16LL;
  do
  {
    *(int *)((char *)&v57 + v37 * 4) = v59[v37 + 62];
    v59[v37 - 1] = v61[v37 - 1];
    v59[v37] = v61[v37];
    v59[v37 + 1] = v61[v37 + 1];
    v37 += 4LL;
    --v38;
  }
  while ( v38 );
  if ( v28 > 0 )
  {
    v39 = 0LL;
    do
    {
      *(float *)((char *)&v54 + v39 * 4) = *(float *)((char *)&v54 + v39 * 4) / a4;
      v56[v39 - 1] = 0;
      *(float *)&v56[v39 + 1] = *(float *)&v56[v39 + 1] / v23;
      *(int *)((char *)&v57 + v39 * 4) = 0;
      *(float *)&v59[v39 - 1] = *(float *)&v59[v39 - 1] / a5;
      *(float *)&v59[v39 + 1] = *(float *)&v59[v39 + 1] / v23;
      v39 += 4LL;
      --v28;
    }
    while ( v28 );
  }
  v40 = (_DWORD *)(a2 + 4);
  v41 = (char *)&v54 - a2;
  v42 = 16LL;
  do
  {
    *(v40 - 1) = *(_DWORD *)((char *)v40 + (_QWORD)v41 - 4);
    *v40 = *(_DWORD *)((char *)v40 + (_QWORD)v41);
    v40[1] = *(_DWORD *)((char *)v40 + (_QWORD)&v56[-1] - a2);
    v40[2] = *(_DWORD *)((char *)v40 + (_QWORD)v56 - a2);
    v40 += 4;
    --v42;
  }
  while ( v42 );
  v43 = (_DWORD *)(a3 + 4);
  v44 = (char *)&v57 - a3;
  v45 = 16LL;
  do
  {
    *(v43 - 1) = *(_DWORD *)((char *)v43 + (_QWORD)v44 - 4);
    *v43 = *(_DWORD *)((char *)v43 + (_QWORD)v44);
    v43[1] = *(_DWORD *)((char *)v43 + (_QWORD)&v59[-1] - a3);
    result = *(unsigned int *)((char *)v43 + (_QWORD)v59 - a3);
    v43[2] = result;
    v43 += 4;
    --v45;
  }
  while ( v45 );
  if ( v52 )
  {
    v47 = v51;
    LOBYTE(v47) = v52 != v51;
    return (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v52 + 32LL))(v52, v47);
  }
  return result;
}
