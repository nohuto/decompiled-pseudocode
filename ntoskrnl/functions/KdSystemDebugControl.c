__int64 __fastcall KdSystemDebugControl(
        int a1,
        __m128i *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        KPROCESSOR_MODE a7)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // esi
  int v15; // ebx
  int Msr; // eax
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // esi
  unsigned int v29; // esi
  int v30; // esi
  int v31; // [rsp+44h] [rbp-134h] BYREF
  unsigned __int8 *v32; // [rsp+48h] [rbp-130h] BYREF
  PVOID P; // [rsp+50h] [rbp-128h] BYREF
  __m128i v34; // [rsp+58h] [rbp-120h]
  __int64 v35; // [rsp+68h] [rbp-110h]
  __m128i v36; // [rsp+70h] [rbp-108h]
  __int64 v37; // [rsp+80h] [rbp-F8h]
  __m128i v38; // [rsp+88h] [rbp-F0h]
  __m128i v39; // [rsp+98h] [rbp-E0h]
  __m128i v40; // [rsp+A8h] [rbp-D0h]
  __m128i v41; // [rsp+B8h] [rbp-C0h]
  __m128i v42; // [rsp+C8h] [rbp-B0h]
  __m128i v43; // [rsp+D8h] [rbp-A0h]
  __m128i v44; // [rsp+E8h] [rbp-90h]
  __m128i v45; // [rsp+F8h] [rbp-80h]
  __m128i v46; // [rsp+108h] [rbp-70h]
  __int64 v47; // [rsp+118h] [rbp-60h]
  __m128i v48; // [rsp+120h] [rbp-58h]
  __int64 v49; // [rsp+130h] [rbp-48h]
  __m128i v50; // [rsp+138h] [rbp-40h]
  __int64 v51; // [rsp+148h] [rbp-30h]
  __m128i v52; // [rsp+150h] [rbp-28h]
  __int64 v53; // [rsp+160h] [rbp-18h]

  v31 = 0;
  v32 = 0LL;
  P = 0LL;
  if ( (KdpBootedNodebug || KdPitchDebugger || !(_BYTE)KdDebuggerEnabled) && !KdLocalDebugEnabled )
    return 3221225506LL;
  if ( a1 > 14 )
  {
    v23 = a1 - 15;
    if ( !v23 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v44 = *a2;
      v45 = a2[1];
      v30 = _mm_cvtsi128_si32(v45);
      if ( v30 )
      {
        v15 = ExLockUserBuffer(v44.m128i_u64[1], v30, a7, IoReadAccess, &v32, (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteIoSpace(
                  v45.m128i_i32[1],
                  v45.m128i_i32[2],
                  v45.m128i_i32[3],
                  v44.m128i_u16[0],
                  v32,
                  v30,
                  &v31);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      if ( a3 != 16 )
        return 3221225476LL;
      Msr = KdpSysReadMsr(a2->m128i_i32[0], &a2->m128i_i64[1]);
      goto LABEL_83;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      if ( a3 != 16 )
        return 3221225476LL;
      Msr = KdpSysWriteMsr(a2->m128i_i32[0], &a2->m128i_u64[1]);
      goto LABEL_83;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v42 = *a2;
      v43 = a2[1];
      v29 = _mm_cvtsi128_si32(v43);
      if ( v29 )
      {
        v15 = ExLockUserBuffer(v42.m128i_u64[1], v29, a7, IoWriteAccess, &v32, (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysReadBusData(
                  v43.m128i_u32[1],
                  v43.m128i_u32[2],
                  v43.m128i_u32[3],
                  v42.m128i_u32[0],
                  v32,
                  v29,
                  &v31);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v40 = *a2;
      v41 = a2[1];
      v28 = _mm_cvtsi128_si32(v41);
      if ( v28 )
      {
        v15 = ExLockUserBuffer(v40.m128i_u64[1], v28, a7, IoReadAccess, &v32, (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteBusData(
                  v41.m128i_u32[1],
                  v41.m128i_u32[2],
                  v41.m128i_u32[3],
                  v40.m128i_u32[0],
                  v32,
                  v28,
                  &v31);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    if ( v27 == 1 )
    {
      Msr = KdpSysCheckLowMemory(0LL);
      goto LABEL_83;
    }
    goto LABEL_60;
  }
  if ( a1 == 14 )
  {
    if ( a3 != 32 )
      return 3221225476LL;
    v38 = *a2;
    v39 = a2[1];
    v22 = _mm_cvtsi128_si32(v39);
    if ( v22 )
    {
      v15 = ExLockUserBuffer(v38.m128i_u64[1], v22, a7, IoWriteAccess, &v32, (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpSysReadIoSpace(v39.m128i_i32[1], v39.m128i_i32[2], v39.m128i_i32[3], v38.m128i_u16[0], v32, v22, &v31);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v8 = a1 - 7;
  if ( !v8 )
  {
    if ( a5 != 40 )
      return 3221225476LL;
    KdpSysGetVersion(a4);
    v15 = 0;
    goto LABEL_84;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v52 = *a2;
    v53 = a2[1].m128i_i64[0];
    v21 = v53;
    if ( (_DWORD)v53 )
    {
      v15 = ExLockUserBuffer(v52.m128i_u64[1], v53, a7, IoWriteAccess, &v32, (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks(v52.m128i_i32[0], (_DWORD)v32, v21, 0, 0, (__int64)&v31);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v50 = *a2;
    v51 = a2[1].m128i_i64[0];
    v20 = v51;
    if ( (_DWORD)v51 )
    {
      v15 = ExLockUserBuffer(v50.m128i_u64[1], v51, a7, IoReadAccess, &v32, (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks(v50.m128i_i32[0], (_DWORD)v32, v20, 0, 1, (__int64)&v31);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v48 = *a2;
    v49 = a2[1].m128i_i64[0];
    v19 = v49;
    if ( (_DWORD)v49 )
    {
      v15 = ExLockUserBuffer(v48.m128i_u64[1], v49, a7, IoWriteAccess, &v32, (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks(v48.m128i_i32[0], (_DWORD)v32, v19, 0, 2, (__int64)&v31);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v46 = *a2;
    v47 = a2[1].m128i_i64[0];
    v18 = v47;
    if ( (_DWORD)v47 )
    {
      v15 = ExLockUserBuffer(v46.m128i_u64[1], v47, a7, IoReadAccess, &v32, (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks(v46.m128i_i32[0], (_DWORD)v32, v18, 0, 3, (__int64)&v31);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( a3 != 24 )
        return 3221225476LL;
      v34 = *a2;
      v35 = a2[1].m128i_i64[0];
      v14 = v35;
      if ( (_DWORD)v35 )
      {
        v15 = ExLockUserBuffer(v34.m128i_u64[1], v35, a7, IoReadAccess, &v32, (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteControlSpace(HIDWORD(v35), v34.m128i_i32[0], (_DWORD)v32, v14, (__int64)&v31);
LABEL_83:
          v15 = Msr;
          goto LABEL_84;
        }
        goto LABEL_84;
      }
LABEL_43:
      v15 = -1073741819;
      goto LABEL_84;
    }
LABEL_60:
    v15 = -1073741821;
    goto LABEL_84;
  }
  if ( a3 != 24 )
    return 3221225476LL;
  v36 = *a2;
  v37 = a2[1].m128i_i64[0];
  v17 = v37;
  if ( !(_DWORD)v37 )
    goto LABEL_43;
  v15 = ExLockUserBuffer(v36.m128i_u64[1], v37, a7, IoWriteAccess, &v32, (struct _MDL **)&P);
  if ( v15 >= 0 )
  {
    Msr = KdpSysReadControlSpace(HIDWORD(v37), v36.m128i_i32[0], (_DWORD)v32, v17, (__int64)&v31);
    goto LABEL_83;
  }
LABEL_84:
  if ( a6 )
    *a6 = v31;
  if ( v32 )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)v15;
}
