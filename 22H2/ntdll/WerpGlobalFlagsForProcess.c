/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x180061C54
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     WerpPathTail @ 0x180061E44 (WerpPathTail.c)
 *     RtlUnicodeStringToInteger @ 0x1800765D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  _WORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  HANDLE v7; // rdi
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // ecx
  unsigned int v12; // r14d
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v15; // eax
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v20[4]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v21; // [rsp+68h] [rbp-A0h]
  _QWORD v22[3]; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+88h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-78h]
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v26[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  Handle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v17[0] = 0;
  *(_OWORD *)Handle_8 = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      Handle_8[1] = (HANDLE)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Handle_8[1] )
      {
        WORD1(Handle_8[0]) = v6;
        if ( (int)RtlAppendUnicodeToString(
                    (unsigned __int16 *)Handle_8,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString((unsigned __int16 *)Handle_8, v4) >= 0 )
        {
          LODWORD(v22[0]) = 48;
          v22[2] = Handle_8;
          v22[1] = 0LL;
          v23 = 64;
          v24 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, v22) >= 0 )
          {
            v7 = Handle;
            if ( (int)RtlInitUnicodeStringEx((__int64)v20, (__int64)L"GlobalFlag") >= 0 )
            {
              v8 = v26;
              v9 = NtQueryValueKey(v7, v20, 2LL, v26, 1024, &v16);
              if ( v9 < 0 )
              {
                if ( v9 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v12 = v16;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v16);
                    v10 = Heap;
                    if ( !Heap )
                      break;
                    v8 = (_DWORD *)Heap;
                    v15 = NtQueryValueKey(v7, v20, 2LL, Heap, v12, &v16);
                    if ( v15 >= 0 )
                      goto LABEL_17;
                    if ( v15 != -2147483643 )
                      goto LABEL_33;
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
                  }
                }
              }
              else
              {
                v10 = 0LL;
LABEL_17:
                v11 = v8[1];
                if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v11 == 4 )
                  {
                    if ( v8[2] == 4 )
                    {
                      v16 = 4;
                      v17[0] = v8[3];
                    }
                  }
                  else if ( v11 == 1 && ((unsigned __int8)v17 & 3) == 0 )
                  {
                    v16 = 4;
                    v21 = v8 + 3;
                    v20[0] = *((_WORD *)v8 + 4);
                    v20[1] = *((_WORD *)v8 + 4);
                    RtlUnicodeStringToInteger(v20, 0LL, v17);
                  }
                }
                else if ( v11 == 4 )
                {
                  v16 = v8[2];
                  if ( v8[2] <= 4u )
                    memmove(v17, v8 + 3, (unsigned int)v8[2]);
                }
LABEL_33:
                if ( v10 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( Handle_8[1] )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Handle_8[1]);
  return v17[0];
}
