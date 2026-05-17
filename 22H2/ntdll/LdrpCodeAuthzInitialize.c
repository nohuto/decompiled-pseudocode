/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18007C340
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     ZwQueryKey @ 0x18009D7A0 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  int v3; // ebx
  int Key; // ebx
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v11[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Heap; // [rsp+60h] [rbp-A8h]
  HANDLE v13; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  int v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  __int128 v22; // [rsp+B8h] [rbp-50h]
  _BYTE v23[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v24; // [rsp+DCh] [rbp-2Ch]
  _BYTE v25[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v26; // [rsp+FCh] [rbp-Ch]
  int v27; // [rsp+100h] [rbp-8h]
  unsigned int v28; // [rsp+104h] [rbp-4h]
  _BYTE v29[4]; // [rsp+148h] [rbp+40h] BYREF
  int v30; // [rsp+14Ch] [rbp+44h]
  int v31; // [rsp+150h] [rbp+48h]
  int v32; // [rsp+154h] [rbp+4Ch]
  __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v14 = 0LL;
  v10 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v16);
  if ( (unsigned __int16)(*(_WORD *)(v16 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v13, 3LL, &unk_18011D750) < 0
    || (v3 = NtQueryValueKey(v13, &unk_18011E448, 2LL, v29, 80, &v15), NtClose(v13), v3 < 0)
    || v30 != 4
    || v31 != 4
    || !v32 )
  {
    v9 = 0LL;
    v1 = 0;
    if ( (int)NtOpenKey(&v9, 131097LL, &unk_180166600) >= 0 )
    {
      Key = ZwQueryKey(v9, 2LL, v23);
      NtClose(v9);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v24 )
        goto LABEL_27;
    }
    if ( (int)NtOpenKey(&Handle, 1LL, &unk_18011D720) >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v25, 80, &v7) >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(Handle, L"FH", 2LL, v25, 80, &v7);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v11[0] = 0;
      if ( (unsigned int)UnicodeString.Length + 120 <= 0xFFFE )
      {
        v11[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap(
                 (__int64)NtCurrentPeb()->ProcessHeap,
                 NtdllBaseTag + 1572864,
                 (unsigned __int16)(UnicodeString.Length + 120));
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v11, (const void **)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v11, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v18 = 48;
            v20 = v11;
            v19 = 0LL;
            v21 = 64;
            v22 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v18) >= 0 )
            {
              v5 = NtQueryValueKey(Handle, L"$&", 2LL, v25, 80, &v7);
              NtClose(Handle);
              if ( v5 >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v1 )
      {
LABEL_27:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_18011E428, &v14) >= 0 )
        {
          v6 = v14;
          if ( (int)LdrGetProcedureAddressForCaller(v14, &qword_18011E458, 0, &v10, 0, retaddr) >= 0 && v10 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = v6;
          }
          else
          {
            LdrUnloadDll(v6);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
