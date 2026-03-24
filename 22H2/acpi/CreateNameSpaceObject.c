/*
 * XREFs of CreateNameSpaceObject @ 0x1C0006720
 * Callers:
 *     Name @ 0x1C0003DD0 (Name.c)
 *     Mutex @ 0x1C0010280 (Mutex.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     Device @ 0x1C0022980 (Device.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022FC4 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0023220 (Alias.c)
 *     Processor @ 0x1C0023330 (Processor.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     PowerRes @ 0x1C0023BB0 (PowerRes.c)
 *     ThermalZone @ 0x1C00251A0 (ThermalZone.c)
 *     Method @ 0x1C0028A20 (Method.c)
 *     CreateXField @ 0x1C00291A8 (CreateXField.c)
 *     OpRegion @ 0x1C0029EA0 (OpRegion.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0064348 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064824 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C006498C (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064B00 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     Event @ 0x1C0067310 (Event.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C06CC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     NewNameSpaceObject @ 0x1C002BD38 (NewNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     InsertOwnerObjList @ 0x1C002D368 (InsertOwnerObjList.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063CF0 (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        _QWORD *a5,
        int a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v9; // rsi
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ebp
  _QWORD *v12; // r12
  size_t v13; // rbx
  char *PoolWithTag; // r15
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rbx
  char *v20; // rax
  char *v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rcx
  KIRQL v26; // bl
  _QWORD *v27; // rdx
  KIRQL v28; // dl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 i; // rax
  KIRQL v32; // [rsp+30h] [rbp-108h]
  __int64 v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  v7 = a1;
  v35 = a3;
  v9 = a3;
  v10 = a2;
  v11 = 0;
  v12 = 0LL;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 + 1 >= 0x80 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      PoolWithTag = Str;
    }
    memmove(PoolWithTag, v10, v13);
    PoolWithTag[v13] = 0;
    v10 = (unsigned __int8 *)PoolWithTag;
    v7 = a1;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !v9 )
  {
    v9 = gpnsNameSpaceRoot;
    v35 = gpnsNameSpaceRoot;
  }
  if ( !v10 )
  {
    v33 = NewNameSpaceObject(v7);
    v12 = (_QWORD *)v33;
    if ( !v33 )
    {
      v11 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_39;
    }
    v26 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v33 + 16) = v9;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
      v12 = (_QWORD *)v33;
    }
    InsertOwnerObjList(a4, v12);
    v27 = *(_QWORD **)(v9 + 32);
    if ( *v27 != v9 + 24 )
      goto LABEL_82;
    v12[1] = v27;
    *v12 = v9 + 24;
    *v27 = v12;
    v28 = v26;
    *(_QWORD *)(v9 + 32) = v12;
LABEL_52:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
    goto LABEL_37;
  }
  v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( !*v10 )
    goto LABEL_14;
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v10);
  v11 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      v11 = -1073741771;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
      v12 = 0LL;
      goto LABEL_37;
    }
    v12 = 0LL;
    if ( (MEMORY[0x40] & 0x100) == 0 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
      if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v10, v9) < 0) && (a6 & 0x10000) == 0 )
      {
        LogError(3221225525LL);
        AcpiDiagTraceAmlError(0LL, 3221225525LL);
        PrintDebugMessage(35, (_DWORD)v10, 0, 0, 0LL);
      }
      v11 = -1073741771;
      goto LABEL_37;
    }
    if ( MEMORY[0x30] )
    {
      for ( i = *(_QWORD *)(MEMORY[0x30] + 24LL); i; i = *(_QWORD *)(i + 56) )
        ;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x30] + 32LL));
    }
    InsertOwnerObjList(a4, 0LL);
    v28 = v32;
    MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
    goto LABEL_52;
  }
  if ( NameSpaceObjectNoLock != -1073741772 )
  {
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
    v12 = 0LL;
    goto LABEL_36;
  }
  v12 = 0LL;
LABEL_14:
  v11 = 0;
  v16 = *v10 - 92;
  if ( *v10 == 92 )
    v16 = v10[1];
  if ( !v16 )
  {
    v29 = NewNameSpaceObject(v7);
    v12 = (_QWORD *)v29;
    if ( v29 )
    {
      *(_DWORD *)(v29 + 40) = 1600085852;
      gpnsNameSpaceRoot = v29;
      InsertOwnerObjList(a4, v29);
    }
    else
    {
      v11 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_35;
  }
  v34 = 0LL;
  v17 = strrchr((const char *)v10, 46);
  if ( v17 )
  {
    *v17 = 0;
    v18 = (unsigned __int8 *)(v17 + 1);
    v11 = GetNameSpaceObjectNoLock(v10);
    if ( v11 )
      goto LABEL_34;
    v35 = 0LL;
  }
  else if ( *v10 == 92 )
  {
    v18 = v10 + 1;
    v35 = gpnsNameSpaceRoot;
    v34 = gpnsNameSpaceRoot;
  }
  else
  {
    v34 = v9;
    v18 = v10;
    if ( *v10 == 94 )
    {
      v30 = v9;
      do
      {
        if ( !v30 )
          break;
        v30 = *(_QWORD *)(v9 + 16);
        ++v18;
        v9 = v30;
        v35 = v30;
        v34 = v30;
      }
      while ( *v18 == 94 );
    }
  }
  v19 = -1LL;
  do
    ++v19;
  while ( v18[v19] );
  if ( (unsigned int)v19 > 4 && *v18 )
  {
    v11 = -1073741773;
    LogError(3221225523LL);
    AcpiDiagTraceAmlError(0LL, 3221225523LL);
    PrintDebugMessage(37, (_DWORD)v18, 0, 0, 0LL);
    goto LABEL_34;
  }
  v20 = (char *)HeapAlloc(a1, 1330859592LL);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, 0xA0uLL);
    *((_QWORD *)v21 + 15) = v21;
    *((_QWORD *)v21 + 4) = v21 + 24;
    LODWORD(v20) = 0;
    *((_QWORD *)v21 + 3) = v21 + 24;
    *((_DWORD *)v21 + 28) = 2;
    *((_DWORD *)v21 + 32) = 1;
    *((_QWORD *)v21 + 18) = 0LL;
    *((_QWORD *)v21 + 19) = -1LL;
  }
  v12 = v21;
  if ( !v21 )
  {
    v11 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
    goto LABEL_34;
  }
  v22 = v21 + 40;
  if ( *v10 )
  {
    *v22 = 1600085855;
    memmove(v22, v18, (unsigned int)v19);
  }
  else
  {
    *v22 = (_DWORD)v20;
  }
  v23 = v35;
  *((_QWORD *)v21 + 2) = v35;
  if ( (gdwfAMLI & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 112));
    v12 = v21;
    v23 = v34;
  }
  *((_QWORD *)v21 + 6) = a4;
  if ( a4 )
  {
    *((struct _EX_RUNDOWN_REF *)v21 + 7) = a4[3];
    a4[3].Count = (unsigned __int64)v21;
    ExAcquireRundownProtection(a4 + 4);
  }
  v24 = *(_QWORD **)(v23 + 32);
  if ( *v24 != v23 + 24 )
LABEL_82:
    __fastfail(3u);
  *(_QWORD *)v21 = v23 + 24;
  *((_QWORD *)v21 + 1) = v24;
  *v24 = v21;
  *(_QWORD *)(v23 + 32) = v21;
LABEL_34:
  v6 = a5;
LABEL_35:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
LABEL_36:
  if ( !v11 || v11 == -1073741771 )
  {
LABEL_37:
    if ( v6 )
      *v6 = v12;
  }
LABEL_39:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v11;
}
