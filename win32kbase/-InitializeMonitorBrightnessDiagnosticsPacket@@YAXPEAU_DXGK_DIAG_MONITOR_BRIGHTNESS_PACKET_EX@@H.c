void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *(_OWORD *)((char *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v4 * KeQueryTimeIncrement();
  v9 = *(unsigned int *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3112);
  *((_DWORD *)a1 + 14) = v9;
  v13 = *(unsigned int *)(SGDGetUserSessionState(v9, v10, v11, v12) + 3092);
  *((_DWORD *)a1 + 15) = v13;
  v17 = *(unsigned int *)(SGDGetUserSessionState(v13, v14, v15, v16) + 3088);
  *((_DWORD *)a1 + 16) = v17;
  v21 = *(unsigned int *)(SGDGetUserSessionState(v17, v18, v19, v20) + 3100);
  *((_DWORD *)a1 + 17) = v21;
  v25 = *(unsigned int *)(SGDGetUserSessionState(v21, v22, v23, v24) + 3096);
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v25;
  v29 = *(unsigned int *)(SGDGetUserSessionState(v25, v26, v27, v28) + 3108);
  *((_DWORD *)a1 + 21) &= ~2u;
  *((_DWORD *)a1 + 20) = v29;
  v33 = (*((_DWORD *)a1 + 21) ^ (4 * *(_DWORD *)(SGDGetUserSessionState(v29, v30, v31, v32) + 3000))) & 4;
  *((_DWORD *)a1 + 21) ^= v33;
  *((_DWORD *)a1 + 21) = a2 & 1 | *((_DWORD *)a1 + 21) & 0xFFFFFFF6 | (8
                                                                     * (*(_DWORD *)(SGDGetUserSessionState(
                                                                                      v33,
                                                                                      v34,
                                                                                      v35,
                                                                                      v36)
                                                                                  + 2996) & 1));
}
