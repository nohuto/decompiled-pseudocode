/*
 * XREFs of PopHiberCheckResume @ 0x140998890
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140406DC0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx2 @ 0x140383AC0 (MmMapMemoryDumpMdlEx2.c)
 *     HalInitializeOnResume @ 0x14038C4A0 (HalInitializeOnResume.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404F146C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x1404F1AE0 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F59C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F7B68 (HvlNotifyAcpiReenabled.c)
 *     PopCheckpointSystemSleep @ 0x140993C64 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  _OWORD v14[20]; // [rsp+20h] [rbp-158h] BYREF

  memset(v14, 0, 0x138uLL);
  v0 = qword_140C23A80;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140C23A80 + 200);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25);
    ((void (__fastcall *)(_QWORD))off_140C00838[0])(0LL);
    PoResumeFromHibernate = 1;
    v3 = __rdtsc();
    ((void (__fastcall *)(__int64))off_140C006C0[0])(5LL);
    ((void (__fastcall *)(__int64))off_140C00838[0])(1LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      off_140C007A8[0]();
    }
    ((void (__fastcall *)(__int64))off_140C007C0)(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    if ( *(_QWORD *)(v2 + 928) )
    {
      v10 = *(_QWORD *)(v0 + 264);
      v11 = *(_OWORD *)(v2 + 928);
      DWORD2(v14[0]) = 80;
      v12 = *(_OWORD *)(v2 + 944);
      v13 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)&v14[2] = 0LL;
      *((_QWORD *)&v14[2] + 1) = 0x4000LL;
      v14[3] = v11;
      v14[4] = v12;
      MmMapMemoryDumpMdlEx2(v13, v4, (__int64)v14, 1);
      memset(*(void **)(*(_QWORD *)(v0 + 264) + 8LL), 0, 0x4000uLL);
    }
    v5 = &qword_140C23F98;
    v6 = 3LL;
    qword_140C197B8 = *(_QWORD *)(v2 + 904);
    v7 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v5 = *v7;
      *((_OWORD *)v5 + 1) = v7[1];
      *((_OWORD *)v5 + 2) = v7[2];
      *((_OWORD *)v5 + 3) = v7[3];
      *((_OWORD *)v5 + 4) = v7[4];
      *((_OWORD *)v5 + 5) = v7[5];
      *((_OWORD *)v5 + 6) = v7[6];
      v5 += 16;
      v8 = v7[7];
      v7 += 8;
      *((_OWORD *)v5 - 1) = v8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *v7;
    *((_OWORD *)v5 + 1) = v7[1];
    *((_OWORD *)v5 + 2) = v7[2];
    *((_OWORD *)v5 + 3) = v7[3];
    *((_OWORD *)v5 + 4) = v7[4];
    *((_OWORD *)v5 + 5) = v7[5];
    *((_OWORD *)v5 + 6) = v7[6];
    v5[14] = *((_QWORD *)v7 + 14);
    *(_BYTE *)(v0 + 4) = 0;
    qword_140C24068 = v3;
    qword_140C23FF8 = v3 - qword_140C24000;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
