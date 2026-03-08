/*
 * XREFs of WheapWmiExecuteErrorSourceMethod @ 0x140611798
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140611BB0 (WheapWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheapWmiExecuteErrorSourceMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r11d
  __int64 *ErrorSource; // rax
  unsigned int v13; // eax
  __int64 *v14; // rax
  unsigned int *v15; // rcx
  __int64 v16; // r8
  _BYTE *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rbx
  __int128 v33; // xmm1
  __int64 *v34; // r10
  unsigned int *v35; // rbx
  unsigned int v36; // ebp
  unsigned int i; // esi
  unsigned int *v38; // rcx
  __int64 *v39; // rdx
  __int64 v40; // rax
  __int128 v41; // xmm1
  _BYTE v43[976]; // [rsp+20h] [rbp-408h] BYREF

  v6 = a1 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = 0;
          if ( v9 != 1 )
          {
            v11 = -1073741161;
            goto LABEL_44;
          }
          if ( a4 >= 4 )
          {
            v10 = 4;
            if ( a2 >= 4 )
            {
              ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
              if ( ErrorSource )
              {
                if ( *((_DWORD *)ErrorSource + 27) != 1 )
                {
                  v13 = PshedDisableErrorSource(ErrorSource + 12);
LABEL_17:
                  v11 = v13;
                  goto LABEL_18;
                }
                goto LABEL_18;
              }
              goto LABEL_35;
            }
            goto LABEL_37;
          }
        }
        else
        {
          v10 = 0;
          if ( a4 >= 4 )
          {
            v10 = 4;
            if ( a2 >= 4 )
            {
              v14 = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
              if ( v14 )
              {
                if ( *((_DWORD *)v14 + 27) != 2 )
                {
                  v13 = PshedEnableErrorSource(v14 + 12);
                  goto LABEL_17;
                }
LABEL_18:
                *a3 = v11;
                goto LABEL_44;
              }
LABEL_35:
              v11 = -1073741275;
              goto LABEL_44;
            }
LABEL_37:
            v11 = -1073741789;
            goto LABEL_44;
          }
        }
LABEL_28:
        v11 = -1073741811;
        goto LABEL_44;
      }
      v10 = 0;
      if ( a4 < 0x3D0 )
        goto LABEL_28;
      v10 = 4;
      if ( a2 < 4 )
        goto LABEL_37;
      if ( *a3 != 972 )
      {
        v10 = 0;
        goto LABEL_28;
      }
      v15 = a3 + 1;
      v16 = 7LL;
      v17 = v43;
      do
      {
        v18 = *((_OWORD *)v15 + 1);
        *(_OWORD *)v17 = *(_OWORD *)v15;
        v19 = *((_OWORD *)v15 + 2);
        *((_OWORD *)v17 + 1) = v18;
        v20 = *((_OWORD *)v15 + 3);
        *((_OWORD *)v17 + 2) = v19;
        v21 = *((_OWORD *)v15 + 4);
        *((_OWORD *)v17 + 3) = v20;
        v22 = *((_OWORD *)v15 + 5);
        *((_OWORD *)v17 + 4) = v21;
        v23 = *((_OWORD *)v15 + 6);
        *((_OWORD *)v17 + 5) = v22;
        v24 = *((_OWORD *)v15 + 7);
        v15 += 32;
        *((_OWORD *)v17 + 6) = v23;
        v17 += 128;
        *((_OWORD *)v17 - 1) = v24;
        --v16;
      }
      while ( v16 );
      v25 = *((_QWORD *)v15 + 8);
      v26 = *((_OWORD *)v15 + 1);
      *(_OWORD *)v17 = *(_OWORD *)v15;
      v27 = *((_OWORD *)v15 + 2);
      *((_OWORD *)v17 + 1) = v26;
      v28 = *((_OWORD *)v15 + 3);
      *((_OWORD *)v17 + 2) = v27;
      *((_OWORD *)v17 + 3) = v28;
      *((_QWORD *)v17 + 8) = v25;
      *((_DWORD *)v17 + 18) = v15[18];
      v11 = PshedSetErrorSourceInfo(v43, v17, 0LL, 128LL);
      *a3 = v11;
    }
    else
    {
      v10 = 0;
      if ( !dword_140CF76DC )
        goto LABEL_35;
      if ( a4 < 4 )
        goto LABEL_28;
      v10 = 980;
      if ( a2 < 0x3D4 )
        goto LABEL_37;
      v29 = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
      if ( !v29 )
        goto LABEL_35;
      *a3 = v11;
      v30 = v29 + 12;
      v31 = 7LL;
      a3[1] = 972;
      v32 = a3 + 2;
      do
      {
        *(_OWORD *)v32 = *(_OWORD *)v30;
        *((_OWORD *)v32 + 1) = *((_OWORD *)v30 + 1);
        *((_OWORD *)v32 + 2) = *((_OWORD *)v30 + 2);
        *((_OWORD *)v32 + 3) = *((_OWORD *)v30 + 3);
        *((_OWORD *)v32 + 4) = *((_OWORD *)v30 + 4);
        *((_OWORD *)v32 + 5) = *((_OWORD *)v30 + 5);
        *((_OWORD *)v32 + 6) = *((_OWORD *)v30 + 6);
        v32 += 32;
        v33 = *((_OWORD *)v30 + 7);
        v30 += 16;
        *((_OWORD *)v32 - 1) = v33;
        --v31;
      }
      while ( v31 );
      *(_OWORD *)v32 = *(_OWORD *)v30;
      *((_OWORD *)v32 + 1) = *((_OWORD *)v30 + 1);
      *((_OWORD *)v32 + 2) = *((_OWORD *)v30 + 2);
      *((_OWORD *)v32 + 3) = *((_OWORD *)v30 + 3);
      *((_QWORD *)v32 + 8) = v30[8];
      v32[18] = *((_DWORD *)v30 + 18);
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    if ( !dword_140CF76DC )
      goto LABEL_35;
    v10 = 972 * dword_140CF76DC + 12;
    if ( v10 > a2 )
      goto LABEL_37;
    *a3 = 0;
    v34 = (__int64 *)qword_140CF76E8;
    v35 = a3 + 3;
    v36 = 0;
    for ( i = 0; v34 != &qword_140CF76E8; v34 = (__int64 *)*v34 )
    {
      if ( i >= dword_140CF76DC )
        break;
      v38 = v35;
      v39 = v34 + 12;
      v40 = 7LL;
      do
      {
        *(_OWORD *)v38 = *(_OWORD *)v39;
        *((_OWORD *)v38 + 1) = *((_OWORD *)v39 + 1);
        *((_OWORD *)v38 + 2) = *((_OWORD *)v39 + 2);
        *((_OWORD *)v38 + 3) = *((_OWORD *)v39 + 3);
        *((_OWORD *)v38 + 4) = *((_OWORD *)v39 + 4);
        *((_OWORD *)v38 + 5) = *((_OWORD *)v39 + 5);
        *((_OWORD *)v38 + 6) = *((_OWORD *)v39 + 6);
        v38 += 32;
        v41 = *((_OWORD *)v39 + 7);
        v39 += 16;
        *((_OWORD *)v38 - 1) = v41;
        --v40;
      }
      while ( v40 );
      v35 += 243;
      v36 += 972;
      ++i;
      *(_OWORD *)v38 = *(_OWORD *)v39;
      *((_OWORD *)v38 + 1) = *((_OWORD *)v39 + 1);
      *((_OWORD *)v38 + 2) = *((_OWORD *)v39 + 2);
      *((_OWORD *)v38 + 3) = *((_OWORD *)v39 + 3);
      *((_QWORD *)v38 + 8) = v39[8];
      v38[18] = *((_DWORD *)v39 + 18);
    }
    a3[1] = i;
    a3[2] = v36;
  }
LABEL_44:
  *a5 = v10;
  return v11;
}
