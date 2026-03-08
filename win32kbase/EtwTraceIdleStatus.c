/*
 * XREFs of EtwTraceIdleStatus @ 0x1C00BA040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0016B10 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1C01669C4 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 */

void EtwTraceIdleStatus()
{
  __int64 v0; // r15
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // r15
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // si
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d

  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x2000000000008000LL) != 0
    && (qword_1C02C4058 & 0x2000000000008000LL) == qword_1C02C4058 )
  {
    v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v5 = v0 - CInputGlobals::GetLastInputTime(gpInputGlobals);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v6 = *(_DWORD *)(SGDGetUserSessionState(v2, v1, v3, v4) + 3092);
      v11 = *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 3100);
      v16 = SGDGetUserSessionState(v13, v12, v14, v15);
      v17 = giScreenSaveTimeOutMs;
      v18 = *(_DWORD *)(v16 + 2872);
      v23 = *(_DWORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 2864);
      v28 = (_DWORD *)SGDGetUserSessionState(v25, v24, v26, v27);
      McTemplateK0qqqqqqq_EtwWriteTransfer(v30, v29, v31, *v28, v5, v23, v17, v18, v11, v6);
    }
  }
}
