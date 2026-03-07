_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD **v13; // r15
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  _QWORD *result; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  PVOID ***v21; // r12
  _QWORD *v22; // rbx
  __int64 *v23; // r13
  const struct RIMDEV *v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  __int64 *v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rdx
  PVOID *v35; // r8
  _QWORD *v36; // rax
  _QWORD *v37; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v38; // [rsp+28h] [rbp-8h]

  v5 = SGDGetUserSessionState(Object, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v13 = (_QWORD **)(SGDGetUserSessionState(v7, v6, v8, v9) + 320);
  v14 = *v13;
  v38 = &v37;
  v37 = &v37;
  while ( v14 != v13 )
  {
    v15 = (unsigned __int64)(v14 + 7) & -(__int64)(v14 != (_QWORD *)16);
    v10 = *(PVOID ***)(v15 + 0x150);
    if ( v10
      && *((_BYTE *)v10 + 81)
      && (*(_DWORD *)(((unsigned __int64)(v14 + 7) & -(__int64)(v14 != (_QWORD *)16)) + 0xB8) & 0x2000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v14 + 7) & -(__int64)(v14 != (_QWORD *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v10 == Object )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 999LL);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v14 + 7) & -(__int64)(v14 != (_QWORD *)16)) )
      {
        v19 = (_QWORD *)(v15 + 120);
        if ( (_QWORD *)*v19 != v19 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1005LL);
        v20 = v38;
        if ( *v38 != &v37 )
LABEL_48:
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v14 + 7) & -(__int64)(v14 != (_QWORD *)16)) + 0x80) = v38;
        v10 = (PVOID **)&v37;
        *v19 = &v37;
        *v20 = v19;
        v38 = (_QWORD **)(v15 + 120);
        *(_DWORD *)(v15 + 200) |= 0x10u;
      }
    }
    v14 = (_QWORD *)*v14;
  }
  v16 = SGDGetUserSessionState(v10, 2LL, v11, v12);
  *(_QWORD *)(v16 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v16 + 240, 0LL);
  KeLeaveCriticalRegion();
  v17 = v37;
  while ( 1 )
  {
    result = &v37;
    if ( v17 == &v37 )
      return result;
    v21 = (PVOID ***)(v17 + 27);
    v22 = v17;
    v23 = (__int64 *)v17[27];
    v24 = (const struct RIMDEV *)(v17 - 15);
    RIMLockExclusive(v23 + 13);
    v25 = (_QWORD *)*v17;
    v17 = v25;
    if ( (_QWORD *)v25[1] != v22 )
      goto LABEL_48;
    v26 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v26 != v22 )
      goto LABEL_48;
    *v26 = v25;
    v27 = v23 + 53;
    v25[1] = v26;
    v22[1] = v22;
    *v22 = v22;
    while ( 1 )
    {
      v28 = *v27;
      if ( !*v27 )
        break;
      if ( (const struct RIMDEV *)v28 == v24 )
      {
        if ( v22[16] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1033LL);
        *v27 = *(v22 - 10);
        break;
      }
      v27 = (__int64 *)(v28 + 40);
    }
    if ( (v22[8] & 0x200) != 0 )
    {
      v29 = v22 - 2;
      if ( (_QWORD *)*v29 == v29 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1042LL);
      v30 = (_QWORD *)*v29;
      if ( *(_QWORD **)(*v29 + 8LL) != v29 )
        goto LABEL_48;
      v31 = (_QWORD *)v29[1];
      if ( (_QWORD *)*v31 != v29 )
        goto LABEL_48;
      *v31 = v30;
      v30[1] = v31;
      v29[1] = v29;
      *v29 = v29;
      *((_DWORD *)v22 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v24);
    }
    if ( (*((_DWORD *)v22 + 20) & 0x80u) != 0 )
    {
      v32 = (_QWORD *)(v22[44] + 912LL);
      v33 = *v32;
      if ( *(_QWORD **)(*v32 + 8LL) != v32 )
        goto LABEL_48;
      v34 = *(_QWORD **)(v22[44] + 920LL);
      if ( (_QWORD *)*v34 != v32 )
        goto LABEL_48;
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      v32[1] = v32;
      *v32 = v32;
    }
    RIMRemoveHoldingFrame(v23, v24);
    v23[14] = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v23);
    RIMLockExclusive(Object + 13);
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1069LL);
    *v21 = Object;
    *(v22 - 10) = Object[53];
    Object[53] = (PVOID *)v24;
    if ( Object[104] || *((_DWORD *)Object + 264) )
      *((_DWORD *)v22 + 16) = v22[8] & 0xFC27FFFF | 0x80000;
    if ( (*((_DWORD *)v22 + 20) & 0x80u) != 0 )
    {
      v35 = Object[55];
      v36 = (_QWORD *)(v22[44] + 912LL);
      if ( *v35 != Object + 54 )
        goto LABEL_48;
      *v36 = Object + 54;
      v36[1] = v35;
      *v35 = v36;
      Object[55] = (PVOID *)v36;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
  }
}
