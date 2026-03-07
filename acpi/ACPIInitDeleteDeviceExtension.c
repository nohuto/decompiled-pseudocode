void __fastcall ACPIInitDeleteDeviceExtension(volatile signed __int32 *Entry)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  volatile signed __int32 *v23; // rdi
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx

  v2 = 0;
  v3 = Entry + 102;
  while ( !*v3 )
  {
    ++v2;
    ++v3;
    if ( v2 > 4 )
      goto LABEL_4;
  }
  if ( (Entry[252] & 0x20000) != 0 || (Entry[2] & 0x800LL) == 0 )
  {
LABEL_4:
    ACPIInitRemovePowerNodes(Entry);
    PnpiCleanupForceActiveBothInterrupts(Entry);
    ACPIInternalInterruptPolarityCacheCleanup(Entry);
    if ( !Entry )
      return;
    while ( 1 )
    {
      v4 = Entry + 204;
      v5 = *((_QWORD *)Entry + 102);
      if ( *(volatile signed __int32 **)(v5 + 8) != Entry + 204 )
        break;
      v6 = (_QWORD *)*((_QWORD *)Entry + 103);
      if ( (_QWORD *)*v6 != v4 )
        break;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)Entry + 103) = Entry + 204;
      *v4 = v4;
      ACPICleanDeviceDependenciesWithTreeLock((__int64)Entry);
      v7 = Entry + 212;
      v8 = *((_QWORD *)Entry + 106);
      if ( *(volatile signed __int32 **)(v8 + 8) != Entry + 212 )
        break;
      v9 = (_QWORD *)*((_QWORD *)Entry + 107);
      if ( (_QWORD *)*v9 != v7 )
        break;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = Entry + 208;
      *((_QWORD *)Entry + 107) = Entry + 212;
      *v7 = v7;
      if ( (_QWORD *)*v10 != v10 )
        ACPIInternalMoveList(v10, &AcpiUnresolvedEjectList);
      v11 = *((_QWORD *)Entry + 1);
      if ( (v11 & 0x80000000000LL) != 0 )
      {
        v12 = (const char *)&unk_1C00622D0;
        v13 = (const char *)&unk_1C00622D0;
        if ( (v11 & 0x200000000000LL) != 0 )
        {
          v12 = (const char *)*((_QWORD *)Entry + 76);
          if ( (v11 & 0x400000000000LL) != 0 )
            v13 = (const char *)*((_QWORD *)Entry + 77);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0xAu,
            (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
            *((_DWORD *)Entry + 190),
            (char)Entry,
            v12,
            v13);
        v14 = *((_QWORD *)Entry + 95);
        if ( v14 )
        {
          AMLIFinalizeObject(v14, 0LL);
          AMLIDereferenceHandleEx(*((_QWORD *)Entry + 95));
          *((_QWORD *)Entry + 95) = 0LL;
        }
      }
      if ( _bittest64((const signed __int64 *)Entry + 1, 0x2Du) )
      {
        v15 = (void *)*((_QWORD *)Entry + 76);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
      }
      if ( _bittest64((const signed __int64 *)Entry + 1, 0x2Eu) )
      {
        v16 = (void *)*((_QWORD *)Entry + 77);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      v17 = (void *)*((_QWORD *)Entry + 84);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      v18 = (void *)*((_QWORD *)Entry + 85);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      v19 = (void *)*((_QWORD *)Entry + 86);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      if ( *((__int64 *)Entry + 1) < 0 )
      {
        v20 = (void *)*((_QWORD *)Entry + 23);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
      }
      if ( (Entry[2] & 0x8000000) != 0 )
      {
        v21 = (void *)*((_QWORD *)Entry + 25);
        if ( v21 )
        {
          ExFreePoolWithTag(v21, 0x54706341u);
          *((_QWORD *)Entry + 25) = 0LL;
        }
      }
      v22 = (void *)*((_QWORD *)Entry + 116);
      if ( v22 )
        ExFreePoolWithTag(v22, 0x4D706341u);
      v23 = (volatile signed __int32 *)*((_QWORD *)Entry + 99);
      ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)Entry);
      if ( !v23 || _InterlockedExchangeAdd(v23 + 183, 0xFFFFFFFF) != 1 )
        return;
      Entry = v23;
    }
LABEL_47:
    __fastfail(3u);
  }
  ACPIInitReferenceDeviceExtension(Entry);
  v25 = Entry + 220;
  *((_DWORD *)Entry + 224) = *(_DWORD *)(**((_QWORD **)Entry + 95) + 40LL);
  v26 = (_QWORD *)qword_1C006F268;
  if ( *(__int64 **)qword_1C006F268 != &AcpiDevicesWhichMightNeedEnumerationList )
    goto LABEL_47;
  *v25 = &AcpiDevicesWhichMightNeedEnumerationList;
  *((_QWORD *)Entry + 111) = v26;
  *v26 = v25;
  qword_1C006F268 = (__int64)(Entry + 220);
  _InterlockedOr64((volatile signed __int64 *)Entry + 126, v24);
}
