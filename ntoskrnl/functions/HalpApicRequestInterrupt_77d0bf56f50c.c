__int64 __fastcall HalpApicRequestInterrupt(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4, _DWORD *a5)
{
  char v5; // r14
  __m128i *v7; // rsi
  bool v8; // zf
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int32 v11; // ebx
  int v12; // ebx
  int v13; // ecx
  int v15; // ecx
  __int64 v16; // xmm0_8
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // ecx
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]

  v5 = 0;
  LODWORD(v26) = 0;
  v7 = a3;
  v8 = *a5 == -1;
  v25 = 0LL;
  if ( !v8 )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) != -10 )
  {
    v16 = a3[1].m128i_i64[0];
    v17 = _mm_cvtsi128_si32(*a3);
    v25 = *a3;
    v26 = v16;
    v18 = v17 - 4;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 )
          return 3221225485LL;
        _BitScanForward(&v20, v25.m128i_u32[3]);
        v25.m128i_i32[3] = 1 << v20;
      }
      else
      {
        _BitScanForward(&v21, v25.m128i_u32[2]);
        v25.m128i_i32[2] = 1 << v21;
      }
    }
    v7 = &v25;
  }
  v9 = 0;
  v10 = (unsigned __int8)a4;
  switch ( v7->m128i_i32[0] )
  {
    case 6:
      v10 = (unsigned __int8)a4 | 0x800;
      v11 = v7->m128i_i32[2];
      if ( !HalpApicX2Mode )
      {
        v12 = v7->m128i_i32[3] & 0xF | (16 * v11);
LABEL_6:
        v9 = v12 << 24;
        break;
      }
      v9 = (unsigned __int16)v7->m128i_i32[3] | (v11 << 16);
      break;
    case 1:
      v10 = (unsigned __int8)a4 | 0x80000;
      break;
    case 2:
      v10 = (unsigned __int8)a4 | 0xC0000;
      break;
    case 3:
      v5 = HalpApicValidateSelfIpi;
      v10 = (unsigned __int8)a4 | 0x40000;
      break;
    case 4:
      v22 = v7->m128i_u32[2];
      v9 = v22;
      if ( !HalpApicX2Mode )
      {
        v9 = v22 << 24;
        if ( v22 != -1
          && HalpApicValidateSelfIpi
          && (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(32LL) >> 24 == v7->m128i_i32[2] )
        {
          v5 = 1;
        }
      }
      break;
    case 5:
      v12 = v7->m128i_i32[2];
      v10 = (unsigned __int8)a4 | 0x800;
      goto LABEL_6;
    default:
      return 3221225485LL;
  }
  v13 = a5[1];
  if ( v13 == 1 )
    goto LABEL_8;
  v15 = v13 - 2;
  if ( !v15 )
  {
    v10 |= 0x400u;
    goto LABEL_8;
  }
  v23 = v15 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 == 3 )
      {
        v10 |= 0x500u;
        goto LABEL_8;
      }
      return 3221225485LL;
    }
    v10 |= 0x700u;
  }
  else
  {
    v10 |= 0x200u;
  }
LABEL_8:
  ((void (__fastcall *)(_QWORD, _QWORD))HalpApicWriteCommand)(v9, v10);
  if ( v5 && a5[1] == 1 )
  {
    while ( ((unsigned int)((__int64 (__fastcall *)(_QWORD))HalpApicRead)(((a4 >> 1) & 0x7FFFFFF0) + 512) & (1 << (a4 & 0x1F))) == 0 )
      ;
  }
  return 0LL;
}
