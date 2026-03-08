/*
 * XREFs of _CombineModeList @ 0x1C02FC23C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1C01E97E8 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
{
  __int64 v5; // r15
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  unsigned int *v8; // r10
  unsigned int *v10; // r12
  unsigned int v11; // r9d
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  unsigned int *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // r15d
  __int64 v20; // rdi
  unsigned int v21; // edx
  unsigned int v22; // ecx
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rsi
  unsigned int *v27; // r14
  char v28; // dl
  __int64 v29; // rdi
  int v30; // eax
  unsigned __int64 v31; // rax
  void *v32; // rsi
  unsigned int v34; // r9d
  __int64 v35; // r12
  _DWORD *v36; // r8
  char *v37; // rcx
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-58h]
  unsigned int v40; // [rsp+54h] [rbp-54h]
  unsigned int v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  __int64 v43; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v6 = 0;
  v7 = -1;
  v8 = a4;
  v40 = -1;
  v39 = -1;
  v10 = a1;
  if ( (_DWORD)v5 )
  {
    v11 = *a1;
    v12 = *a1;
    v41 = *a1;
    v42 = v5;
    if ( a5 )
    {
      v13 = 0;
      v14 = v8;
      v15 = (unsigned int)v5;
      do
      {
        v16 = *v14;
        v14 += 11;
        if ( v16 <= v13 )
          v16 = v13;
        v13 = v16;
        v17 = *(v14 - 10);
        if ( v17 <= v6 )
          v17 = v6;
        v6 = v17;
        --v15;
      }
      while ( v15 );
      v18 = 0;
      v12 = 0;
      if ( v11 )
      {
        v19 = -1;
        do
        {
          v20 = (__int64)*a2 + 44 * v18;
          if ( v7 == -1 || (v21 = *(_DWORD *)v20, *(_DWORD *)v20 > v7) )
          {
            v21 = *(_DWORD *)v20;
            v39 = *(_DWORD *)v20;
          }
          if ( v19 == -1 || (v22 = *(_DWORD *)(v20 + 4), v22 > v19) )
          {
            v19 = *(_DWORD *)(v20 + 4);
            v22 = v19;
          }
          if ( (*(_DWORD *)(v20 + 40) & 0x40) != 0 || v21 <= v13 && v22 <= v6 )
          {
            if ( v18 != v12 )
            {
              if ( v18 <= v12 )
              {
                WdLogSingleEntry1(1LL, 2829LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i > j", 2829LL, 0LL, 0LL, 0LL, 0LL);
              }
              v23 = (char *)*a2;
              v24 = 44LL * v12;
              *(_OWORD *)&v23[v24] = *(_OWORD *)v20;
              *(_OWORD *)&v23[v24 + 16] = *(_OWORD *)(v20 + 16);
              *(_QWORD *)&v23[v24 + 32] = *(_QWORD *)(v20 + 32);
              *(_DWORD *)&v23[v24 + 40] = *(_DWORD *)(v20 + 40);
            }
            ++v12;
          }
          v7 = v39;
          ++v18;
        }
        while ( v18 < *v10 );
        v8 = a4;
        v40 = v19;
        LODWORD(v5) = a3;
      }
      v7 = v39;
      v6 = 0;
      *v10 = v12;
    }
    if ( (_DWORD)v5 )
    {
      v25 = (unsigned int)v5;
      v26 = v8 + 8;
      v43 = (unsigned int)v5;
      do
      {
        v27 = v26 - 8;
        v28 = 0;
        if ( (v26[2] & 0x40) != 0 || *v27 <= v7 && *(v26 - 7) <= v40 )
        {
          if ( *v10 )
          {
            do
            {
              v29 = (__int64)*a2 + 44 * v6;
              if ( *v27 == *(_DWORD *)v29
                && v27[1] == *(_DWORD *)(v29 + 4)
                && *((_QWORD *)v26 - 3) == *(_QWORD *)(v29 + 8)
                && *(v26 - 1) == *(_DWORD *)(v29 + 28)
                && *v26 == *(_DWORD *)(v29 + 32)
                && *(v26 - 2) == *(_DWORD *)(v29 + 24)
                && ((*((_BYTE *)v26 + 8) ^ *(_BYTE *)(v29 + 40)) & 0x10) == 0 )
              {
                if ( *(v26 - 4) != *(_DWORD *)(v29 + 16) || *(v26 - 3) != *(_DWORD *)(v29 + 20) )
                {
                  WdLogSingleEntry4(7LL, *v27, v27[1], (int)*(v26 - 6), (unsigned int)*(v26 - 5));
                  WdLogSingleEntry4(
                    7LL,
                    (unsigned int)*(v26 - 4),
                    (unsigned int)*(v26 - 3),
                    *(unsigned int *)(v29 + 16),
                    *(unsigned int *)(v29 + 20));
                }
                UpgradeDispModeFlags(v29, (__int64)(v26 - 8));
                v28 = 1;
              }
              ++v6;
            }
            while ( v6 < *v10 );
            v25 = v43;
          }
          v6 = 0;
        }
        else
        {
          v28 = 1;
        }
        v30 = v27[10] & 0x1FF;
        if ( !v28 )
        {
          ++v12;
          v30 |= 0x200u;
        }
        v7 = v39;
        v26 += 11;
        --v25;
        v27[10] = v30;
        v43 = v25;
      }
      while ( v25 );
      LODWORD(v5) = a3;
    }
    if ( v12 > v41 )
    {
      v31 = 44LL * v12;
      if ( !is_mul_ok(v12, 0x2CuLL) )
        v31 = -1LL;
      v32 = (void *)operator new[](v31, 0x4B677844u, 256LL);
      if ( !v32 )
      {
        WdLogSingleEntry1(6LL, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for the combined mode list for %I64d of D3DKMT_DISPLAYMODE.",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      if ( *a2 )
      {
        memmove(v32, *a2, 44LL * *v10);
        operator delete((void *)*a2);
      }
      *a2 = v32;
    }
    v34 = *v10;
    if ( *v10 < v12 )
    {
      if ( (_DWORD)v5 )
      {
        v35 = v42;
        v36 = a4 + 10;
        do
        {
          if ( *v36 >= 0x200u )
          {
            *v36 &= 0x1FFu;
            v37 = (char *)*a2;
            v38 = 44LL * v34++;
            *(_OWORD *)&v37[v38] = *(_OWORD *)(v36 - 10);
            *(_OWORD *)&v37[v38 + 16] = *(_OWORD *)(v36 - 6);
            *(_QWORD *)&v37[v38 + 32] = *((_QWORD *)v36 - 1);
            *(_DWORD *)&v37[v38 + 40] = *v36;
          }
          v36 += 11;
          --v35;
        }
        while ( v35 );
        v10 = a1;
      }
      if ( v12 != v34 )
      {
        WdLogSingleEntry1(1LL, 2968LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TotalModes == j", 2968LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    *v10 = v12;
  }
  return 0LL;
}
