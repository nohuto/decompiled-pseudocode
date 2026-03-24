/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C00ABF70
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     RIMRemoveHoldingFrame @ 0x1C00A6720 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01514B4 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C0169B98 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  PVOID **v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *result; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  PVOID ***v9; // r12
  _QWORD *v10; // rbx
  __int64 *v11; // r13
  const struct RIMDEV *v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  PVOID *v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v26; // [rsp+28h] [rbp-8h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v26 = &v25;
  v25 = &v25;
  while ( v2 != &gObRimDevList )
  {
    v3 = (unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16);
    v4 = *(PVOID ***)(v3 + 0x150);
    if ( v4
      && *((_BYTE *)v4 + 81)
      && (*(_DWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0xB8) & 0x2000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v4 == Object )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 916LL);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) )
      {
        v7 = (_QWORD *)(v3 + 120);
        if ( (_QWORD *)*v7 != v7 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 922LL);
        v8 = v26;
        if ( *v26 != &v25 )
LABEL_47:
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0x80) = v26;
        *v7 = &v25;
        *v8 = v7;
        v26 = (_QWORD **)(v3 + 120);
        *(_DWORD *)(v3 + 200) |= 0x10u;
      }
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = v25;
  while ( 1 )
  {
    result = &v25;
    if ( v5 == &v25 )
      return result;
    v9 = (PVOID ***)(v5 + 27);
    v10 = v5;
    v11 = (__int64 *)v5[27];
    v12 = (const struct RIMDEV *)(v5 - 15);
    RIMLockExclusive((__int64)(v11 + 13));
    v13 = (_QWORD *)*v5;
    v5 = v13;
    if ( (_QWORD *)v13[1] != v10 )
      goto LABEL_47;
    v14 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v14 != v10 )
      goto LABEL_47;
    *v14 = v13;
    v15 = v11 + 53;
    v13[1] = v14;
    v10[1] = v10;
    *v10 = v10;
    while ( 1 )
    {
      v16 = *v15;
      if ( !*v15 )
        break;
      if ( (const struct RIMDEV *)v16 == v12 )
      {
        if ( v10[16] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 950LL);
        *v15 = *(v10 - 10);
        break;
      }
      v15 = (__int64 *)(v16 + 40);
    }
    if ( (v10[8] & 0x200) != 0 )
    {
      v17 = v10 - 2;
      if ( (_QWORD *)*v17 == v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
      v18 = (_QWORD *)*v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_47;
      v19 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_47;
      *v19 = v18;
      v18[1] = v19;
      v17[1] = v17;
      *v17 = v17;
      *((_DWORD *)v10 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v12);
    }
    if ( (*((_DWORD *)v10 + 20) & 0x80u) != 0 )
    {
      v20 = (_QWORD *)(v10[45] + 864LL);
      v21 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 )
        goto LABEL_47;
      v22 = *(_QWORD **)(v10[45] + 872LL);
      if ( (_QWORD *)*v22 != v20 )
        goto LABEL_47;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      v20[1] = v20;
      *v20 = v20;
    }
    RIMRemoveHoldingFrame((__int64)v11, (__int64)v12);
    v11[14] = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v11);
    RIMLockExclusive((__int64)(Object + 13));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 986LL);
    *v9 = Object;
    *(v10 - 10) = Object[53];
    Object[53] = (PVOID *)v12;
    if ( Object[80] || *((_DWORD *)Object + 216) )
      *((_DWORD *)v10 + 16) = v10[8] & 0xFF09FFFF | 0x20000;
    if ( (*((_DWORD *)v10 + 20) & 0x80u) != 0 )
    {
      v23 = Object[55];
      v24 = (_QWORD *)(v10[45] + 864LL);
      if ( *v23 != Object + 54 )
        goto LABEL_47;
      *v24 = Object + 54;
      v24[1] = v23;
      *v23 = v24;
      Object[55] = (PVOID *)v24;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
  }
}
