/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800DAC38
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // si
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rax
  _WORD *NtSystemRoot; // rax
  void *v9; // rsi
  int Dll; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64); // rcx
  __int64 v16; // rsi
  _QWORD v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  void *v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22[16]; // [rsp+60h] [rbp-A8h] BYREF

  v18[1] = a1;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v6 = 0LL;
  if ( (_DWORD)v5 )
  {
    v7 = *(_WORD **)(a1 + 24);
    while ( *v7 != 92 && *v7 != 47 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= (unsigned int)v5 )
        goto LABEL_10;
    }
    v3 = 1;
  }
LABEL_10:
  if ( v3 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
    return 0;
  }
  v20 = &unk_18016D810;
  v19 = 34078720;
  NtSystemRoot = (_WORD *)RtlGetNtSystemRoot(v6, v5);
  RtlAppendUnicodeToString((unsigned __int16 *)&v19, NtSystemRoot);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v19, &SlashSystem32SlashString);
  v9 = v20;
  LdrpInitializeDllPath(0LL, (__int64)v20, v22);
  Dll = LdrpLoadDll(a1 + 16, (int)v22, 1, (__int64)&v21);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_18016C4D0 + 96),
      *(_QWORD *)(a1 + 24),
      (unsigned int)Dll,
      v9);
    return 0;
  }
  v11 = v21;
  *(_QWORD *)(a1 + 32) = v21;
  v12 = RtlImageNtHeader(*(_QWORD *)(v11 + 48));
  if ( v12 )
  {
    if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v14 = *(_QWORD *)(a1 + 32);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 56);
      if ( !v15 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v13);
        return 0;
      }
      v18[0] = 0LL;
      if ( LdrpCallInitRoutine(v15, *(_QWORD *)(v14 + 48), 4u, (__int64)v18) && (v16 = v18[0]) != 0 )
      {
        if ( *(_DWORD *)v18[0] == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v18[0]);
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v16 + 72);
          *(_QWORD *)(v16 + 32) = *(_QWORD *)(qword_18016C4D0 + 96);
          *(_DWORD *)(v16 + 40) = AVrfpVerifierFlags;
          *(_DWORD *)(v16 + 44) = AVrfpDebug;
          *(_QWORD *)(v16 + 48) = RtlpGetStackTraceAddress;
          *(_QWORD *)(v16 + 56) = RtlpDebugPageHeapCreate;
          *(_QWORD *)(v16 + 64) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            *(_DWORD *)(v16 + 40) |= 0x20000u;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v18[0]);
        }
      }
      else
      {
        v2 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
      v2 = 1;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    return 0;
  return v4;
}
