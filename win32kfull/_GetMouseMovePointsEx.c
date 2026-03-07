__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  INT v13; // r12d
  unsigned __int64 v14; // rcx
  INT v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r13d
  INT v19; // r12d
  __int64 v20; // rax
  int v21; // r12d
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v25; // r12d
  unsigned int v26; // esi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  INT v30; // ebx
  __int64 v31; // rax
  INT v32; // eax
  __int64 v33; // rcx
  INT v34; // ebx
  __int64 v35; // rax
  INT v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  __m128i v39; // xmm6
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rbx
  int v44; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int i; // [rsp+38h] [rbp-A0h]
  __int128 v48; // [rsp+40h] [rbp-98h]
  INT c; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+58h] [rbp-80h] BYREF
  __int64 v51; // [rsp+60h] [rbp-78h] BYREF
  __m128i v52[2]; // [rsp+70h] [rbp-68h] BYREF
  int v54; // [rsp+E0h] [rbp+8h]

  i = 0;
  v51 = 0LL;
  LODWORD(v50) = *a1;
  HIDWORD(v50) = a1[2];
  v46 = 0LL;
  v45 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  LogicalToPhysicalDPIPoint(&v51, &v50, CurrentThreadDpiAwarenessContext, 0LL);
  if ( *(_DWORD *)(SGDGetUserSessionState(v5) + 14364) )
    v7 = ((unsigned __int8)*(_DWORD *)(SGDGetUserSessionState(v6) + 14364) - 1) & 0x3F;
  else
    v7 = 63;
  v8 = v7;
  v9 = gpDispInfo;
  v48 = *(_OWORD *)(*gpDispInfo + 24LL);
  while ( 1 )
  {
    v10 = 0;
    v11 = SGDGetUserSessionState(v9);
    v9 = v8;
    if ( !HIWORD(*(_DWORD *)(v11 + 24LL * v8 + 14368)) )
      break;
    v9 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v8) + 24LL * v8 + 14372) >> 16;
    if ( !(_WORD)v9 )
      break;
    v12 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v9) + 24LL * v8 + 14368) >> 16;
    v13 = (unsigned __int16)v12 + 1;
    v14 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v12) + 24LL * v8 + 14372) >> 16;
    c = (unsigned __int16)v14 + 1;
    v15 = DWORD2(v48) - v48;
    v16 = SGDGetUserSessionState(v14);
    if ( v13 == v15 )
      v18 = *(__int16 *)(v16 + 24LL * v8 + 14368);
    else
      v18 = v48 + EngMulDiv(*(unsigned __int16 *)(v16 + 24LL * v8 + 14368), v15, v13);
    v19 = HIDWORD(v48) - DWORD1(v48);
    v20 = SGDGetUserSessionState(v17);
    if ( c == v19 )
      v21 = *(__int16 *)(v20 + 24LL * v8 + 14372);
    else
      v21 = DWORD1(v48) + EngMulDiv(*(unsigned __int16 *)(v20 + 24LL * v8 + 14372), v19, c);
    if ( __PAIR64__(v21, v18) == v51 )
    {
      v10 = 1;
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v9) & 0xF) != 2 )
    {
      v45 = __PAIR64__(v21, v18);
      v22 = W32GetCurrentThreadDpiAwarenessContext(v9);
      PhysicalToLogicalDPIPoint(&v46, &v45, v22, 0LL);
      if ( v46 == v50 )
        v10 = 1;
    }
    if ( v10
      && (!*((_DWORD *)a1 + 2) || *((_DWORD *)a1 + 2) == *(_DWORD *)(SGDGetUserSessionState(v9) + 24LL * v8 + 14376)) )
    {
      v23 = 1;
      goto LABEL_28;
    }
    if ( v8 )
      v8 = ((_BYTE)v8 - 1) & 0x3F;
    else
      v8 = 63;
    if ( v8 == v7 )
    {
      v23 = 0;
      goto LABEL_28;
    }
  }
  v23 = 0;
