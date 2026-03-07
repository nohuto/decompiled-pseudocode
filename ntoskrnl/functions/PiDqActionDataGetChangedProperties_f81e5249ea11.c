__int64 __fastcall PiDqActionDataGetChangedProperties(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // r14
  int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rax
  HANDLE v14; // rbx
  __int64 v15; // r14
  int v16; // ecx
  int v17; // esi
  __int64 v18; // rdx
  int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rbx
  const wchar_t *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  __int64 *v31; // rsi
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ecx
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm0
  int v42; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-61h]
  int v45[2]; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+78h] [rbp-51h]
  NTSTRSAFE_PCWSTR v47; // [rsp+80h] [rbp-49h]
  PVOID P; // [rsp+88h] [rbp-41h] BYREF
  __int64 v49; // [rsp+90h] [rbp-39h]
  __int128 v50; // [rsp+98h] [rbp-31h] BYREF
  wchar_t *Str1[2]; // [rsp+A8h] [rbp-21h]
  __int128 v52; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v47 = a5;
  v49 = a1;
  v11 = 0;
  Handle = 0LL;
  v12 = 0;
  P = 0LL;
  *a10 = 0;
  *(_QWORD *)v45 = a3;
  v46 = a8;
  v44 = a9;
  v50 = 0LL;
  *(_OWORD *)Str1 = 0LL;
  v52 = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  v13 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(a8 + 76) )
  {
    while ( 1 )
    {
      v14 = 0LL;
      v15 = 32 * v13 + v10;
      if ( a6 )
      {
        v21 = 0;
        if ( !a7 )
          goto LABEL_10;
        while ( 1 )
        {
          v22 = a6 + 32LL * v21;
          if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v22 + 16) )
          {
            v23 = *(_QWORD *)(v15 + 80) - *(_QWORD *)v22;
            if ( !v23 )
              v23 = *(_QWORD *)(v15 + 88) - *(_QWORD *)(v22 + 8);
            if ( !v23 && *(_DWORD *)(v15 + 100) == *(_DWORD *)(v22 + 20) && (!*(_QWORD *)(v15 + 104) || a4) )
              break;
          }
          if ( ++v21 >= a7 )
            goto LABEL_10;
        }
      }
      v16 = *(_DWORD *)(v15 + 100);
      if ( !v16 )
        break;
      if ( v16 != 1 )
      {
        v11 = -1073741811;
        goto LABEL_11;
      }
      v17 = 0;
      if ( !Handle )
      {
        v11 = PiDqOpenObjectRegKey(1, *(__int64 *)v45, a2, 1, 0, v49, &Handle);
        if ( v11 == -1073741772 )
        {
          Handle = (HANDLE)-1LL;
          v11 = 0;
        }
      }
      v14 = Handle;
      if ( Handle != (HANDLE)-1LL )
        goto LABEL_5;
LABEL_10:
      v10 = v46;
      v13 = (unsigned int)(v42 + 1);
      v42 = v13;
      if ( (unsigned int)v13 >= *(_DWORD *)(v46 + 76) )
        goto LABEL_11;
    }
    v17 = a2;
LABEL_5:
    if ( v11 < 0 )
      goto LABEL_11;
    if ( a4 )
    {
      v11 = PiDqPnPGetObjectPropertyInBestLocale(
              v45[0],
              v17,
              (int)v14,
              (int)v15 + 80,
              *(_DWORD *)(v15 + 100),
              v47,
              &v50);
      if ( v11 < 0 )
        goto LABEL_11;
      v24 = (unsigned __int64)v47;
      v25 = Str1[1];
      while ( 1 )
      {
        v26 = (const wchar_t *)(v24 & -(__int64)(*(_WORD *)v24 != 0));
        v27 = *(const wchar_t **)(v15 + 104);
        if ( v27 == v26 || v27 && v26 && !wcsicmp(v27, v26) )
          break;
        if ( v25 == v26 || v25 && (!v26 || !wcsicmp(v25, v26)) || !v26 )
          goto LABEL_66;
        v28 = -1LL;
        do
          ++v28;
        while ( v26[v28] );
        v24 = (unsigned __int64)&v26[v28 + 1];
      }
      v29 = *a10;
      v30 = 0;
      v31 = v44;
      if ( *a10 )
      {
        v32 = *v44;
        while ( 1 )
        {
          v33 = 48LL * v30;
          if ( LODWORD(Str1[0]) == *(_DWORD *)(v33 + v32 + 16) )
          {
            v34 = v50 - *(_QWORD *)(v33 + v32);
            if ( (_QWORD)v50 == *(_QWORD *)(v33 + v32) )
              v34 = *((_QWORD *)&v50 + 1) - *(_QWORD *)(v33 + v32 + 8);
            if ( !v34 && HIDWORD(Str1[0]) == *(_DWORD *)(v33 + v32 + 20) )
              break;
          }
          if ( ++v30 >= v29 )
            goto LABEL_63;
        }
LABEL_66:
        PnpFreeDevProperty((__int64)&v50, 0x58706E50u);
        goto LABEL_10;
      }
LABEL_63:
      if ( v12 <= v29 )
      {
        if ( a7 )
        {
          v12 = a7;
        }
        else
        {
          v35 = 5;
          if ( *(_DWORD *)(v46 + 76) > 5u )
            v35 = *(_DWORD *)(v46 + 76);
          v12 += v35;
        }
        v11 = PiDqGrowPropertyArray(v44, v29);
        if ( v11 < 0 )
        {
          PnpFreeDevProperty((__int64)&v50, 0x58706E50u);
          goto LABEL_11;
        }
      }
      v36 = *(_OWORD *)Str1;
      v37 = *v31;
      v38 = 6LL * *a10;
      *(_OWORD *)(v37 + 8 * v38) = v50;
      v39 = v52;
      *(_OWORD *)(v37 + 8 * v38 + 16) = v36;
      *(_OWORD *)(v37 + 8 * v38 + 32) = v39;
    }
    else
    {
      v18 = *a10;
      if ( v12 <= (unsigned int)v18 )
      {
        if ( a7 )
        {
          v12 = a7;
        }
        else
        {
          v20 = 5;
          if ( *(_DWORD *)(v46 + 76) > 5u )
            v20 = *(_DWORD *)(v46 + 76);
          v12 += v20;
        }
        v11 = PiDqGrowPropertyArray(v44, v18);
        if ( v11 < 0 )
          goto LABEL_11;
      }
      v11 = PiDqPnPGetObjectProperty(
              v45[0],
              v17,
              (__int64)v14,
              v15 + 80,
              *(_DWORD *)(v15 + 100),
              *(NTSTRSAFE_PCWSTR *)(v15 + 104),
              (PVOID *)(*v44 + 48LL * *a10));
      if ( v11 < 0 )
        goto LABEL_11;
    }
    ++*a10;
    goto LABEL_10;
  }
LABEL_11:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v11;
}
