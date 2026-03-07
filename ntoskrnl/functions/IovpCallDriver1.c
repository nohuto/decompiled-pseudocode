int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // eax
  int v8; // ecx
  unsigned __int8 *v9; // r12
  int v10; // r9d
  unsigned int ShouldForce; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  int v23; // r8d
  _DWORD *v24; // rax
  int IsNewRequest; // eax
  char v26; // dl
  int v27; // eax
  __int64 v28; // rdi
  bool v29; // zf
  _QWORD *v30; // rbx
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  void *v36; // rax
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  const void *v41; // [rsp+28h] [rbp-41h]
  __int64 v42; // [rsp+40h] [rbp-29h] BYREF
  __int64 v43; // [rsp+48h] [rbp-21h]
  _DWORD *v44; // [rsp+50h] [rbp-19h]
  __int64 v45; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v46; // [rsp+60h] [rbp-9h]
  PVOID Object; // [rsp+68h] [rbp-1h]
  __int64 started; // [rsp+70h] [rbp+7h]
  int v49; // [rsp+D0h] [rbp+67h]
  int v50; // [rsp+D8h] [rbp+6Fh] BYREF
  int v51; // [rsp+E0h] [rbp+77h]
  const void *v52; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 168);
  v45 = 0LL;
  v42 = 0LL;
  v50 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0LL;
  LODWORD(v5) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( !(_DWORD)v5 )
  {
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v4 = v6;
      v7 = *(_DWORD *)(v1 + 16);
      if ( !v6 )
      {
        LODWORD(v5) = v7 | 0x80000000;
        *(_DWORD *)(v1 + 16) = v5;
        return v5;
      }
      *(_DWORD *)(v1 + 16) = v7 | 0x40000000;
    }
