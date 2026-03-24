/*
 * XREFs of DxgkDDisplayEnumInternal @ 0x1C013A870
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C01394C0 (DxgkDDisplayEnum.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C013AC08 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C0166280 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C0168B40 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(ULONG64 a1, char a2)
{
  __m128i *v3; // rax
  char *v4; // r15
  unsigned int v5; // esi
  char *v6; // r14
  __int64 v7; // rdx
  PVOID v8; // rcx
  PVOID v9; // rax
  unsigned int v10; // ebx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 *v14; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  const void *v17; // rdx
  char *v18; // rcx
  __int64 v20; // rax
  void *Src[2]; // [rsp+20h] [rbp-708h] BYREF
  void *v22[2]; // [rsp+30h] [rbp-6F8h]
  __m128i v23; // [rsp+40h] [rbp-6E8h]
  __m128i v24; // [rsp+50h] [rbp-6D8h]
  __m128i v25; // [rsp+60h] [rbp-6C8h]
  __m128i v26; // [rsp+70h] [rbp-6B8h]
  PVOID v27; // [rsp+80h] [rbp-6A8h] BYREF
  _BYTE v28[560]; // [rsp+88h] [rbp-6A0h] BYREF
  int v29; // [rsp+2B8h] [rbp-470h]
  PVOID P; // [rsp+2C0h] [rbp-468h] BYREF
  _BYTE v31[1076]; // [rsp+2C8h] [rbp-460h] BYREF
  int v32; // [rsp+6FCh] [rbp-2Ch]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  v3 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (__m128i *)MmUserProbeAddress;
  v23 = *v3;
  v25 = v23;
  v24 = v3[1];
  v26 = v24;
  v4 = (char *)_mm_srli_si128(v23, 8).m128i_u64[0];
  ProbeForWrite(v4, 560 * HIDWORD(v23.m128i_i64[0]), 4u);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
  v6 = (char *)_mm_srli_si128(v24, 8).m128i_u64[0];
  ProbeForWrite(v6, 1076LL * v5, 4u);
  v8 = 0LL;
  v27 = 0LL;
  v29 = 0;
  v9 = 0LL;
  P = 0LL;
  v32 = 0;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
  if ( v10 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(&v27, v10);
    v8 = v27;
    v9 = P;
  }
  if ( v5 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, v5);
    v8 = v27;
    v9 = P;
  }
  if ( v10 && !v8 || v5 && !v9 )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = v10;
    *(_QWORD *)(v20 + 32) = v5;
    WdLogEvent5_WdError(v20);
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    if ( v27 != v28 && v27 )
      ExFreePoolWithTag(v27, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v23.m128i_i64[0];
    v22[0] = (void *)v24.m128i_i64[0];
    Src[1] = v8;
    v22[1] = v9;
    v11 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v12 = LODWORD(Src[0]);
    v25.m128i_i32[0] = (__int32)Src[0];
    v13 = LODWORD(v22[0]);
    v26.m128i_i32[0] = (__int32)v22[0];
    v14 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a1 + 32 > MmUserProbeAddress || a1 + 32 <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v14 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *(__m128i *)a1 = v25;
    *(__m128i *)(a1 + 16) = v26;
    if ( v11 >= 0 )
    {
      if ( v4 )
      {
        v15 = 560 * v12;
        v16 = Src[1];
        if ( (unsigned __int64)&v4[v15] > *v14 || &v4[v15] <= v4 )
        {
          *(_BYTE *)*v14 = 0;
          v14 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v4, v16, v15);
      }
      if ( v6 )
      {
        v17 = v22[1];
        v18 = &v6[1076 * v13];
        if ( (unsigned __int64)v18 > *v14 || v18 <= v6 )
          *(_BYTE *)*v14 = 0;
        memmove(v6, v17, 1076 * v13);
      }
    }
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    if ( v27 != v28 )
    {
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
    }
    return (unsigned int)v11;
  }
}
