/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x14077A964
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PfSnIsVolumeMounted @ 0x14077AECC (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14077AFF0 (PfSnQueryVolumeInfo.c)
 *     PfMetadataRecordIsEqual @ 0x14077B124 (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x14077B144 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14077B1D8 (PfSnVolumeCheckSeekPenalty.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A0F74 (PfSnVolumeCheckIsSdBus.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  WCHAR *v5; // r12
  int v6; // ebx
  unsigned int v7; // eax
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  int v10; // edi
  int DeviceInterfaces; // eax
  unsigned int v12; // edi
  const WCHAR *i; // rsi
  __int64 v14; // r15
  int IsVolumeMounted; // eax
  int v16; // ecx
  _OWORD *v17; // rax
  _OWORD *v18; // rdi
  int v19; // eax
  __int128 v20; // xmm1
  PVOID v21; // rcx
  PVOID *v22; // rax
  wchar_t *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int *v27; // rcx
  PVOID *k; // rsi
  __int64 v29; // r8
  wchar_t *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 *v35; // rdx
  HANDLE v36; // rdx
  _QWORD *v37; // rbx
  __int64 v38; // rax
  __int64 *v40; // rcx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  int v43; // [rsp+50h] [rbp-89h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-81h] BYREF
  PVOID v45; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  __int128 v47; // [rsp+70h] [rbp-69h] BYREF
  __m256i v48; // [rsp+80h] [rbp-59h] BYREF
  __m256i v49; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v50[2]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-11h]
  __int64 v52; // [rsp+D0h] [rbp-9h]
  int v53; // [rsp+D8h] [rbp-1h]
  int v54; // [rsp+DCh] [rbp+3h]
  __int128 v55; // [rsp+E0h] [rbp+7h]
  int v56; // [rsp+140h] [rbp+67h]
  int j; // [rsp+140h] [rbp+67h]
  _DWORD *v58; // [rsp+148h] [rbp+6Fh]
  unsigned int cbDest; // [rsp+150h] [rbp+77h]
  size_t cbDesta; // [rsp+150h] [rbp+77h]
  __int64 v61; // [rsp+158h] [rbp+7Fh]

  v58 = a2;
  v2 = *a1;
  v3 = 0;
  p_P = &P;
  v50[1] = 0;
  v54 = 0;
  P = &P;
  v45 = 0LL;
  LOBYTE(a2) = 1;
  v43 = 0;
  v56 = 0;
  v47 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  v6 = 0;
  memset(&v49, 0, 24);
  v49.m256i_i64[3] = 0x200000000LL;
  memset(&v48, 0, 24);
  v48.m256i_i64[3] = 0x200000000LL;
  Handle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, a2);
  if ( v2 && (v7 = *(_DWORD *)(v2 + 112), v7 < 0x4000) )
  {
    Pool2 = ExAllocatePool2(256LL, 112 * v7, 1984979779LL);
    a1[2] = Pool2;
    if ( !Pool2 )
      goto LABEL_53;
    if ( *(_DWORD *)(v2 + 112) )
    {
      do
      {
        v9 = (_QWORD *)(a1[2] + 112LL * v3);
        memset(v9, 0, 0x70uLL);
        v9[1] = v9;
        *v9 = v9;
        ++v3;
        *((_OWORD *)v9 + 2) = 0LL;
        *((_OWORD *)v9 + 3) = 0LL;
        v9[7] |= 0x200000000uLL;
        *((_OWORD *)v9 + 4) = 0LL;
        *((_OWORD *)v9 + 5) = 0LL;
        v9[11] |= 0x200000000uLL;
      }
      while ( v3 < *(_DWORD *)(v2 + 112) );
    }
    v50[0] = 48;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 512;
    v55 = 0LL;
    v10 = NtCreateEvent(&Handle, 2031619LL, v50, 0LL, 0);
    if ( v10 < 0 )
      goto LABEL_39;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (int *)&GUID_DEVINTERFACE_VOLUME,
                         0LL,
                         0,
                         0,
                         (wchar_t **)&SourceString,
                         0LL);
    v5 = (WCHAR *)SourceString;
    v10 = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
      goto LABEL_39;
    cbDest = 0;
    v12 = 0;
    for ( i = SourceString; *i; v12 = cbDest )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( i[v14] );
      SourceString = (PCWSTR)(2LL * (unsigned int)(v14 + 1));
      if ( v12 <= (unsigned __int64)SourceString )
        cbDest = 2 * v14 + 2;
      IsVolumeMounted = PfSnIsVolumeMounted(i);
      v16 = v56;
      if ( IsVolumeMounted < 0 )
        v16 = 0;
      v56 = v16;
      if ( v16 && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)i, (unsigned int)&v49, (unsigned int)&v45, (__int64)&v43) >= 0 )
      {
        v17 = (_OWORD *)ExAllocatePool2(256LL, 72LL, 1984979779LL);
        v18 = v17;
        if ( !v17 )
          goto LABEL_53;
        memset(v17, 0, 0x48uLL);
        v19 = v43;
        v20 = *(_OWORD *)&v49.m256i_u64[2];
        v21 = v45;
        v18[1] = *(_OWORD *)v49.m256i_i8;
        *((_DWORD *)v18 + 15) = v19;
        *((_QWORD *)v18 + 8) = v21;
        v18[2] = v20;
        *((_QWORD *)v18 + 6) = i;
        *((_DWORD *)v18 + 14) = v14;
        memset(&v49, 0, 24);
        v22 = p_P;
        v49.m256i_i64[3] = 0x200000000LL;
        if ( *p_P != &P )
LABEL_59:
          __fastfail(3u);
        *((_QWORD *)v18 + 1) = p_P;
        *(_QWORD *)v18 = &P;
        *v22 = v18;
        p_P = (PVOID *)v18;
      }
      i = (const WCHAR *)((char *)i + (_QWORD)SourceString);
    }
    cbDesta = v12 + 2;
    v23 = (wchar_t *)ExAllocatePool2(256LL, cbDesta, 1984979779LL);
    if ( v23 )
    {
      v24 = v2 + *(unsigned int *)(v2 + 108);
      v25 = 0LL;
      v61 = v24;
      for ( j = 0; (unsigned int)v25 < *(_DWORD *)(v2 + 112); j = v25 )
      {
        v26 = a1[2] + 112 * v25;
        v27 = (unsigned int *)(v24 + 96 * v25);
        *(_QWORD *)(v26 + 16) = v24 + *v27;
        *(_DWORD *)(v26 + 24) = v27[1];
        *(_DWORD *)(v26 + 104) = 0;
        *(_QWORD *)(v26 + 96) = v24 + v27[7];
        for ( k = (PVOID *)P; ; k = (PVOID *)*k )
        {
          if ( k == &P )
            goto LABEL_57;
          v29 = *((unsigned int *)k + 15);
          v45 = k[8];
          if ( (unsigned __int8)PfMetadataRecordIsEqual(v27, &v45, v29) )
            break;
        }
        RtlStringCbPrintfW(v23, cbDesta, L"%s\\", k[6]);
        v30 = v23;
        v47 = 0LL;
        v31 = 0x7FFFLL;
        while ( *v30 )
        {
          ++v30;
          if ( !--v31 )
            goto LABEL_33;
        }
        *((_QWORD *)&v47 + 1) = v23;
        LOWORD(v47) = 2 * (0x7FFF - v31);
        WORD1(v47) = v47 + 2;
LABEL_33:
        v32 = (__int64)(k + 2);
        if ( (int)PfpOpenHandleCreate((__int64)&v48, a1[1], (__int64)&v47, 0LL, 1179785, 0x21u, 0x80u, v32) < 0 )
        {
LABEL_57:
          v48.m256i_i64[3] = 0x200000000LL;
          memset(&v48, 0, 24);
          v40 = (__int64 *)a1[4];
          if ( (__int64 *)*v40 != a1 + 3 )
            goto LABEL_59;
          *(_QWORD *)v26 = a1 + 3;
          *(_QWORD *)(v26 + 8) = v40;
          *v40 = v26;
          a1[4] = v26;
        }
        else
        {
          *(_OWORD *)(v26 + 32) = *(_OWORD *)v32;
          *(_OWORD *)(v26 + 48) = *(_OWORD *)(v32 + 16);
          v33 = *(_OWORD *)&v48.m256i_u64[2];
          v48.m256i_i64[3] = 0x200000000LL;
          *(_OWORD *)v32 = 0LL;
          *(_OWORD *)(v32 + 16) = 0LL;
          *(_QWORD *)(v32 + 24) |= 0x200000000uLL;
          v34 = *(_OWORD *)v48.m256i_i8;
          v48.m256i_i64[0] = 0LL;
          *(_OWORD *)(v26 + 64) = v34;
          *(_OWORD *)(v26 + 80) = v33;
          v35 = (__int64 *)a1[6];
          *(_OWORD *)&v48.m256i_u64[1] = 0LL;
          if ( (__int64 *)*v35 != a1 + 5 )
            goto LABEL_59;
          *(_QWORD *)v26 = a1 + 5;
          *(_QWORD *)(v26 + 8) = v35;
          *v35 = v26;
          v36 = Handle;
          a1[6] = v26;
          *(_DWORD *)(v26 + 108) ^= (*(_DWORD *)(v26 + 108) ^ PfSnVolumeCheckSeekPenalty(v26 + 32, v36)) & 1;
          if ( (*(_DWORD *)(v26 + 108) & 1) != 0 )
          {
            v6 |= 1u;
          }
          else if ( (v6 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v26 + 32, Handle) )
          {
            v6 |= 2u;
          }
        }
        v24 = v61;
        v25 = (unsigned int)(j + 1);
      }
      v10 = 0;
      *v58 = v6;
      ExFreePoolWithTag(v23, 0);
    }
    else
    {
LABEL_53:
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_39:
  if ( (v49.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v49, a1[1]);
  while ( 1 )
  {
    v37 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_59;
    v38 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_59;
    P = *(PVOID *)P;
    *(_QWORD *)(v38 + 8) = &P;
    if ( (v37[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose((__int64)(v37 + 2), a1[1]);
    ExFreePoolWithTag(v37, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Handle )
    NtClose(Handle);
  PfSnLogOpenVolumesForPrefetch(v2, 0LL);
  return (unsigned int)v10;
}
