/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C02B6A20
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0391C6C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009EE0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0040A04 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0040AB4 (-AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C017A794 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r14
  NTSTATUS v10; // eax
  unsigned int Data1; // ebp
  char *v12; // rdi
  char v13; // r9
  DXGADAPTER *v14; // r8
  unsigned int v15; // r11d
  int v16; // edx
  unsigned int v17; // eax
  char v18; // cl
  int v19; // edi
  __int64 v20; // rax
  struct DXGCOPYPROTECTION *v21; // rbx
  __int64 v22; // rax
  struct DXGCOPYPROTECTION *v23; // rcx
  struct DXGCOPYPROTECTION **v24; // rax
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v27[16]; // [rsp+58h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5496LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5496LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 5497LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectionKey != NULL", 5497LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 5500LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5500LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5501LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5501LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  Uuid = 0LL;
  while ( 1 )
  {
    v10 = ExUuidCreate(&Uuid);
    if ( v10 >= 0 )
      break;
    if ( v10 != -1073741267 )
    {
      v19 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ExUuidCreate failed, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_33;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v12 = (char *)(this + 10);
  do
  {
    v13 = 1;
    v14 = this[10];
    while ( 1 )
    {
      v15 = Data1;
      if ( v14 == (DXGADAPTER *)v12 || !v14 )
        break;
      v16 = *((_DWORD *)v14 + 12);
      v17 = Data1 + 1;
      v14 = *(DXGADAPTER **)v14;
      if ( v16 != Data1 )
        v17 = Data1;
      v18 = 0;
      Data1 = v17;
      if ( v16 != v15 )
        v18 = v13;
      v13 = v18;
    }
  }
  while ( !v13 );
  v20 = operator new[](0x40uLL, 0x4B677844u, 256LL);
  v21 = (struct DXGCOPYPROTECTION *)v20;
  if ( v20 )
  {
    *(_QWORD *)(v20 + 16) = this;
    *(_OWORD *)v20 = 0LL;
    *(_QWORD *)(v20 + 40) = Current;
    *(_OWORD *)(v20 + 24) = 0LL;
    *(_DWORD *)(v20 + 48) = Data1;
    *(_DWORD *)(v20 + 52) = a2;
    *(_DWORD *)(v20 + 56) = a3;
    v22 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_31;
    *(_QWORD *)v21 = v22;
    *((_QWORD *)v21 + 1) = v12;
    *(_QWORD *)(v22 + 8) = v21;
    *(_QWORD *)v12 = v21;
    v19 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
    if ( v19 >= 0 )
    {
      DXGPROCESS::AddCopyProtection(Current, v21);
      *a4 = Data1;
      goto LABEL_34;
    }
    v23 = *(struct DXGCOPYPROTECTION **)v21;
    if ( *(struct DXGCOPYPROTECTION **)(*(_QWORD *)v21 + 8LL) != v21
      || (v24 = (struct DXGCOPYPROTECTION **)*((_QWORD *)v21 + 1), *v24 != v21) )
    {
LABEL_31:
      __fastfail(3u);
    }
    *v24 = v23;
    *((_QWORD *)v23 + 1) = v24;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v21);
  }
  else
  {
    v19 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGCOPYPROTECTION class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_33:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_34:
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  return (unsigned int)v19;
}
