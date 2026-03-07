__int64 PopEtInit()
{
  unsigned int v0; // esi
  _OWORD *Pool2; // rax
  _OWORD *v2; // rbx
  _WORD *v3; // rcx
  __int16 dwBuildNumber; // dx
  __int16 dwMajorVersion; // ax
  bool v6; // cf
  __int16 dwMinorVersion; // ax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r11
  unsigned __int64 v13; // rax
  struct _KPROCESS *i; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v16; // rbx
  unsigned __int64 v17; // rcx
  int ObjectType; // eax
  _QWORD DestinationString[3]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v21[16]; // [rsp+38h] [rbp-D0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+B8h] [rbp-50h] BYREF

  v0 = 0;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( PopEnergyEstimationEnabled )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 0x438uLL, 0x54456F50u);
    PopEtGlobals = (__int64)Pool2;
    v2 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x438uLL);
      v2[1] = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
      memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v3 = (_WORD *)PopEtGlobals;
        dwBuildNumber = -1;
        dwMajorVersion = -1;
        if ( VersionInformation.dwMajorVersion < 0xFFFF )
          dwMajorVersion = VersionInformation.dwMajorVersion;
        v6 = VersionInformation.dwMinorVersion < 0xFFFF;
        *(_WORD *)(PopEtGlobals + 1062) = dwMajorVersion;
        dwMinorVersion = -1;
        if ( v6 )
          dwMinorVersion = VersionInformation.dwMinorVersion;
        v6 = VersionInformation.dwBuildNumber < 0xFFFF;
        v3[530] = dwMinorVersion;
        if ( v6 )
          dwBuildNumber = VersionInformation.dwBuildNumber;
        v3[529] = dwBuildNumber;
        v3[528] = 4169;
      }
      v8 = (_QWORD *)PopEtGlobals;
      *(_OWORD *)(PopEtGlobals + 40) = 0LL;
      v8[5] = 0LL;
      v8[11] = PopEtInternerAllocate;
      v8[12] = PopEtInternerFree;
      v8[13] = PopEtInternerLock;
      v8[14] = PopEtInternerUnlock;
      v8[15] = PopEtInternerEntryInitialize;
      RtlInternTableInitialize(v8 + 7, (__int64)(v8 + 11));
      PoEnergyContextInitialize(v8 + 16);
      v9 = PsIdleProcess;
      *((_QWORD *)PsIdleProcess + 285) = v10;
      PopEtInitializeBuiltinAppId((__int64)(v8 + 98), (__int64)L"Default");
      PopEtInitializeBuiltinAppId((__int64)(v8 + 109), (__int64)L"Undetermined");
      PopEtInitializeBuiltinAppId((__int64)(v8 + 120), (__int64)L"Overflow");
      PopEtInitializeBuiltinAppId((__int64)(v8 + 87), (__int64)L"IsrDpc");
      v11 = (__int64)(v8 + 76);
      *(_QWORD *)(v9[285] + 448LL) = v12;
      PopEtInitializeBuiltinAppId(v11, (__int64)L"System");
      v13 = PsInitialSystemProcess[2].Affinity.StaticBitmap[4];
      if ( v13 )
        *(_QWORD *)(v13 + 448) = v11;
      for ( i = 0LL; ; i = v16 )
      {
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(i);
        v16 = NextProcess;
        if ( !NextProcess )
          break;
        v17 = NextProcess[2].Affinity.StaticBitmap[4];
        if ( v17 )
        {
          if ( !*(_QWORD *)(v17 + 448) )
          {
            *(_QWORD *)(v17 + 448) = PopEtGlobals + 784;
            PoEnergyContextStart(NextProcess);
          }
        }
      }
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnergyTracker");
      memset(v21, 0, 0x78uLL);
      BYTE2(v21[0]) |= 4u;
      v21[8] = PopEtEnergyTrackerClose;
      LOWORD(v21[0]) = 120;
      v21[9] = PopEtEnergyTrackerDelete;
      HIDWORD(v21[4]) = 1;
      LODWORD(v21[5]) = 640;
      LODWORD(v21[1]) = 402;
      HIDWORD(v21[3]) = 2031617;
      ObjectType = ObCreateObjectType(
                     (const UNICODE_STRING *)&DestinationString[1],
                     (__int64)v21,
                     0LL,
                     PopEtGlobals + 32);
      if ( ObjectType >= 0 )
        return 0;
      return (unsigned int)ObjectType;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v0;
}
