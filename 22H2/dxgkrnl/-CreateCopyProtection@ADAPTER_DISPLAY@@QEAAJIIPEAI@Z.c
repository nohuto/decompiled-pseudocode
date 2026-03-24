/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0211840
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02951E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007DCC (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C003AC38 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC3E0 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int Data1; // r14d
  char *v25; // rsi
  char v26; // r9
  DXGADAPTER *v27; // r8
  unsigned int v28; // r11d
  int v29; // edx
  unsigned int v30; // eax
  char v31; // cl
  __int64 v32; // rax
  unsigned int v33; // ebx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // esi
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  struct _KTHREAD *v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v53[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v12 + 24) = 5191LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 5192LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v17 + 24) = 5195LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentThread = KeGetCurrentThread();
  v19 = *((_QWORD *)Current + 42);
  if ( *(struct _KTHREAD **)(v19 + 16) != CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, CurrentThread);
    *(_QWORD *)(v20 + 24) = 5196LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v53, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  Uuid = 0LL;
  while ( 1 )
  {
    v21 = ExUuidCreate(&Uuid);
    if ( v21 >= 0 )
      break;
    if ( v21 != -1073741267 )
    {
      v32 = WdLogNewEntry5_WdError(v23, v22);
      v33 = -1073741801;
      *(_QWORD *)(v32 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v32);
      goto LABEL_29;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v25 = (char *)(this + 8);
  do
  {
    v26 = 1;
    v27 = this[8];
    while ( 1 )
    {
      v28 = Data1;
      if ( v27 == (DXGADAPTER *)v25 || !v27 )
        break;
      v29 = *((_DWORD *)v27 + 12);
      v30 = Data1 + 1;
      v27 = *(DXGADAPTER **)v27;
      if ( v29 != Data1 )
        v30 = Data1;
      v31 = 0;
      Data1 = v30;
      if ( v29 != v28 )
        v31 = v26;
      v26 = v31;
    }
  }
  while ( !v26 );
  v34 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v39 = v34;
  if ( v34 )
  {
    *((_QWORD *)v34 + 2) = this;
    *(_OWORD *)v34 = 0LL;
    *((_QWORD *)v34 + 5) = Current;
    *(_OWORD *)(v34 + 24) = 0LL;
    *((_DWORD *)v34 + 12) = Data1;
    *((_DWORD *)v34 + 13) = a2;
    *((_DWORD *)v34 + 14) = a3;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v39 )
  {
    v42 = *(_QWORD *)v25;
    if ( *(char **)(*(_QWORD *)v25 + 8LL) == v25 )
    {
      *v39 = v42;
      v39[1] = v25;
      *(_QWORD *)(v42 + 8) = v39;
      *(_QWORD *)v25 = v39;
      v43 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
      if ( v43 >= 0 )
      {
        v46 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 42) + 16LL) != v46 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46, v41);
          *(_QWORD *)(v47 + 24) = 824LL;
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = (_QWORD *)((char *)Current + 304);
        v49 = v39 + 3;
        v50 = *((_QWORD *)Current + 38);
        if ( *(struct DXGPROCESS **)(v50 + 8) == (struct DXGPROCESS *)((char *)Current + 304) )
        {
          *v49 = v50;
          v49[1] = v48;
          *(_QWORD *)(v50 + 8) = v49;
          *v48 = v49;
          *a4 = Data1;
          goto LABEL_39;
        }
      }
      else
      {
        v44 = *v39;
        if ( *(_QWORD **)(*v39 + 8LL) == v39 )
        {
          v45 = (_QWORD *)v39[1];
          if ( (_QWORD *)*v45 == v39 )
          {
            *v45 = v44;
            *(_QWORD *)(v44 + 8) = v45;
            DXGCOPYPROTECTION::`scalar deleting destructor'((DXGCOPYPROTECTION *)v39);
            DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_39:
            v33 = v43;
            goto LABEL_40;
          }
        }
      }
    }
    __fastfail(3u);
  }
  v40 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
  v33 = -1073741801;
  *(_QWORD *)(v40 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v40);
LABEL_29:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_40:
  if ( v53[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53, v41);
  return v33;
}
