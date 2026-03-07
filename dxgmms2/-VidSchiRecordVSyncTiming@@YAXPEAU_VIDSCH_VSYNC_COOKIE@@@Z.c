void __fastcall VidSchiRecordVSyncTiming(
        struct _VIDSCH_VSYNC_COOKIE *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int128 v4; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rsi
  int v18; // edi
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int128 v23; // rax
  __int64 v24; // r15
  signed __int64 v25; // rsi
  signed __int64 v26; // r14
  __int128 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int128 v30; // rax
  __int64 v31; // rcx
  double v32; // xmm4_8
  double v33; // xmm0_8
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned int CurrentVSyncPeriodQpc; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r10
  __int64 v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  unsigned int v45; // [rsp+98h] [rbp+10h]

  *((_QWORD *)&v4 + 1) = a2;
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v6 = *((unsigned int *)a1 + 27);
    v7 = *((_QWORD *)a1 + 6);
    v8 = *(_QWORD *)(v7 + 8 * v6 + 3200);
    v9 = *((_QWORD *)a1 + 11) - *(_QWORD *)(v8 + 44192);
    if ( *(_BYTE *)(v7 + 6634) && v9 > *(unsigned int *)(*(_QWORD *)(v7 + 16) + 4224LL) )
    {
      CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc((struct _VIDSCH_GLOBAL *)v7, v6, 0);
      VIDSCH_VSYNC_SMOOTHER::ResetSmoother(
        *(VIDSCH_VSYNC_SMOOTHER **)(v8 + 44248),
        CurrentVSyncPeriodQpc,
        CurrentVSyncPeriodQpc);
    }
    v10 = -1LL;
    if ( *(_QWORD *)(v8 + 44264) )
    {
      a3 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v8 + 44208);
      if ( v9 )
      {
        if ( *(_QWORD *)(v8 + 44264) <= 3uLL )
        {
          v36 = a3 + *(_QWORD *)(v8 + 44280);
          v37 = v9 + *(_QWORD *)(v8 + 44264);
          *(_QWORD *)(v8 + 44280) = v36;
          *(_QWORD *)(v8 + 44264) = v37;
          if ( v37 > 3 )
          {
            v38 = v36 / (v37 - 1);
            *(_QWORD *)(v8 + 44288) = v38 / 0xA;
            _m_prefetchw((const void *)(v8 + 44272));
            while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 44272), v38, *(_QWORD *)(v8 + 44272)) != v38 )
              ;
            a4 = *(_QWORD *)(v8 + 44280);
            v39 = *(_QWORD *)(v7 + 2624);
            if ( is_mul_ok(a4, 0x3E8uLL) )
            {
              *((_QWORD *)&v4 + 1) = a4 * (unsigned __int128)0x3E8uLL % v39;
              a3 = a4 * (unsigned __int128)0x3E8uLL / v39;
            }
            else
            {
              *((_QWORD *)&v4 + 1) = a4 % v39;
              a3 = 1000 * (a4 / v39) + 1000 * (a4 % v39) / v39;
            }
            *(_QWORD *)(v8 + 44312) += a3;
          }
        }
        else
        {
          if ( v9 == 1 )
            a4 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v8 + 44208);
          else
            a4 = a3 / v9;
          v11 = 2LL * *(_QWORD *)(v8 + 44272);
          *(_QWORD *)(v8 + 44304) = a4;
          if ( a4 >= v11 )
          {
            v41 = *(_QWORD *)(v7 + 2624);
            if ( is_mul_ok(a3, 0x3E8uLL) )
            {
              *((_QWORD *)&v4 + 1) = 1000 * a3 % v41;
              v42 = 1000 * a3 / v41;
            }
            else
            {
              *((_QWORD *)&v4 + 1) = a3 % v41;
              v42 = 1000 * (a3 / v41) + 1000 * (a3 % v41) / v41;
            }
            *(_QWORD *)(v8 + 44320) += v42;
          }
          else
          {
            v12 = *(_QWORD *)(v7 + 2624);
            if ( is_mul_ok(a3, 0x3E8uLL) )
            {
              if ( v12 == 10000000 )
              {
                v4 = 1000 * a3 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
                v13 = 1000 * a3 / 0x989680;
              }
              else
              {
                *((_QWORD *)&v4 + 1) = 1000 * a3 % v12;
                v13 = 1000 * a3 / v12;
              }
            }
            else
            {
              *((_QWORD *)&v4 + 1) = a3 % v12;
              v13 = 1000 * (a3 / v12) + 1000 * (a3 % v12) / v12;
            }
            *(_QWORD *)(v8 + 44312) += v13;
          }
          if ( a4 > *(_QWORD *)(v8 + 44272) + *(_QWORD *)(v8 + 44288)
            || a4 < *(_QWORD *)(v8 + 44272) - *(_QWORD *)(v8 + 44288) )
          {
            ++*(_QWORD *)(v8 + 44296);
            *(_QWORD *)(v8 + 44264) = 0LL;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v8 + 44280) = 0LL;
      *(_QWORD *)(v8 + 44264) = 1LL;
    }
    if ( !*(_BYTE *)(v7 + 59) && *(_QWORD *)(v8 + 44264) <= 3uLL )
    {
      if ( *(_BYTE *)(v7 + 2212) )
        _InterlockedExchange((volatile __int32 *)(v7 + 4 * v6 + 2272), 1);
      else
        _InterlockedExchange((volatile __int32 *)(v7 + 2272), 1);
    }
    *(_QWORD *)(v8 + 44192) = *((_QWORD *)a1 + 11);
    *(_QWORD *)(v8 + 44208) = *((_QWORD *)a1 + 7);
    *(_QWORD *)(v8 + 44200) = *((_QWORD *)a1 + 12);
    *(_QWORD *)(v8 + 44216) = *((_QWORD *)a1 + 8);
    *(_QWORD *)(v8 + 44224) = *((_QWORD *)a1 + 9);
    *(_QWORD *)(v8 + 44232) = *((_QWORD *)a1 + 10);
    if ( *(_BYTE *)(v7 + 6634) )
    {
      v14 = *(_QWORD *)(v7 + 8 * v6 + 3200);
      if ( *(_DWORD *)(v14 + 3032) != -1 )
      {
        if ( !*(_DWORD *)(v14 + 3032) || *(_DWORD *)(v14 + 3032) == *(_DWORD *)(v14 + 82936) )
        {
          if ( *(_DWORD *)(v14 + 82936) )
          {
            a3 = *(unsigned int *)(v14 + 82936);
            v4 = *(unsigned int *)(v14 + 82936) * (unsigned __int128)*(unsigned __int64 *)(v7 + 2624);
            v44 = *((_QWORD *)&v4 + 1);
          }
        }
        else
        {
          a3 = *(unsigned int *)(v14 + 3032);
          v4 = *(unsigned int *)(v14 + 3032) * (unsigned __int128)*(unsigned __int64 *)(v7 + 2624);
          v43 = *((_QWORD *)&v4 + 1);
        }
      }
      v15 = *(_QWORD *)(v8 + 44248);
      v16 = *(_QWORD *)(v8 + 44208);
      v17 = *(_QWORD *)(v8 + 44192);
      v18 = 256;
      v45 = _mm_getcsr();
      v19 = *(_DWORD *)(v15 + 8);
      v20 = v15 + 16LL * (unsigned __int8)v19;
      _mm_setcsr(v45 | 1);
      if ( !v19 )
      {
        *(_QWORD *)(v20 + 104) = v17;
        *(_QWORD *)(v20 + 112) = v16;
        LinearFitT<256>::Reset(v15, *((_QWORD *)&v4 + 1), a3);
        *(_OWORD *)(v15 + 104) = *(_OWORD *)(v20 + 104);
        *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 104);
        *(_QWORD *)(v15 + 48) = *(_QWORD *)(v15 + 112);
        *(_DWORD *)(v15 + 8) = 1;
LABEL_36:
        if ( *(_DWORD *)(v15 + 8) )
        {
          if ( *(_DWORD *)(v15 + 8) < 0x100u )
            v18 = *(_DWORD *)(v15 + 8);
          v32 = (double)(int)*(_QWORD *)(v15 + 80)
              - (double)(int)*(_QWORD *)(v15 + 56) * (double)(int)*(_QWORD *)(v15 + 56) / (double)v18;
          v33 = v32;
          if ( v32 < 0.0 )
            *(_QWORD *)&v33 = *(_QWORD *)&v32 ^ _xmm;
          if ( v33 <= 0.01 || *(_DWORD *)(v15 + 8) <= 4u )
            *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 32);
          else
            *(double *)(v15 + 24) = ((double)(int)*(_QWORD *)(v15 + 72)
                                   - (double)(int)*(_QWORD *)(v15 + 64)
                                   * (double)(int)*(_QWORD *)(v15 + 56)
                                   / (double)v18)
                                  / v32;
          *(double *)(v15 + 16) = ((double)(int)*(_QWORD *)(v15 + 64)
                                 - (double)(int)*(_QWORD *)(v15 + 56) * *(double *)(v15 + 24))
                                / (double)v18;
        }
        goto LABEL_45;
      }
      LOBYTE(a4) = 0;
      v21 = 2LL * (unsigned __int8)(v19 - 1);
      v22 = *(_QWORD *)(v15 + 16LL * (unsigned __int8)(v19 - 1) + 104) + *(_QWORD *)(v15 + 88);
      v23 = v16 - *(_QWORD *)(v15 + 16LL * (unsigned __int8)(v19 - 1) + 112);
      v24 = (*((_QWORD *)&v23 + 1) ^ v23) - *((_QWORD *)&v23 + 1);
      if ( v17 <= v22 && v24 <= *(_QWORD *)(v15 + 96) )
      {
LABEL_45:
        _mm_setcsr(v45);
        return;
      }
      if ( *(_DWORD *)(v15 + 8) > 0x100u )
      {
        if ( (*(_DWORD *)(v15 + 8) & 0x1FF) == 0 )
          LOBYTE(a4) = (unsigned __int8)LinearFitT<256>::RebaseSums(v15, *((_QWORD *)&v23 + 1), a3, a4, v43, v44) == 0;
        v34 = *(_QWORD *)(v20 + 104) - *(_QWORD *)(v15 + 40);
        v35 = *(_QWORD *)(v20 + 112) - *(_QWORD *)(v15 + 48);
        *(_QWORD *)(v15 + 56) -= v34;
        *(_QWORD *)(v15 + 64) -= v35;
        *(_QWORD *)(v15 + 72) -= v34 * v35;
        *(_QWORD *)(v15 + 80) -= v34 * v34;
      }
      *(_QWORD *)(v20 + 104) = v17;
      *(_QWORD *)(v20 + 112) = v16;
      v25 = v17 - *(_QWORD *)(v15 + 40);
      v26 = v16 - *(_QWORD *)(v15 + 48);
      v27 = v25 * (__int128)v25;
      v28 = v27;
      if ( (__int64)v27 < 0 )
      {
        if ( *((_QWORD *)&v27 + 1) == -1LL )
          goto LABEL_30;
      }
      else if ( is_mul_ok(v25, v25) )
      {
        goto LABEL_30;
      }
      v28 = -1LL;
LABEL_30:
      v29 = *(_QWORD *)(v15 + 80) + v28;
      v30 = v25 * (__int128)v26;
      if ( (__int64)v30 < 0 )
      {
        if ( *((_QWORD *)&v30 + 1) != -1LL )
          goto LABEL_33;
      }
      else if ( !is_mul_ok(v25, v26) )
      {
LABEL_33:
        v31 = *(_QWORD *)(v15 + 72);
        *(_QWORD *)(v15 + 56) += v25;
        *(_QWORD *)(v15 + 64) += v26;
        ++*(_DWORD *)(v15 + 8);
        *(_QWORD *)(v15 + 80) = v29;
        *(_QWORD *)(v15 + 72) = v31 + v10;
        if ( (_BYTE)a4
          || *(_QWORD *)(v20 + 104) <= *(_QWORD *)(v15 + 8 * v21 + 104)
          || *(__int64 *)(v15 + 96) > 0 && v24 > *(_QWORD *)(v15 + 96) )
        {
          LinearFitT<256>::InitWithPoint(v15, v20 + 104);
        }
        goto LABEL_36;
      }
      v10 = v25 * v26;
      goto LABEL_33;
    }
  }
}
