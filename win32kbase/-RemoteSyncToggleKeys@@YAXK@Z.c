void __fastcall RemoteSyncToggleKeys(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int16 ActiveHKL; // ax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // ecx
  _QWORD v49[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v50; // [rsp+40h] [rbp-20h]

  v49[0] = 0LL;
  v50 = 0LL;
  *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12668) = a1 | 0x8000;
  v49[1] = 0LL;
  if ( gpqForeground )
  {
    v8 = *(_DWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 12668) & 0x4000;
    v13 = *(_DWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 12668);
    LOBYTE(v19) = ~*(_BYTE *)(SGDGetUserSessionState(v15, v14, v16, v17) + 14061);
    v22 = (v19 >> 1) & 1;
    if ( ((v13 & 4) == 0) != (_BYTE)v22 )
    {
      LOBYTE(v49[0]) = 58;
      WORD1(v49[0]) = 20;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
      WORD1(v49[0]) = -32748;
      LOBYTE(v49[0]) = 58;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
    }
    v23 = *(_DWORD *)(SGDGetUserSessionState(v22, v18, v20, v21) + 12668);
    LOBYTE(v29) = ~*(_BYTE *)(SGDGetUserSessionState(v25, v24, v26, v27) + 14092);
    v32 = (v29 >> 1) & 1;
    if ( ((v23 & 2) == 0) != (_BYTE)v32 )
    {
      LOBYTE(v49[0]) = 69;
      WORD1(v49[0]) = 144;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
      WORD1(v49[0]) = -32624;
      LOBYTE(v49[0]) = 69;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
    }
    v33 = *(_DWORD *)(SGDGetUserSessionState(v32, v28, v30, v31) + 12668);
    if ( ((v33 & 1) == 0) != ((~*(_BYTE *)(SGDGetUserSessionState(v35, v34, v36, v37) + 14092) & 8) != 0) )
    {
      LOBYTE(v49[0]) = 70;
      WORD1(v49[0]) = 145;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
      WORD1(v49[0]) = -32623;
      LOBYTE(v49[0]) = 70;
      xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
    }
    ActiveHKL = GetActiveHKL();
    v42 = 1023LL;
    if ( (ActiveHKL & 0x3FF) == 0x11 )
    {
      v43 = *(_DWORD *)(SGDGetUserSessionState(1023LL, v39, v40, v41) + 12668);
      LOBYTE(v48) = ~*(_BYTE *)(SGDGetUserSessionState(v45, v44, v46, v47) + 14061);
      v42 = (v48 >> 3) & 1;
      if ( ((v43 & 8) == 0) != (_BYTE)v42 )
      {
        LOBYTE(v49[0]) = 112;
        WORD1(v49[0]) = 21;
        xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
        WORD1(v49[0]) = -32747;
        LOBYTE(v49[0]) = 112;
        xxxProcessKeyEvent((unsigned __int8 *)v49, 0LL, v8 != 0, 0, 0LL, 0LL);
      }
    }
    *(_DWORD *)(SGDGetUserSessionState(v42, v39, v40, v41) + 12668) = 0;
  }
}
