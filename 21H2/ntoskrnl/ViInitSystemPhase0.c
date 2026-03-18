/*
 * XREFs of ViInitSystemPhase0 @ 0x140B27B30
 * Callers:
 *     VerifierInitSystem @ 0x140B27AFC (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ViSetDifPluginMode @ 0x140A7C548 (ViSetDifPluginMode.c)
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x140A83024 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x140A94644 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x140B27D40 (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140B27D88 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140B53650 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  const char *v6; // rcx
  int v7; // eax
  LARGE_INTEGER v8; // rdx
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // r8
  LARGE_INTEGER v11; // r9
  int v12; // eax
  unsigned int v13; // eax
  __int64 *v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 *QuadPart; // rbx
  unsigned __int64 v18; // rdx
  int v19; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  String2 = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 280);
  v4 = *(_DWORD *)(v1 + 132) & 2;
  LOBYTE(VfExtendedParameters) = 1;
  dword_140C5B0E8 = 32;
  v5 = VfOptionFlags & 0x1FFF;
  VfOptionFlags = v5;
  if ( (v5 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v5 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0, 1, 0);
  qword_140C1B2C8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140C1ADC8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140C1ADB8 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (VfRuleClasses & 0x400000) != 0 ? 2 : 4;
    dword_140C2A044 = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel == -1 )
  {
    if ( (_DWORD)VfRuleClasses )
    {
      MmVerifyDriverLevel = 0;
      VfRuleClasses = 0LL;
      LODWORD(MmVerifyDriverBufferLength) = -1;
      VfRandomVerifiedDrivers = 0;
      ViVerifyAllDrivers = 0;
      VfSafeMode = 0;
      if ( (VfOptionFlags & 0x410) != 0 )
        VfClearanceFlag = 1;
      return;
    }
  }
  else
  {
    LODWORD(VfRuleClasses) = MmVerifyDriverLevel;
  }
  if ( !v4 && v3 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v3 + 56);
    BugCheckParameter1 = *(_QWORD *)(v3 + 64);
    qword_140D57540 = *(_QWORD *)(v3 + 72);
    *(_OWORD *)&xmmword_140D57548 = *(_OWORD *)(v3 + 80);
  }
  VfRuleClassesRecord = VfRuleClasses;
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || (((_DWORD)MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v12 = 1, v4) )
  {
    v12 = 0;
  }
  v6 = *(const char **)(a1 + 216);
  VfClearanceFlag = v12;
  if ( strstr(v6, "SAFEBOOT:") )
  {
    v7 = 1;
    goto LABEL_33;
  }
  v7 = 0;
  if ( VfClearanceFlag )
  {
LABEL_33:
    MmVerifyDriverLevel = 0;
    VfRuleClasses = 0LL;
    LODWORD(MmVerifyDriverBufferLength) = -1;
    VfRandomVerifiedDrivers = 0;
    ViVerifyAllDrivers = 0;
    VfSafeMode = v7;
    return;
  }
  VfTriageSystem(a1);
  ViSetDifPluginMode();
  if ( MmVerifyDriverLevel == -1 )
    goto LABEL_15;
  if ( !VfRandomVerifiedDrivers && (_DWORD)MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( MmVerifyDriverLevel == -1 || (MmVerifyDriverLevel & 0x400000) == 0 )
LABEL_15:
    VfRandomVerifiedDrivers = 0;
  if ( VfRandomVerifiedDrivers )
  {
    v13 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v13;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v13 >= 3 )
    {
      if ( v13 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_45;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_45:
    LODWORD(MmVerifyDriverBufferLength) = 0;
    goto LABEL_46;
  }
  if ( (_DWORD)MmVerifyDriverBufferLength == -1 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))ViInitPickRandomTargets)(
                          (LARGE_INTEGER)v9.QuadPart,
                          (LARGE_INTEGER)v8.QuadPart) )
      return;
    LODWORD(MmVerifyDriverBufferLength) = 0;
    if ( VfVerifyMode > 2 )
      VfSetVerifierRunningMode(2);
    goto LABEL_47;
  }
LABEL_46:
  VfRandomVerifiedDrivers = 0;
LABEL_47:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_76:
    ViVerifyAllDrivers = 1;
    goto LABEL_77;
  }
  if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v9.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v14 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *(unsigned __int16 *)v9.QuadPart;
        if ( (unsigned __int16)v16 <= 0x20u && _bittest64(&v15, v16) || (_WORD)v16 == 12288 )
        {
          QuadPart = (__int64 *)v9.QuadPart;
        }
        else
        {
          if ( (_DWORD)v16 == 42 )
            goto LABEL_76;
          QuadPart = (__int64 *)(v9.QuadPart + 2);
          if ( (_DWORD)v16 == 34 )
          {
            v9.QuadPart += 2LL;
            while ( 1 )
            {
              QuadPart = (__int64 *)((char *)QuadPart + 2);
              if ( QuadPart >= v14 )
                goto LABEL_77;
              if ( *(_WORD *)QuadPart == 34 )
                goto LABEL_69;
            }
          }
          while ( QuadPart < v14 )
          {
            v18 = *(unsigned __int16 *)QuadPart;
            if ( (unsigned __int16)v18 <= 0x20u )
            {
              if ( _bittest64(&v15, v18) )
                break;
            }
            if ( (_WORD)v18 == 12288 )
              break;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
          }
LABEL_69:
          v19 = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
          if ( v19 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
            String2.MaximumLength = v19 + 2;
            if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
              break;
            String2.Buffer = (wchar_t *)v9.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v9.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v14 );
    }
  }
LABEL_77:
  VfInitSystemNoRebootNeeded(v9.QuadPart, 1, v10.QuadPart, v11.QuadPart);
}