LABEL_28:
  if ( v23 )
  {
    v25 = v8 - v7 + 64;
    if ( v8 > v7 )
      v25 = v8 - v7;
    if ( v25 >= a3 )
      v25 = a3;
    v26 = 0;
    for ( i = 0; v26 < v25; i = v26 )
    {
      v54 = (unsigned __int16)HIWORD(*(_DWORD *)(SGDGetUserSessionState(v9) + 24LL * v8 + 14368)) + 1;
      v27 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v8) + 24LL * v8 + 14372) >> 16;
      v44 = (unsigned __int16)v27 + 1;
      v28 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v27) + 24LL * v8 + 14368) >> 16;
      if ( !(_WORD)v28 )
        break;
      v29 = (unsigned __int64)*(unsigned int *)(SGDGetUserSessionState(v28) + 24LL * v8 + 14372) >> 16;
      if ( !(_WORD)v29 )
        break;
      v30 = DWORD2(v48) - v48;
      v31 = SGDGetUserSessionState(v29);
      if ( v54 == v30 )
        v32 = EngMulDiv(*(__int16 *)(v31 + 24LL * v8 + 14368), v30, v54);
      else
        v32 = v48 + EngMulDiv(*(unsigned __int16 *)(v31 + 24LL * v8 + 14368), v30, v54);
      LODWORD(v45) = v32;
      v34 = HIDWORD(v48) - DWORD1(v48);
      v35 = SGDGetUserSessionState(v33);
      if ( v44 == v34 )
        v36 = EngMulDiv(*(__int16 *)(v35 + 24LL * v8 + 14372), v34, v44);
      else
        v36 = DWORD1(v48) + EngMulDiv(*(unsigned __int16 *)(v35 + 24LL * v8 + 14372), v34, v44);
      HIDWORD(v45) = v36;
      v38 = W32GetCurrentThreadDpiAwarenessContext(v37);
      PhysicalToLogicalDPIPoint(&v46, &v45, v38, 0LL);
      if ( a4 == 2 )
      {
        v39 = *GetScreenRect(v52);
        v52[1] = v39;
        *(_DWORD *)(a2 + 24LL * v26) = EngMulDiv(
                                         (unsigned __int16)v46,
                                         0x10000,
                                         _mm_cvtsi128_si32(_mm_srli_si128(v39, 8)) - _mm_cvtsi128_si32(v39) - 1);
        *(_DWORD *)(a2 + 24LL * v26 + 4) = EngMulDiv(
                                             WORD2(v46),
                                             0x10000,
                                             _mm_cvtsi128_si32(_mm_srli_si128(v39, 12))
                                           - _mm_cvtsi128_si32(_mm_srli_si128(v39, 4))
                                           - 1);
        v40 = v26;
      }
      else
      {
        *(_QWORD *)(a2 + 24LL * v26) = v46;
        v40 = v26;
        v41 = *(_DWORD *)(a2 + 24LL * v26);
        if ( v41 < 0 )
          *(_DWORD *)(a2 + 24LL * v26) = v41 + 0x10000;
        v42 = *(_DWORD *)(a2 + 24LL * v26 + 4);
        if ( v42 < 0 )
          *(_DWORD *)(a2 + 24LL * v26 + 4) = v42 + 0x10000;
      }
      v43 = 3 * v40;
      *(_DWORD *)(a2 + 8 * v43 + 8) = *(_DWORD *)(SGDGetUserSessionState(v40) + 24LL * v8 + 14376);
      v9 = *(_QWORD *)(SGDGetUserSessionState(3LL * v8) + 24LL * v8 + 14384);
      *(_QWORD *)(a2 + 8 * v43 + 16) = v9;
      if ( v8 )
        v8 = ((_BYTE)v8 - 1) & 0x3F;
      else
        v8 = 63;
      ++v26;
    }
    return v26;
  }
  else
  {
    UserSetLastError(1171);
    return 0xFFFFFFFFLL;
  }
}
