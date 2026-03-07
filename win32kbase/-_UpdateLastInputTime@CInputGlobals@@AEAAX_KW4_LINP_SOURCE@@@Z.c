char __fastcall CInputGlobals::_UpdateLastInputTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rax
  __int64 v5; // r15
  int v7; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  int v23; // ebx
  char v24; // si
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rax
  int v30; // ecx
  int v31; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v4 = (int *)&retaddr;
  v5 = *(_QWORD *)(a1 + 16);
  v7 = a3;
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x2000000000008000LL) != 0 )
  {
    LOBYTE(v4) = byte_1C02C4068 - 1;
    if ( (unsigned __int8)(byte_1C02C4068 - 1) > 2u && (qword_1C02C4050 & 0x2000000000008000LL) != 0 )
    {
      LOBYTE(v4) = 0;
      if ( (qword_1C02C4058 & 0x2000000000008000LL) == qword_1C02C4058 )
      {
        v4 = (int *)SGDGetUserSessionState(a1, 0x2000000000008000LL, a3, a4);
        if ( v4[716] > 0 )
        {
          v17 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
          v18 = (v17 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          v4 = (int *)SGDGetUserSessionState(v17, v18, v15, v16);
          v22 = v4[716];
          if ( v18 - v5 > v22 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          {
            v23 = *(_DWORD *)(SGDGetUserSessionState(v22, v19, v20, v21) + 2864);
            v24 = gProtocolType == 0;
            v29 = (_DWORD *)SGDGetUserSessionState(v26, v25, v27, v28);
            LOBYTE(v4) = McTemplateK0qhq_EtwWriteTransfer(
                           v30,
                           (unsigned int)&DisplayTimeoutResetEvent,
                           v31,
                           *v29,
                           v24,
                           v23);
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 16) = a2;
  if ( v7 > 11 )
  {
    v13 = v7 - 13;
    if ( !v13 )
      goto LABEL_5;
    v14 = v13 - 1;
    if ( !v14 || (unsigned int)(v14 - 2) <= 1 )
      goto LABEL_5;
  }
  else if ( v7 == 11
         || (v9 = v7 - 1) == 0
         || (v10 = v9 - 2) == 0
         || (v11 = v10 - 1) == 0
         || (v12 = v11 - 1) == 0
         || v12 == 4 )
  {
LABEL_5:
    *(_QWORD *)(a1 + 24) = a2;
  }
  return (char)v4;
}
