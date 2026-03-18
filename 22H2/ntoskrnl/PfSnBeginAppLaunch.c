/*
 * XREFs of PfSnBeginAppLaunch @ 0x140760A08
 * Callers:
 *     PfProcessCreateNotification @ 0x140760974 (PfProcessCreateNotification.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097F790 (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PfSnBeginScenario @ 0x1407508D0 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x140752F04 (PfSnLogScenarioDecision.c)
 *     PfSnCheckScenario @ 0x140760C60 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x140761120 (PfCalculateProcessHash.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1407C2AB0 (PfSnCalculateScenarioNameAndHash.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1407E09AC (PfSnAltProfileFindByScenarioId.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(void *a1, PVOID a2, int a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
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
  _BYTE v24[256]; // [rsp+130h] [rbp+30h] BYREF

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
  v7 = PfSnCalculateScenarioNameAndHash(v6, v22, &v21, &v17, &v13, &v15, &v16, &v20, v24, &v14, a1, a2);
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C6A838, 0LL);
  v10 = PfSnAltProfileFindByScenarioId(Str2);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 124);
  else
    v11 = v13;
  HIDWORD(v22[3]) += v11;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6A838, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6A838);
  KeAbPostRelease((ULONG_PTR)&qword_140C6A838);
  KeLeaveCriticalRegion();
  HIDWORD(v22[3]) += a3;
  if ( (dword_140C6A810 & 0x20) != 0 || v18 == 2 )
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
