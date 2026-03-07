__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, unsigned int *a2, unsigned int a3)
{
  NTSTATUS DriverStorePath; // ebx
  unsigned int v6; // r10d
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  _DWORD *v12; // r14
  __int64 v13; // r11
  _OWORD *v14; // rax
  unsigned __int16 *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int PnpRegistryKeyName; // eax
  size_t **v24; // r9
  unsigned __int16 v25; // cx
  unsigned __int16 *v26; // r8
  unsigned int v27; // r14d
  __int64 v28; // rdx
  unsigned __int16 *v29; // r10
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  bool v34; // zf
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  unsigned __int16 *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int16 *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  char *v44; // r8
  unsigned __int16 v45; // r9
  unsigned __int16 *v46; // rax
  unsigned int v47; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  int (*v49)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v51; // [rsp+50h] [rbp-B0h]
  char *v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h]
  __int128 v58; // [rsp+88h] [rbp-78h]
  __int128 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v61[264]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v62[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  DriverStorePath = -1073741811;
  if ( a3 >= 0x228 )
  {
    v6 = a2[1];
    v7 = 4LL;
    if ( v6 >= 4 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 2860LL);
      goto LABEL_21;
    }
    if ( *((int *)a1 + 638) < 0x2000 )
      v8 = 1;
    else
      v8 = *((_DWORD *)a1 + 72);
    v9 = a2[133];
    if ( (unsigned int)v9 >= v8 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 2867LL);
      goto LABEL_21;
    }
    v10 = a3 - 544;
    v11 = *a2;
    v12 = a2 + 134;
    a2[134] = v10;
    v13 = *(_QWORD *)(344 * v9 + *((_QWORD *)a1 + 351) + 8);
    if ( v11 <= 1 )
    {
      v14 = a2 + 2;
      v15 = v61;
      do
      {
        v16 = v14[1];
        *(_OWORD *)v15 = *v14;
        v17 = v14[2];
        *((_OWORD *)v15 + 1) = v16;
        v18 = v14[3];
        *((_OWORD *)v15 + 2) = v17;
        v19 = v14[4];
        *((_OWORD *)v15 + 3) = v18;
        v20 = v14[5];
        *((_OWORD *)v15 + 4) = v19;
        v21 = v14[6];
        *((_OWORD *)v15 + 5) = v20;
        v22 = v14[7];
        v14 += 8;
        *((_OWORD *)v15 + 6) = v21;
        v15 += 64;
        *((_OWORD *)v15 - 1) = v22;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v15 = *(_QWORD *)v14;
      v61[259] = 0;
      P[0] = 0LL;
      PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v13, (unsigned int)(v11 != 1) + 2, P);
      DriverStorePath = PnpRegistryKeyName;
      if ( PnpRegistryKeyName < 0 )
      {
        WdLogSingleEntry1(3LL, PnpRegistryKeyName);
        goto LABEL_18;
      }
      v24 = (size_t **)P[0];
      v25 = v61[0];
      v26 = v61;
      v27 = 0;
      LODWORD(v28) = 0;
      v29 = (unsigned __int16 *)*((_QWORD *)P[0] + 1);
      if ( v61[0] )
      {
        do
        {
          v30 = v28;
          if ( v25 != 92 )
            v30 = v27;
          v28 = (unsigned int)(v28 + 1);
          v27 = v30;
          v25 = v61[v28];
        }
        while ( v25 );
        if ( v30 )
        {
          if ( 2 * (unsigned __int64)v30 >= 0x208 )
            _report_rangecheckfailure();
          v61[v30] = 0;
          DriverStorePath = RtlStringCbCopyW(v62, 0x208uLL, v24[1]);
          if ( DriverStorePath < 0 )
            goto LABEL_59;
          v37 = 260LL;
          v38 = v62;
          v39 = 260LL;
          do
          {
            if ( !*v38 )
              break;
            ++v38;
            --v39;
          }
          while ( v39 );
          v40 = (260 - v39) & -(__int64)(v39 != 0);
          DriverStorePath = v39 == 0 ? 0xC000000D : 0;
          if ( v39 )
          {
            v41 = &v62[v40];
            v42 = 260 - v40;
            if ( 260 != v40 )
            {
              v43 = 2147483646LL;
              v44 = (char *)((char *)L"\\" - (char *)v41);
              do
              {
                if ( !v43 )
                  break;
                v45 = *(unsigned __int16 *)((char *)v41 + (_QWORD)v44);
                if ( !v45 )
                  break;
                *v41 = v45;
                --v43;
                ++v41;
                --v42;
              }
              while ( v42 );
            }
            v46 = v41 - 1;
            if ( v42 )
              v46 = v41;
            v37 = -v42;
            DriverStorePath = v37 == 0 ? 0x80000005 : 0;
            *v46 = 0;
          }
          if ( DriverStorePath < 0 || (DriverStorePath = RtlStringCbCatW(v62, v37, (size_t *)v61), DriverStorePath < 0) )
          {
LABEL_59:
            v32 = DriverStorePath;
            v33 = 2937LL;
            goto LABEL_17;
          }
          v26 = &v61[v27 + 1];
          v29 = v62;
        }
      }
      v51 = v26;
      v49 = DxgkpRegistryQueryRoutine;
      v53 = a2[132] << 24;
      v50 = 276;
      v60 = 0LL;
      v52 = (char *)(a2 + 136);
      v54 = 0LL;
      v55 = 0;
      v56 = 0LL;
      v57 = 0;
      v58 = 0LL;
      v59 = 0LL;
      v31 = RtlQueryRegistryValuesEx(0LL, v29, &v49, a2, 0LL);
      DriverStorePath = v31;
      if ( v31 >= 0 )
      {
LABEL_18:
        if ( DriverStorePath == -2147483643 )
        {
          DriverStorePath = 0;
          v47 = *a2 - 2;
          a2[135] = 1;
          if ( v47 <= 1 || (a2[1] & 1) != 0 )
            a2[134] += 16;
          return (unsigned int)DriverStorePath;
        }
        v34 = DriverStorePath == 0;
LABEL_20:
        if ( v34 )
        {
          a2[135] = 0;
          return (unsigned int)DriverStorePath;
        }
LABEL_21:
        a2[135] = 2;
        return (unsigned int)DriverStorePath;
      }
      v32 = v31;
      v33 = 2958LL;
LABEL_17:
      WdLogSingleEntry2(3LL, v32, v33);
      goto LABEL_18;
    }
    if ( v11 - 2 > 1 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 3002LL);
      goto LABEL_21;
    }
    if ( a2[132] || (v6 & 1) != 0 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 2970LL);
      goto LABEL_21;
    }
    if ( v11 == 2 )
    {
      DriverStorePath = DpiGetDriverStorePath(v13, a2 + 136, a2 + 134);
    }
    else
    {
      *(_OWORD *)P = 0LL;
      DriverStorePath = DpiGetDriverFullPath(v13, P);
      if ( DriverStorePath < 0 )
      {
LABEL_39:
        v32 = DriverStorePath;
        v33 = 2996LL;
        goto LABEL_17;
      }
      v36 = RtlStringCbCopyUnicodeString((char *)a2 + 544, (unsigned int)*v12, (const struct _UNICODE_STRING *)P);
      DriverStorePath = v36;
      *v12 = LOWORD(P[0]);
      if ( v36 < 0 )
      {
        WdLogSingleEntry2(3LL, LOWORD(P[0]), v36);
        DriverStorePath = -2147483643;
      }
      ExFreePoolWithTag(P[1], 0);
    }
    v34 = DriverStorePath == 0;
    if ( DriverStorePath >= 0 )
      goto LABEL_20;
    goto LABEL_39;
  }
  WdLogSingleEntry3(3LL, a3, -1073741811LL, 2852LL);
  return 3221225485LL;
}
