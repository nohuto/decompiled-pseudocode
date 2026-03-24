/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0122F7C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v21; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE v38[8]; // [rsp+30h] [rbp-38h] BYREF
  char v39; // [rsp+38h] [rbp-30h]
  _BYTE v40[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v41; // [rsp+48h] [rbp-20h]
  int v42; // [rsp+50h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v32 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 92) |= 1u;
  if ( !*((_BYTE *)a2 + 277) )
  {
    v12 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v12 + 192) - 5) > 1 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v33 + 24) = 353LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 936LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
            v12 + 120,
            (char *)this + 56);
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v14 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v14 + 192) - 5) > 1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v34 + 24) = 353LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                        + 8LL)
                                                                            + 944LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
              v14 + 120,
              (char *)this + 48,
              a4);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v15 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v15 + 192) - 5) > 1 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v35 + 24) = 353LL;
      WdLogEvent5_WdAssertion(v35);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v15 + 128);
    v16 = *((_DWORD *)this + 18);
    if ( (v16 & 0x10) == 0 && (v16 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v18 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v18;
        if ( !v18 )
        {
          v13 = -1073741801;
          if ( v39 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v19);
          return (unsigned int)v13;
        }
        *(_OWORD *)v18 = 0LL;
        v18[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)this + 3));
      }
      if ( v39 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v8);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) == 0 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v21 = Current;
  v41 = (struct DXGPROCESS *)((char *)Current + 208);
  if ( Current != (struct DXGPROCESS *)-208LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
    {
      v36 = WdLogNewEntry5_WdAssertion(CurrentThread, (char *)Current + 208);
      *(_QWORD *)(v36 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v36);
    }
  }
  DXGPUSHLOCK::AcquireExclusive(v41);
  v42 = 2;
  v23 = HMGRTABLE::AllocHandle((unsigned int *)v21 + 60, (__int64)this, 11, 0, 0);
  *((_DWORD *)this + 10) = v23;
  v27 = v23;
  if ( v23 )
  {
    v28 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *((_DWORD *)v21 + 64) )
    {
      v29 = *((_QWORD *)v21 + 30);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
        *(_DWORD *)(v29 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    return 0LL;
  }
  v37 = WdLogNewEntry5_WdLowResource(v24, 0LL, v25, v26);
  v13 = -1073741801;
  *(_QWORD *)(v37 + 24) = this;
  *(_QWORD *)(v37 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v37);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  return (unsigned int)v13;
}
