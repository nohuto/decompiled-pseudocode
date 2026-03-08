/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x1403AB95C
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x14055003C (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     IoGetEnvironmentVariableEx @ 0x14075D3B0 (IoGetEnvironmentVariableEx.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     IopCachePreviousBootData @ 0x140B90728 (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h] BYREF
  char v5; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v10[4]; // [rsp+60h] [rbp-20h] BYREF

  P = 0LL;
  v1 = 0;
  v10[0] = 2012912317;
  Handle = 0LL;
  dword_140C6A870 = 0;
  v10[1] = 1295123289;
  v10[2] = -198680387;
  v10[3] = 1266192359;
  v9[0] = 8388734LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5 = 0;
  v8 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2808) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2808);
      xmmword_140C3F470 = *(_OWORD *)(a1 + 2824);
      v2 = IopOpenRegistryKey(&Handle, 0LL, v9, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 )
          {
            v3 = v4;
            if ( (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)IoGetEnvironmentVariableEx(
                    (unsigned int)L"OfflineMemoryDumpUseCapability",
                    (unsigned int)v10,
                    (unsigned int)&v5,
                    (unsigned int)&v8,
                    0LL) < 0
          || v5 != v4 )
        {
          IoSetEnvironmentVariableEx(
            (unsigned int)L"OfflineMemoryDumpUseCapability",
            (unsigned int)v10,
            (unsigned int)&v4,
            1,
            7);
        }
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_140C6A870 = v2;
      }
    }
    else
    {
      dword_140C6A870 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140C6A870 = -1073741275;
  }
}
