/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C005EB24
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C017E584 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C019E1C4 (RIMIDEIsCompatibleDevice.c)
 *     RIMRemoveHoldingFrame @ 0x1C01A6A7C (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 *v4; // rsi
  __int64 v5; // rbx
  PVOID **v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *result; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  PVOID ***v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14; // r15
  const struct RIMDEV *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  PVOID *v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v34; // [rsp+28h] [rbp-30h]

  RIMLockExclusive((__int64)&gObListLock);
  v4 = (__int64 *)gObRimDevList;
  v34 = &v33;
  v33 = &v33;
  while ( v4 != &gObRimDevList )
  {
    v5 = (unsigned __int64)(v4 + 9) & -(__int64)(v4 != (__int64 *)16);
    v6 = *(PVOID ***)(v5 + 0x150);
    if ( v6
      && *((_BYTE *)v6 + 81)
      && (*(_DWORD *)(((unsigned __int64)(v4 + 9) & -(__int64)(v4 != (__int64 *)16)) + 0xB8) & 0x2000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v4 + 9) & -(__int64)(v4 != (__int64 *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v6 == Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v2, v3);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v4 + 9) & -(__int64)(v4 != (__int64 *)16)) )
      {
        v10 = (_QWORD *)(v5 + 120);
        if ( (_QWORD *)*v10 != v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v2, v3);
        v11 = v34;
        if ( *v34 != &v33 )
LABEL_47:
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v4 + 9) & -(__int64)(v4 != (__int64 *)16)) + 0x80) = v34;
        *v10 = &v33;
        *v11 = v10;
        v34 = (_QWORD **)(v5 + 120);
        *(_DWORD *)(v5 + 200) |= 0x10u;
      }
    }
    v4 = (__int64 *)*v4;
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v33;
  while ( 1 )
  {
    result = &v33;
    if ( v7 == &v33 )
      return result;
    v12 = (PVOID ***)(v7 + 27);
    v13 = v7;
    v14 = (__int64 *)v7[27];
    v15 = (const struct RIMDEV *)(v7 - 15);
    RIMLockExclusive((__int64)(v14 + 13));
    v18 = (_QWORD *)*v7;
    v7 = v18;
    if ( (_QWORD *)v18[1] != v13 )
      goto LABEL_47;
    v19 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v19 != v13 )
      goto LABEL_47;
    *v19 = v18;
    v20 = v14 + 53;
    v18[1] = v19;
    v13[1] = v13;
    *v13 = v13;
    while ( 1 )
    {
      v21 = *v20;
      if ( !*v20 )
        break;
      if ( (const struct RIMDEV *)v21 == v15 )
      {
        if ( v13[16] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v17);
        *v20 = *(v13 - 10);
        break;
      }
      v20 = (__int64 *)(v21 + 40);
    }
    if ( (v13[8] & 0x200) != 0 )
    {
      v22 = v13 - 2;
      if ( (_QWORD *)*v22 == v22 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v17);
      v23 = (_QWORD *)*v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
        goto LABEL_47;
      v24 = (_QWORD *)v22[1];
      if ( (_QWORD *)*v24 != v22 )
        goto LABEL_47;
      *v24 = v23;
      v23[1] = v24;
      v22[1] = v22;
      *v22 = v22;
      *((_DWORD *)v13 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v15);
    }
    if ( (*((_DWORD *)v13 + 20) & 0x80u) != 0 )
    {
      v25 = (_QWORD *)(v13[44] + 912LL);
      v26 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_47;
      v27 = *(_QWORD **)(v13[44] + 920LL);
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_47;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v25[1] = v25;
      *v25 = v25;
    }
    RIMRemoveHoldingFrame(v14, v15);
    v14[14] = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v14);
    RIMLockExclusive((__int64)(Object + 13));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    *v12 = Object;
    *(v13 - 10) = Object[53];
    Object[53] = (PVOID *)v15;
    if ( Object[108] || *((_DWORD *)Object + 272) )
      *((_DWORD *)v13 + 16) = v13[8] & 0xFC27FFFF | 0x80000;
    if ( (*((_DWORD *)v13 + 20) & 0x80u) != 0 )
    {
      v31 = Object[55];
      v32 = (_QWORD *)(v13[44] + 912LL);
      if ( *v31 != Object + 54 )
        goto LABEL_47;
      *v32 = Object + 54;
      v32[1] = v31;
      *v31 = v32;
      Object[55] = (PVOID *)v32;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
  }
}
