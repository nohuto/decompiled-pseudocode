/*
 * XREFs of ViInitSystemPhase0 @ 0x140A70AB8
 * Callers:
 *     VerifierInitSystem @ 0x140A70A84 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C7D40 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1409C8E30 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x1409DA800 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x140A70C9C (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140A70CE4 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140A948A0 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  const char *v6; // rcx
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  int v9; // eax
  unsigned int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 *QuadPart; // rbx
  unsigned __int64 v15; // rdx
  int v16; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  String2 = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 280);
  v4 = *(_DWORD *)(v1 + 132) & 2;
  v5 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v5;
  if ( (v5 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v5 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((ULONG_PTR)&ViDriversLoadLock, 0, 1, 0);
  qword_140C1D4F8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140C1CE98 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140C1CE88 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_140C2A91C = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel == -1 )
  {
    if ( (_DWORD)VfRuleClasses )
    {
      MmVerifyDriverLevel = 0;
      VfRuleClasses = 0LL;
      MmVerifyDriverBufferLength = -1;
      VfRandomVerifiedDrivers = 0;
      ViVerifyAllDrivers = 0;
      VfSafeMode = 1;
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
    qword_140D4A038 = *(_QWORD *)(v3 + 72);
    *(_OWORD *)&xmmword_140D4A040 = *(_OWORD *)(v3 + 80);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v9 = 1, v4) )
  {
    v9 = 0;
  }
  v6 = *(const char **)(a1 + 216);
  VfClearanceFlag = v9;
  if ( strstr(v6, "SAFEBOOT:") || VfClearanceFlag )
  {
    VfRuleClassesRecord = VfRuleClasses;
    MmVerifyDriverLevel = 0;
    VfRuleClasses = 0LL;
    MmVerifyDriverBufferLength = -1;
    VfRandomVerifiedDrivers = 0;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  if ( MmVerifyDriverLevel == -1 )
    goto LABEL_15;
  if ( !VfRandomVerifiedDrivers && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( MmVerifyDriverLevel == -1 || (MmVerifyDriverLevel & 0x400000) == 0 )
LABEL_15:
    VfRandomVerifiedDrivers = 0;
  if ( VfRandomVerifiedDrivers )
  {
    v10 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v10;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v10 >= 3 )
    {
      if ( v10 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_43;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_43:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_44;
  }
  if ( MmVerifyDriverBufferLength == -1 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))ViInitPickRandomTargets)(
                          (LARGE_INTEGER)v8.QuadPart,
                          (LARGE_INTEGER)v7.QuadPart) )
      return;
    MmVerifyDriverBufferLength = 0;
    if ( VfVerifyMode > 2 )
      VfSetVerifierRunningMode(2);
    goto LABEL_45;
  }
LABEL_44:
  VfRandomVerifiedDrivers = 0;
LABEL_45:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_75:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v8.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v11 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v11 )
    {
      v12 = 0x100002601LL;
      do
      {
        v13 = *(unsigned __int16 *)v8.QuadPart;
        if ( (unsigned int)v13 <= 0x20 && _bittest64(&v12, v13) || (_WORD)v13 == 12288 )
        {
          QuadPart = (__int64 *)v8.QuadPart;
        }
        else
        {
          if ( (_DWORD)v13 == 42 )
            goto LABEL_75;
          QuadPart = (__int64 *)(v8.QuadPart + 2);
          if ( (_DWORD)v13 == 34 )
          {
            v8.QuadPart += 2LL;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
            if ( QuadPart >= v11 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v11 );
            if ( QuadPart >= v11 )
              break;
          }
          else
          {
            while ( QuadPart < v11 )
            {
              v15 = *(unsigned __int16 *)QuadPart;
              if ( (unsigned int)v15 <= 0x20 )
              {
                if ( _bittest64(&v12, v15) )
                  break;
              }
              if ( (_WORD)v15 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v16 = 2 * (((__int64)QuadPart - v8.QuadPart) >> 1);
          if ( v16 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v8.QuadPart) >> 1);
            String2.MaximumLength = v16 + 2;
            if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
              break;
            String2.Buffer = (wchar_t *)v8.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v8.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v11 );
    }
  }
  VfInitSystemNoRebootNeeded(v8.QuadPart, 1);
}
