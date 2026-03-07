void __fastcall ACPIDeviceCompleteRequest(_QWORD *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  void (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  _QWORD **v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  _QWORD **v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  int v22; // eax
  KIRQL v23; // si
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // ecx
  KIRQL v28; // al
  _QWORD *v29; // rdx
  KIRQL v30; // r8
  PVOID *v31; // rcx
  _QWORD **v32; // rdx
  PVOID *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx

  v1 = Entry[5];
  v2 = (const char *)&unk_1C00622D0;
  v3 = (void (__fastcall *)(__int64, _QWORD, _QWORD))Entry[24];
  v4 = 0;
  v6 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x12u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      (char)Entry,
      *((_DWORD *)Entry + 64),
      v4,
      v2,
      v6);
  if ( (Entry[6] & 0xFFFFFFFD) == 0 )
  {
    v8 = (_QWORD **)(Entry + 8);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v10 = v9 - 2;
      v11 = *(v9 - 2);
      if ( *(_QWORD **)(v11 + 8) != v9 - 2 )
        goto LABEL_47;
      v12 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v12 != v10 )
        goto LABEL_47;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v10[1] = v10;
      *v10 = v10;
      v13 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_47;
      v14 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v14 != v9 )
        goto LABEL_47;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v9[1] = v9;
      *v9 = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v10);
    }
    v15 = (_QWORD **)(Entry + 10);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 == v15 )
        break;
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_47;
      v18 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v18 != v16 )
        goto LABEL_47;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = v16 + 2;
      v16[1] = v16;
      *v16 = v16;
      v20 = v16[2];
      if ( *(_QWORD **)(v20 + 8) != v16 + 2 )
        goto LABEL_47;
      v21 = (_QWORD *)v16[3];
      if ( (_QWORD *)*v21 != v19 )
        goto LABEL_47;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v16[3] = v16 + 2;
      *v19 = v19;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v16);
    }
    v22 = *(_DWORD *)(v1 + 384);
    if ( v22 )
    {
      if ( !*((_BYTE *)Entry + 52) && *((int *)Entry + 64) < 0 )
      {
        v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        Entry[13] = *(unsigned int *)(v1 + 384);
        *((_BYTE *)Entry + 52) = 1;
        v24 = *Entry;
        if ( *(_QWORD **)(*Entry + 8LL) == Entry )
        {
          v25 = (_QWORD *)Entry[1];
          if ( (_QWORD *)*v25 == Entry )
          {
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            v26 = (_QWORD *)qword_1C006F1A8;
            if ( *(__int64 **)qword_1C006F1A8 == &AcpiPowerQueueList )
            {
              *Entry = &AcpiPowerQueueList;
              Entry[1] = v26;
              *v26 = Entry;
              qword_1C006F1A8 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v23);
              return;
            }
          }
        }
LABEL_47:
        __fastfail(3u);
      }
      if ( v22 < *((_DWORD *)Entry + 26) )
        *((_DWORD *)Entry + 64) = 0;
    }
    v27 = *((_DWORD *)Entry + 14);
    if ( (v27 & 0x2000000) != 0 )
    {
      *((_DWORD *)Entry + 14) = v27 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( v3 )
    v3(v1, Entry[25], *((unsigned int *)Entry + 64));
  v28 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v29 = (_QWORD *)*Entry;
  v30 = v28;
  if ( *(_QWORD **)(*Entry + 8LL) != Entry )
    goto LABEL_47;
  v31 = (PVOID *)Entry[1];
  if ( *v31 != Entry )
    goto LABEL_47;
  *v31 = v29;
  v29[1] = v31;
  v32 = (_QWORD **)Entry[2];
  if ( v32[1] != Entry + 2 )
    goto LABEL_47;
  v33 = (PVOID *)Entry[3];
  if ( *v33 != Entry + 2 )
    goto LABEL_47;
  *v33 = v32;
  v32[1] = v33;
  if ( *((_DWORD *)Entry + 12) != 4 )
  {
    v34 = *(_QWORD *)(v1 + 584);
    if ( v34 == v1 + 584 )
    {
      *(_QWORD *)(v1 + 576) = 0LL;
    }
    else
    {
      v35 = (_QWORD *)(v34 - 16);
      v36 = (_QWORD *)qword_1C006F1A8;
      if ( *(__int64 **)qword_1C006F1A8 != &AcpiPowerQueueList )
        goto LABEL_47;
      *v35 = &AcpiPowerQueueList;
      v35[1] = v36;
      *v36 = v35;
      qword_1C006F1A8 = (__int64)v35;
      *(_QWORD *)(v1 + 576) = v35;
    }
  }
  KeReleaseSpinLock(&AcpiPowerQueueLock, v30);
  if ( *((_DWORD *)Entry + 12) == 2 )
    ACPIDereferenceWaitWakePowerRequest(Entry);
  else
    ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
