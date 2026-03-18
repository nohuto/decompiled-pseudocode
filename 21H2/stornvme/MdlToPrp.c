/*
 * XREFs of MdlToPrp @ 0x1C0004D00
 * Callers:
 *     SetPrpFromSrb @ 0x1C0002DA8 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     Feature_Servicing_ProtocolCommandTransferLength__private_IsEnabled @ 0x1C000FBD0 (Feature_Servicing_ProtocolCommandTransferLength__private_IsEnabled.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     GetSrbFunction @ 0x1C0017B54 (GetSrbFunction.c)
 *     BuildReadWriteCommand @ 0x1C001A150 (BuildReadWriteCommand.c)
 *     GetLbaFromCdb @ 0x1C001AE7C (GetLbaFromCdb.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int8 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int *v12; // r15
  __int64 SrbScsiData; // rax
  int v14; // r9d
  int v15; // r11d
  unsigned __int8 v16; // cl
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // r15d
  unsigned int v21; // r8d
  unsigned int v22; // edi
  unsigned int v23; // r8d
  __int64 v24; // r11
  __m128i *v25; // r9
  __int64 v26; // rdx
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // [rsp+48h] [rbp-10h] BYREF
  int v31; // [rsp+98h] [rbp+40h]
  unsigned int v32; // [rsp+98h] [rbp+40h]
  unsigned int v33; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+50h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0;
  v30 = 0LL;
  v34 = 0;
  v31 = 0;
  if ( (*(_BYTE *)(v4 + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v30);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v30);
    if ( !(_DWORD)result )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        v10 = *(_QWORD *)(a2 + 64);
        v11 = 60LL;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 24);
        v11 = 16LL;
      }
      v12 = (unsigned int *)(a2 + v11);
      if ( *(_DWORD *)(a1 + 128) )
      {
        v33 = 0;
        SrbScsiData = GetSrbScsiData(a2, &v33, 0LL, 0LL, 0LL);
        if ( GetLbaFromCdb(SrbScsiData, v33, SrbScsiData) )
        {
          v8 = (unsigned __int8 *)*v8;
          if ( (_BYTE)v8 == 40 || (_BYTE)v8 == 42 || (_BYTE)v8 == 0x88 || (_BYTE)v8 == 0x8A )
          {
            v31 = *(_DWORD *)(a1 + 128);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v16 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v16 = *(_BYTE *)(a2 + 7);
            v17 = v16;
            v18 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v16 + 1752) + 52LL);
            *v12 -= -v18 & (v18 + *(_DWORD *)(a1 + 128) - 1);
            if ( (unsigned int)v17 < *(_DWORD *)(a1 + 224) )
            {
              v19 = *(_QWORD *)(a1 + 8 * v17 + 1752);
              if ( v19 )
                v14 = *(_DWORD *)(v19 + 16);
            }
            BuildReadWriteCommand(a1, a2, v9, v15, v4 + 4096, v14);
          }
        }
      }
      v32 = *(_DWORD *)(v4 + 4216) + v31;
      v20 = *v12;
      if ( (unsigned int)Feature_Servicing_ProtocolCommandTransferLength__private_IsEnabled(v8, v7, v9)
        && (unsigned int)GetSrbFunction(a2) == 9 )
      {
        if ( *(_DWORD *)(v10 + 36) )
        {
          v20 = *(_DWORD *)(v10 + 36);
        }
        else if ( *(_DWORD *)(v10 + 32) )
        {
          v20 = *(_DWORD *)(v10 + 32);
        }
      }
      v21 = v32;
      v22 = (v20 >> 12) + (((v20 & 0xFFF) + (v32 & 0xFFF) + 4095) >> 12);
      if ( v32 >= 0x1000 )
      {
        v5 = v32 >> 12;
        v21 = -4096 * (v32 >> 12) + v32;
      }
      if ( !v22 || v5 + v22 > v34 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v21 + (*(_QWORD *)(8LL * v5) << 12);
      if ( v22 != 1 )
      {
        if ( v22 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(8LL * (v5 + 1)) << 12;
          memset((void *)v4, 0, 0x1000uLL);
          *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
        }
        else
        {
          v33 = 0;
          memset((void *)v4, 0, 0x1000uLL);
          v23 = 1;
          v24 = v22 - 1;
          v25 = (__m128i *)v4;
          if ( (unsigned int)v24 < 8
            || v4 + 8 <= 8 * (unsigned __int64)((unsigned int)v24 + v5)
            && v4 + 8 * v24 >= 8 * (unsigned __int64)(v5 + 1) )
          {
            goto LABEL_46;
          }
          v26 = v5 + 5;
          v27 = _mm_cvtsi32_si128(0xCu);
          do
          {
            v23 += 8;
            *v25 = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v26 - 4))), v27);
            v28 = (unsigned int)(v26 + 2);
            v25[1] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v26 - 2))), v27);
            v29 = _mm_loadu_si128((const __m128i *)(8 * v26));
            v26 = (unsigned int)(v26 + 8);
            v25[2] = _mm_sll_epi64(v29, v27);
            v25[3] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8 * v28)), v27);
            v25 += 4;
          }
          while ( v23 < v22 - (((_BYTE)v22 - 1) & 7) );
          while ( v23 < v22 )
          {
LABEL_46:
            v25 = (__m128i *)((char *)v25 + 8);
            v25[-1].m128i_i64[1] = *(_QWORD *)(8LL * (v23 + v5)) << 12;
            ++v23;
          }
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v33);
        }
      }
      return 0LL;
    }
  }
  return result;
}
