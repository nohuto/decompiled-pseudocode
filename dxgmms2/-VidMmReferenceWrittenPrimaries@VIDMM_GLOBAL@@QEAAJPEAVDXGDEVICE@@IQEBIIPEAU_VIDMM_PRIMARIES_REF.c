__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *const a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // edi
  struct DXGPROCESS *v10; // r15
  unsigned int v11; // esi
  struct VIDSCH_HW_QUEUE *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // r13
  int v18; // ecx
  __int64 v19; // r13
  volatile signed __int32 *v20; // r9
  __int64 v21; // r11
  unsigned int v22; // r8d
  bool v23; // cl
  bool v24; // al
  bool v25; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // r9d
  __int64 v30; // rcx
  struct VIDSCH_HW_QUEUE *v34; // [rsp+C0h] [rbp+38h]

  Current = DXGPROCESS::GetCurrent();
  v9 = 0;
  v10 = Current;
  v11 = 0;
  v12 = (struct DXGPROCESS *)((char *)Current + 248);
  v34 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(v28, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *((_DWORD *)v12 + 6);
      if ( v29 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v29);
    }
    ExAcquirePushLockSharedEx(v12, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
  v15 = 0;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_20;
  while ( 1 )
  {
    v16 = (*a4 >> 6) & 0xFFFFFF;
    if ( v16 >= *((_DWORD *)v10 + 74) )
      goto LABEL_22;
    v17 = *((_QWORD *)v10 + 35) + 16LL * v16;
    if ( ((*a4 >> 25) & 0x60) != (*(_BYTE *)(v17 + 8) & 0x60) )
      goto LABEL_22;
    if ( (*(_DWORD *)(v17 + 8) & 0x2000) != 0 )
      goto LABEL_22;
    v18 = *(_DWORD *)(v17 + 8) & 0x1F;
    if ( !v18 )
      goto LABEL_22;
    if ( v18 != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
LABEL_22:
      WdLogSingleEntry1(2LL, 22955LL);
LABEL_23:
      v11 = -1073741811;
      goto LABEL_34;
    }
    v19 = *(_QWORD *)v17;
    if ( !v19 )
      goto LABEL_22;
    if ( *(struct DXGDEVICE **)(v19 + 8) != a2 )
    {
      WdLogSingleEntry2(1LL, *(_QWORD *)(v19 + 8), a2);
      DxgkLogInternalTriageEvent(v30, 0x40000LL);
      goto LABEL_23;
    }
    v20 = *(volatile signed __int32 **)(v19 + 24);
    v21 = **(_QWORD **)v20;
    v22 = **(_DWORD **)(v21 + 536);
    v23 = ((v22 >> 12) | (v22 | ((v22 | (v22 >> 5)) >> 6)) & 0x80000) >= 0x80000;
    v24 = (v22 & 0x200000) != 0;
    v25 = (v22 & 0x100000) != 0;
    if ( v24 )
      break;
    if ( v23 )
      goto LABEL_15;
    if ( !v25 )
    {
      WdLogSingleEntry1(2LL, 22987LL);
      goto LABEL_23;
    }
LABEL_19:
    ++v15;
    ++a4;
    if ( v15 >= a3 )
      goto LABEL_20;
  }
  *((_DWORD *)a6 + 34) |= 1u;
  if ( !v23 )
    goto LABEL_19;
LABEL_15:
  if ( !*(_BYTE *)(v21 + 81) )
  {
    _InterlockedExchangeAdd(v20 + 26, a5);
    *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v20;
    if ( *(_DWORD *)a6 >= 0x10u )
      ++*((_DWORD *)this + 1808);
    ++*(_DWORD *)a6;
    goto LABEL_19;
  }
  WdLogSingleEntry0(3LL);
  v11 = -1071775482;
LABEL_34:
  if ( *(_DWORD *)a6 )
  {
    do
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a6 + ++v9) + 104LL), -a5);
    while ( v9 < *(_DWORD *)a6 );
    v12 = v34;
  }
LABEL_20:
  _InterlockedDecrement((volatile signed __int32 *)v12 + 4);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
