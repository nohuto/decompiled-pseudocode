/*
 * XREFs of ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x1804F0320
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EFC6C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0F78 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_ReflowItems(CAppLayoutOperation *this, char a2)
{
  int v3; // ebx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v4; // rdx
  enum DEVICE_SCALE_FACTOR v5; // r8d
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // esi
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  __int64 v11; // rbx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned int v16; // r15d
  int v17; // eax
  unsigned int v18; // edx
  __int64 v21; // [rsp+40h] [rbp-91h] BYREF
  __int32 v22; // [rsp+48h] [rbp-89h]
  __m128i v23; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+68h] [rbp-69h] BYREF
  int v25; // [rsp+70h] [rbp-61h]
  __m128i v26; // [rsp+78h] [rbp-59h] BYREF
  _DWORD v27[12]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v28[3]; // [rsp+B8h] [rbp-19h] BYREF
  __m128i v29; // [rsp+D0h] [rbp-1h]

  v3 = -2147319767;
  LODWORD(v21) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
                   *((_QWORD *)this + 5),
                   5LL);
  if ( !(_DWORD)v21 )
    return (unsigned int)v3;
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v27);
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v27, v4, v5);
  v7 = v27[0];
  v8 = 0;
  v25 = v6;
  v9 = 0;
  v10 = v27[2] - v6 * (v21 - 1) - v27[0];
  if ( !a2 )
  {
    v23.m128i_i64[0] = 0LL;
    v11 = *((_QWORD *)this + 5);
    v12 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23.m128i_i64);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __m128i *))(*(_QWORD *)v11 + 136LL))(
           v11,
           0LL,
           1LL,
           0LL,
           &v23);
    if ( v3 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v23.m128i_i64[0] + 24LL))(
                v23.m128i_i64[0],
                5LL,
                v28) >= 0 )
      {
        if ( v29.m128i_i32[2] - v29.m128i_i32[0] <= 0 )
          ++v9;
        v13 = v29.m128i_i32[2] - v29.m128i_i32[0] + v12;
        if ( v29.m128i_i32[2] - v29.m128i_i32[0] <= 0 )
          v13 = v12;
        v12 = v13;
      }
    }
    v8 = v10 - v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23.m128i_i64);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v7 = v27[0];
  }
  v14 = *((_QWORD *)this + 5);
  v15 = 0;
  v24 = 0LL;
  v23.m128i_i32[0] = v27[1];
  v22 = v27[3];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 136LL))(
         v14,
         0LL,
         1LL,
         0LL,
         &v24);
  if ( v3 >= 0 )
  {
    v16 = v21;
    while ( 1 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, 5LL, v28) < 0 )
        goto LABEL_26;
      v21 = 0LL;
      v26 = v29;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v28[0])(
             v28[0],
             &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
             &v21);
      if ( v3 >= 0 )
        break;
LABEL_24:
      v23 = v26;
      v7 = v25 + _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( v3 < 0 )
        goto LABEL_26;
      v22 = v23.m128i_i32[3];
      v23.m128i_i32[0] = v23.m128i_i32[1];
    }
    if ( a2 )
    {
      v18 = v10 % v16;
      v17 = v10 / v16;
    }
    else
    {
      v17 = v26.m128i_i32[2] - v26.m128i_i32[0];
      if ( v26.m128i_i32[2] - v26.m128i_i32[0] > 0 )
      {
LABEL_23:
        v26.m128i_i32[2] = v7 + v17;
        v26.m128i_i32[3] = v22;
        v26.m128i_i64[0] = __PAIR64__(v23.m128i_u32[0], v7);
        (*(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v21 + 104LL))(v21, 0LL, &v26);
        goto LABEL_24;
      }
      v18 = v8 % v9;
      v17 = v8 / v9;
    }
    if ( v15 < v18 )
      ++v17;
    ++v15;
    goto LABEL_23;
  }
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return (unsigned int)v3;
}
