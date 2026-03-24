/*
 * XREFs of ViInitSystemPhase0 @ 0x140A6FAB8
 * Callers:
 *     VerifierInitSystem @ 0x140A6FA84 (VerifierInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 *     strstr @ 0x1403D1880 (strstr.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D40 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1409C7E30 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x1409D9800 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x140A6FC9C (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140A6FCE4 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140A938A0 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  int v6; // edi
  int v7; // eax
  const char *v8; // rcx
  LARGE_INTEGER v9; // rdx
  LARGE_INTEGER v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 *QuadPart; // rbx
  unsigned __int64 v17; // rdx
  int v18; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  String2 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  v5 = *(_QWORD *)(v3 + 280);
  v6 = *(_DWORD *)(v3 + 132) & 2;
  v7 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v7;
  if ( (v7 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v7 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  LOBYTE(a3) = 1;
  KiInitializeMutant((ULONG_PTR)&ViDriversLoadLock, 0, a3, 0LL);
  qword_140C1D298 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140C1CBE8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140C1CB78 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_140C2A8DC = VfVerifyMode;
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
  if ( !v6 && v5 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v5 + 56);
    BugCheckParameter1 = *(_QWORD *)(v5 + 64);
    qword_140D4A038 = *(_QWORD *)(v5 + 72);
    *(_OWORD *)&xmmword_140D4A040 = *(_OWORD *)(v5 + 80);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v11 = 1, v6) )
  {
    v11 = 0;
  }
  v8 = *(const char **)(a1 + 216);
  VfClearanceFlag = v11;
  if ( strstr(v8, "SAFEBOOT:") || VfClearanceFlag )
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
    v12 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v12;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v12 >= 3 )
    {
      if ( v12 > 0x200 )
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
                          (LARGE_INTEGER)v10.QuadPart,
                          (LARGE_INTEGER)v9.QuadPart) )
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
    v10.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v13 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v13 )
    {
      v14 = 0x100002601LL;
      do
      {
        v15 = *(unsigned __int16 *)v10.QuadPart;
        if ( (unsigned int)v15 <= 0x20 && _bittest64(&v14, v15) || (_WORD)v15 == 12288 )
        {
          QuadPart = (__int64 *)v10.QuadPart;
        }
        else
        {
          if ( (_DWORD)v15 == 42 )
            goto LABEL_75;
          QuadPart = (__int64 *)(v10.QuadPart + 2);
          if ( (_DWORD)v15 == 34 )
          {
            v10.QuadPart += 2LL;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
            if ( QuadPart >= v13 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v13 );
            if ( QuadPart >= v13 )
              break;
          }
          else
          {
            while ( QuadPart < v13 )
            {
              v17 = *(unsigned __int16 *)QuadPart;
              if ( (unsigned int)v17 <= 0x20 )
              {
                if ( _bittest64(&v14, v17) )
                  break;
              }
              if ( (_WORD)v17 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v18 = 2 * (((__int64)QuadPart - v10.QuadPart) >> 1);
          if ( v18 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v10.QuadPart) >> 1);
            String2.MaximumLength = v18 + 2;
            if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
              break;
            String2.Buffer = (wchar_t *)v10.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v10.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v13 );
    }
  }
  VfInitSystemNoRebootNeeded(v10.QuadPart, 1);
}