LABEL_10:
    v8 = *(_DWORD *)(v4 + 232);
    *(_BYTE *)(v4 + 61) = CurrentIrql;
    *(_BYTE *)(v4 + 60) = CurrentIrql;
    v41 = *(const void **)(a1 + 176);
    v9 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
    v10 = *(_DWORD *)(v1 + 184) - 72;
    started = 0LL;
    v52 = v41;
    ShouldForce = VfPendingShouldForce(v8, CurrentIrql, v1, v10, v4, (__int64)v41);
    v12 = *(_QWORD *)(v4 + 240);
    v13 = ShouldForce;
    v14 = *(PVOID *)(a1 + 160);
    v51 = ShouldForce;
    v43 = v12;
    Object = v14;
    if ( v12 )
    {
      v44 = (_DWORD *)(v6 + 56);
    }
    else
    {
      v15 = *(_DWORD *)(v4 + 56);
      v44 = (_DWORD *)(v4 + 56);
      if ( (v15 & 1) == 0 )
      {
        v49 = 1;
        *(_DWORD *)(v4 + 56) = v15 | 1;
        v16 = IovpSessionDataCreate(v14, v4, v13);
        v17 = 1;
        v12 = v16;
        v43 = v16;
LABEL_16:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 16) = v4;
        if ( v12 )
        {
          v18 = MEMORY[0xFFFFF78000000014];
          if ( v17 )
          {
            BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
            VfIrpLogRecordEvent(*(unsigned int *)(v4 + 232), BottomDeviceObjectWithTag, v1);
            ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
            v20 = v43;
            ++*(_DWORD *)(v4 + 24);
            v46 = (_DWORD *)(v4 + 24);
            IovpSessionDataReference(v20);
            v14 = Object;
          }
          else
          {
            v46 = (_DWORD *)(v6 + 24);
          }
          if ( *(_QWORD *)(v1 + 104) )
          {
            ViErrorReport1(0x203u, v52, (const void *)v1);
            *(_QWORD *)(v1 + 104) = 0LL;
          }
          if ( (*v44 & 0x10) != 0 )
            ViErrorReport1(0x205u, v52, (const void *)v1);
          if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
            && (unsigned __int8)(*v9 - 3) <= 1u
            && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
            && (MmVerifierData & 0x6000) != 0 )
          {
            MdlInvariantPreProcessing1(a1, v4, (__int64)v9);
          }
          v21 = IovpExamineDevObjForwarding(v14, *(_QWORD *)(v43 + 48));
          v22 = v43;
          *(_DWORD *)(v43 + 56) = v21;
          IovpExamineIrpStackForwarding(v4, v49, v23, v1, (__int64)v52, (__int64)v9, (__int64)&v42, (__int64)&v50);
          if ( v51 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
            v24 = v46;
            *(_QWORD *)(v4 + 216) = v9;
            ++*v24;
            started = VfPendingStartLogging(v1);
          }
          IsNewRequest = VfMajorIsNewRequest(v42, v9);
          v26 = *(_BYTE *)(v1 + 67);
          v51 = IsNewRequest;
          v27 = IovpAdvanceStackDownwards(v22 + 80, v26, (__int64)v9, v42, v50, IsNewRequest, 1, &v45);
          v28 = v45;
          *(_QWORD *)(v45 + 48) = v18;
          if ( !v27 )
          {
            *(_DWORD *)(a1 + 24) |= 0x4000000u;
            v29 = v51 == 0;
            *(_QWORD *)(a1 + 40) = a1 + 32;
            *(_QWORD *)(a1 + 32) = a1 + 32;
            *(_QWORD *)(v28 + 56) = v18;
            v28 = v45;
            *(_QWORD *)(v45 + 112) = KeGetCurrentThread();
            if ( !v29 )
            {
              *(_OWORD *)(v28 + 80) = *(_OWORD *)(v1 + 48);
              *(_OWORD *)(v28 + 96) = *(_OWORD *)(v1 + 48);
              if ( v49 )
                *(_DWORD *)(v28 + 4) |= 0x8000000u;
            }
          }
          v30 = Object;
          LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(Object);
          if ( LowerDeviceObjectWithTag )
            ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
          else
            *(_DWORD *)(v28 + 4) |= 0x10000000u;
          *(_QWORD *)(v28 + 40) = VfGetPristineDispatchRoutine(v30[1], *v9);
          v32 = (_QWORD *)(a1 + 32);
          *(_DWORD *)(v28 + 4) &= ~0x40000000u;
          v33 = (_QWORD *)(v28 + 16);
          v34 = *(_QWORD *)(v28 + 16);
          if ( *(_QWORD *)(v34 + 8) != v28 + 16 )
            __fastfail(3u);
          *v32 = v34;
          *(_QWORD *)(a1 + 40) = v33;
          *(_QWORD *)(v34 + 8) = v32;
          *v33 = v32;
          *(_QWORD *)(a1 + 8) = v28;
          *(_QWORD *)(a1 + 72) = v1;
          v35 = *(_QWORD *)(v1 + 184);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)(v35 - 72);
          *(_OWORD *)(a1 + 96) = *(_OWORD *)(v35 - 56);
          *(_OWORD *)(a1 + 112) = *(_OWORD *)(v35 - 40);
          *(_OWORD *)(a1 + 128) = *(_OWORD *)(v35 - 24);
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(v35 - 8);
          if ( (v9[3] & 1) != 0 )
            *(_DWORD *)(a1 + 24) |= 0x1000000u;
          if ( *v9 == 27 && v9[1] == 2 )
          {
            *(_DWORD *)(a1 + 24) |= 0x20000000u;
            v36 = (void *)IovUtilGetBottomDeviceObjectWithTag(v30);
            *(_QWORD *)(a1 + 64) = v36;
            ObfDereferenceObjectWithTag(v36, 0x49667256u);
            if ( (unsigned int)IovUtilIsInFdoStack(v30) && !(unsigned int)IovUtilIsDeviceObjectMarked(v30, 3LL) )
              *(_DWORD *)(a1 + 24) |= 0x10000000u;
            VfDevObjMarkDeviceRemoved(v30);
          }
          if ( v49 )
            VfMajorVerifyNewIrp(v4, v1, (_DWORD)v9, v28, (__int64)v52);
          if ( v51 && (*v44 & 0x80000) == 0 )
            VfMajorVerifyNewRequest(v4, (_DWORD)v30, v42, (_DWORD)v9, v28, (__int64)v52);
          VfMajorVerifyIrpStackDownward(v4, (_DWORD)v30, v42, (_DWORD)v9, v28, (__int64)v52);
          v37 = v43;
          *(_QWORD *)(v43 + 48) = v30;
          *(_BYTE *)(v4 + 186) = *(_BYTE *)(v1 + 67);
          *(_OWORD *)(*(_QWORD *)(v28 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
          v38 = *(_BYTE *)(v1 + 67);
          if ( v38 > 2 )
          {
            v39 = *(_QWORD *)(v1 + 184);
            *(_BYTE *)(v1 + 67) = v38 - 1;
            *(_QWORD *)(v1 + 184) = v39 - 72;
            *(_BYTE *)(v39 - 141) |= 0x10u;
            ++*(_BYTE *)(v1 + 67);
            *(_QWORD *)(v1 + 184) += 72LL;
          }
          IovpSessionDataReference(v37);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
          if ( VfWdCancelTimeoutTicks )
            ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v4 + 248);
        }
        VfIrpDatabaseEntryReleaseLock(v4);
        LODWORD(v5) = started;
        if ( started )
          LODWORD(v5) = VfPendingFinishLogging(started);
        return v5;
      }
      v44 = (_DWORD *)(v4 + 56);
    }
    v17 = 0;
    v49 = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 == 0x40000000 )
  {
    v5 = VfIrpDatabaseEntryFindAndLock(v1);
    v4 = v5;
  }
  v6 = v4;
  if ( v4 )
    goto LABEL_10;
  return v5;
}
