__int64 __fastcall DxgkDDisplayEnumInternal(ULONG64 a1, char a2)
{
  __m128i *v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // r15
  unsigned int v6; // esi
  char *v7; // r14
  _BYTE *Pool2; // rcx
  PVOID v9; // r8
  unsigned int v10; // ebx
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned __int64 *v14; // rbx
  const void *v15; // rdx
  char *v16; // rax
  const void *v17; // rdx
  char *v18; // rax
  void *Src[2]; // [rsp+50h] [rbp-718h] BYREF
  void *v21[2]; // [rsp+60h] [rbp-708h]
  __m128i v22; // [rsp+70h] [rbp-6F8h]
  __m128i v23; // [rsp+80h] [rbp-6E8h]
  __m128i v24; // [rsp+90h] [rbp-6D8h]
  __m128i v25; // [rsp+A0h] [rbp-6C8h]
  PVOID v26; // [rsp+B0h] [rbp-6B8h]
  _BYTE v27[560]; // [rsp+B8h] [rbp-6B0h] BYREF
  unsigned int v28; // [rsp+2E8h] [rbp-480h]
  PVOID P; // [rsp+2F0h] [rbp-478h] BYREF
  _BYTE v30[1076]; // [rsp+2F8h] [rbp-470h] BYREF
  int v31; // [rsp+72Ch] [rbp-3Ch]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  v3 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (__m128i *)MmUserProbeAddress;
  v22 = *v3;
  v24 = v22;
  v23 = v3[1];
  v25 = v23;
  v4 = HIDWORD(v22.m128i_i64[0]);
  v5 = (char *)_mm_srli_si128(v22, 8).m128i_u64[0];
  ProbeForWrite(v5, 560 * HIDWORD(v22.m128i_i64[0]), 4u);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
  v7 = (char *)_mm_srli_si128(v23, 8).m128i_u64[0];
  ProbeForWrite(v7, 1076LL * v6, 4u);
  Pool2 = 0LL;
  v26 = 0LL;
  v28 = 0;
  v9 = 0LL;
  P = 0LL;
  v31 = 0;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  if ( v10 )
  {
    if ( v10 > 1 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x230 )
        goto LABEL_8;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 560LL * v10, 1265072196LL);
      v26 = Pool2;
    }
    else
    {
      v26 = v27;
      memset(v27, 0, 560LL * v10);
      Pool2 = v27;
    }
    v28 = v10;
    v9 = P;
  }
LABEL_8:
  if ( v6 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, v6);
    Pool2 = v26;
    v9 = P;
  }
  if ( v10 && !Pool2 || v6 && !v9 )
  {
    WdLogSingleEntry2(2LL, v4, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
      v4,
      v6,
      0LL,
      0LL,
      0LL);
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    if ( v26 != v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v22.m128i_i64[0];
    v21[0] = (void *)v23.m128i_i64[0];
    Src[1] = Pool2;
    v21[1] = v9;
    v11 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v12 = LODWORD(Src[0]);
    v24.m128i_i32[0] = (__int32)Src[0];
    v13 = LODWORD(v21[0]);
    v25.m128i_i32[0] = (__int32)v21[0];
    v14 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a1 + 32 > MmUserProbeAddress || a1 + 32 <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v14 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *(__m128i *)a1 = v24;
    *(__m128i *)(a1 + 16) = v25;
    if ( v11 >= 0 )
    {
      if ( v5 )
      {
        v15 = Src[1];
        v16 = &v5[560 * v12];
        if ( (unsigned __int64)v16 > *v14 || v16 <= v5 )
        {
          *(_BYTE *)*v14 = 0;
          v14 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v5, v15, 560 * v12);
      }
      if ( v7 )
      {
        v17 = v21[1];
        v18 = &v7[1076 * v13];
        if ( (unsigned __int64)v18 > *v14 || v18 <= v7 )
          *(_BYTE *)*v14 = 0;
        memmove(v7, v17, 1076 * v13);
      }
    }
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    if ( v26 != v27 )
    {
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    return (unsigned int)v11;
  }
}
