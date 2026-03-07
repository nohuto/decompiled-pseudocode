__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rbx
  int v18; // edi
  char v19; // al
  __int64 v20; // rcx
  int Bounds; // eax
  __m128i v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  unsigned int v24; // r9d
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-60h]
  __int128 v33; // [rsp+30h] [rbp-50h] BYREF
  int v34; // [rsp+40h] [rbp-40h]
  unsigned int v35; // [rsp+44h] [rbp-3Ch]
  unsigned int v36; // [rsp+48h] [rbp-38h]
  __int128 v37; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v38[20]; // [rsp+60h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v34 = 0;
  v35 = 0;
  v6 = 0;
  v36 = 0;
  v8 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  *(_DWORD *)(a1 + 32) = v8;
  LOBYTE(v8) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v33 = 0LL;
  if ( (_BYTE)v8 == 2 )
  {
    v11 = *(_DWORD *)(a1 + 152);
    if ( v11 )
    {
      v9 = 0;
      v15 = *(int *)(a1 + 152);
      if ( v11 > 0 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v16);
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v16);
          v37 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
          v8 = *(_QWORD *)(v17 + 24);
          if ( v8 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 61LL);
            v20 = *(_QWORD *)(v17 + 24);
            if ( v19 )
            {
              Bounds = CFilterEffect::GetBounds(v20, a2, &v37);
              v9 = Bounds;
              if ( Bounds < 0 )
              {
                v10 = Bounds;
                v32 = 238;
                goto LABEL_3;
              }
            }
            else
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 56LL))(v20, 42LL) )
              {
                v9 = -2147467263;
                v32 = 256;
                goto LABEL_7;
              }
              v22 = *(__m128i *)(v17 + 4);
              *(_QWORD *)&v37 = 0LL;
              v23 = _mm_srli_si128(v22, 8).m128i_u64[0];
              v8 = HIDWORD(v22.m128i_i64[0]);
              *((float *)&v37 + 3) = (float)(HIDWORD(v23) - v22.m128i_i32[1]);
              *((float *)&v37 + 2) = (float)((int)v23 - v22.m128i_i32[0]);
            }
            v6 = v36;
          }
          else
          {
            v37 = *a2;
          }
          v24 = v6 + 1;
          *(_DWORD *)v38 = v18;
          *(_OWORD *)&v38[4] = v37;
          if ( v6 + 1 < v6 )
            break;
          v25 = 0;
          if ( v24 > v35 )
          {
            v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v33, 20, 1, v38);
            v25 = v29;
            v9 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC0u, 0LL);
              goto LABEL_29;
            }
            v6 = v36;
          }
          else
          {
            v26 = v33;
            v27 = v6++;
            v28 = 5 * v27;
            *(_OWORD *)(v33 + 4 * v28) = *(_OWORD *)v38;
            *(_DWORD *)(v26 + 4 * v28 + 16) = *(_DWORD *)&v38[16];
            v36 = v24;
          }
          v9 = v25;
          if ( ++v16 >= v15 )
            goto LABEL_24;
        }
        v9 = -2147024362;
        v25 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_29:
        v10 = v25;
        v32 = 265;
        goto LABEL_3;
      }
    }
    else
    {
      v12 = *a2;
      *(_DWORD *)v38 = 0;
      *(_OWORD *)&v38[4] = v12;
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v33, 20, 1, v38);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
        v32 = 218;
LABEL_7:
        v10 = v9;
        goto LABEL_3;
      }
    }
LABEL_24:
    (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 216LL))(a1, &v33, a3);
    goto LABEL_25;
  }
  v9 = -2147467259;
  v10 = -2147467259;
  v32 = 212;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v32, 0LL);
LABEL_25:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v33);
  return v9;
}
