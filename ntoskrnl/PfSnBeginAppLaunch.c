/*
 * XREFs of PfSnBeginAppLaunch @ 0x1407E6D34
 * Callers:
 *     PfProcessCreateNotification @ 0x1407E6CA0 (PfProcessCreateNotification.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097C6E0 (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfSnLogScenarioDecision @ 0x1406BE5DC (PfSnLogScenarioDecision.c)
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1407E4DC0 (PfSnCalculateScenarioNameAndHash.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1407E50B0 (PfSnAltProfileFindByScenarioId.c)
 *     PfSnCheckScenario @ 0x1407E6F8C (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x1407E7450 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(void *a1, _OWORD *a2, int a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r9d
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int128 v21; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v22[4]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 v24[256]; // [rsp+130h] [rbp+30h] BYREF

  v18 = 0;
  v17 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v21 = 0LL;
  memset(Str2, 0, 0x44uLL);
  P = 0LL;
  memset(v22, 0, sizeof(v22));
  v14 = 0;
  v7 = PfSnCheckScenario(0LL, &v18);
  if ( v7 < 0 )
    goto LABEL_2;
  if ( !a2 )
  {
    v7 = PfCalculateProcessHash(a1, &P);
    if ( v7 < 0 )
      goto LABEL_2;
    a2 = P;
  }
  v20 = 256LL;
  v7 = PfSnCalculateScenarioNameAndHash(
         v6,
         v22,
         (__int64)&v21,
         &v17,
         (__int64)&v13,
         (__int64)&v15,
         &v16,
         &v20,
         v24,
         &v14,
         (__int64)a1,
         a2);
  if ( v7 < 0 )
  {
LABEL_2:
    PfSnLogScenarioDecision((ULONG_PTR)a1, (const size_t *)v22, 0, 0, 15, 15, v7, -1LL);
    goto LABEL_3;
  }
  HIDWORD(v22[3]) = v17 + v15 + v16;
  *(_OWORD *)Str2 = v22[0];
  *(_OWORD *)&Str2[8] = v22[1];
  *(_OWORD *)&Str2[24] = v22[3];
  *(_OWORD *)&Str2[16] = v22[2];
  *(_DWORD *)&Str2[32] = v13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C6A3B8, 0LL);
  v10 = PfSnAltProfileFindByScenarioId(Str2);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 124);
  else
    v11 = v13;
  HIDWORD(v22[3]) += v11;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6A3B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6A3B8);
  KeAbPostRelease((ULONG_PTR)&qword_140C6A3B8);
  KeLeaveCriticalRegion();
  HIDWORD(v22[3]) += a3;
  if ( (dword_140C6A390 & 0x20) != 0 || v18 == 2 )
    v12 = v14 | 2;
  else
    v12 = v14;
  v7 = PfSnBeginScenario(a1, (unsigned __int8 *)v22, 0, v12, (const void **)&v21);
  if ( v7 >= 0 )
    v7 = 0;
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
