/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C01A2F18
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0187E48 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000E0E4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047E90 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047F60 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C01870E8 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C034B660 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2, struct DXGDEVICE *a3)
{
  __int64 Pool2; // rbp
  struct DXGPROCESS *Current; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  struct DXGPROCESS *v22; // rax
  int v24; // edx
  _DWORD *v25; // rsi
  int v26; // ecx
  void *v27; // rcx
  NTSTATUS v28; // eax
  unsigned __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rcx
  int HandleInformation; // [rsp+28h] [rbp-50h]
  _BYTE v33[16]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  Pool2 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = *((_DWORD *)Current + 106);
    if ( (v8 & 0x10) != 0 && (v8 & 0x100) == 0 )
      *((_DWORD *)this + 71) |= 4u;
  }
  if ( *((_DWORD *)this + 50) == 4 )
  {
    v26 = *((_DWORD *)Current + 106);
    if ( (v26 & 0x10) == 0
      && (v26 & 0x100) == 0
      && ((*((_DWORD *)this + 71) & 2) != 0 || _bittest((const signed __int32 *)this + 51, 8u)) )
    {
      v27 = (void *)*((_QWORD *)this + 26);
      Object = 0LL;
      v28 = ObReferenceObjectByHandle(v27, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v18 = v28;
      *((_QWORD *)this + 11) = Object;
      if ( v28 < 0 )
      {
        WdLogSingleEntry1(3LL, v28);
        return v18;
      }
    }
  }
  v9 = *((_DWORD *)this + 71);
  if ( (v9 & 2) != 0 )
  {
LABEL_16:
    if ( (*((_DWORD *)this + 51) & 4) != 0 )
      v20 = DXGSYNCOBJECTCA::Initialize(this);
    else
      v20 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 296), this, a3);
    v18 = v20;
    if ( v20 < 0 )
      goto LABEL_21;
    v21 = *((_DWORD *)this + 51);
    if ( (v21 & 1) != 0 )
    {
      v24 = *((_DWORD *)this + 71);
      if ( (v21 & 2) == 0 || (v24 & 0x10) != 0 )
      {
        if ( (v24 & 0x10) != 0 )
        {
          v29 = (unsigned __int64)DXGPROCESS::GetCurrent();
          v30 = *(_DWORD *)(v29 + 424);
          if ( (v30 & 0x100) != 0 )
            v31 = *(_QWORD *)(v29 + 608);
          else
            v31 = v29 & -(__int64)((v30 & 0x80u) != 0);
          v25 = (_DWORD *)((char *)this + 80);
          *((_DWORD *)this + 20) = DXGPROCESS::AllocHandleSafe(v31, (__int64)this, 8u);
        }
        else
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
          v25 = (_DWORD *)((char *)this + 80);
          *((_DWORD *)this + 20) = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
          if ( v33[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
        }
        if ( !*v25 )
        {
          v18 = -1073741801;
          WdLogSingleEntry2(6LL, this, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"SyncObj 0x%I64x: Unable to create synchronization object handle, returning 0x%I64x",
            (__int64)this,
            -1073741801LL,
            0LL,
            0LL,
            0LL);
LABEL_21:
          if ( Pool2 )
          {
            DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
            *((_QWORD *)this + 26) = 0LL;
          }
          return v18;
        }
        *((_DWORD *)this + 68) = *v25;
      }
    }
    v22 = DXGPROCESS::GetCurrent();
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v22);
    goto LABEL_21;
  }
  v10 = *((_DWORD *)this + 50);
  if ( v10 == 4 )
  {
    if ( (v9 & 4) != 0 )
    {
      if ( !*((_QWORD *)this + 26) )
      {
        WdLogSingleEntry1(2LL, 1659LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WSL CPU event is NULL", 1659LL, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)-1073741811;
      }
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 1666LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          1666LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)-1073741801;
      }
      *(_QWORD *)(Pool2 + 8) = *((_QWORD *)this + 26);
      *(_BYTE *)(Pool2 + 17) = 1;
      *(_BYTE *)(Pool2 + 19) = 1;
      *((_QWORD *)this + 26) = Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(v10 - 5) > 1 )
    goto LABEL_16;
  v11 = *((_DWORD *)this + 51);
  if ( (v11 & 0x80u) != 0 )
  {
    v12 = v9 | 1;
  }
  else
  {
    v12 = v9 & 0xFFFFFFFE;
    if ( (v11 & 4) == 0 )
      v12 |= (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 16LL) + 2280LL) & 0x20) == 0;
  }
  *((_DWORD *)this + 71) = v12;
  Global = DXGGLOBAL::GetGlobal();
  v15 = 0LL;
  v16 = *((_QWORD *)Global + 33);
  if ( *((_DWORD *)this + 50) != 6 )
    v15 = *((_QWORD *)this + 26);
  LOBYTE(HandleInformation) = *((_BYTE *)this + 284) & 1;
  LOBYTE(v14) = *((_BYTE *)this + 204) & 1;
  v17 = *((_DWORD *)this + 71) >> 5;
  LOBYTE(v17) = (*((_DWORD *)this + 71) & 0x20) != 0;
  v18 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD, __int64, int))(*(_QWORD *)(v16 + 8) + 912LL))(
          (char *)this + 128,
          v14,
          v17,
          0LL,
          v15,
          HandleInformation);
  if ( (v18 & 0x80000000) == 0 )
  {
    if ( a2 )
      v19 = *((_QWORD *)a2 + 4);
    else
      v19 = 0LL;
    *((_QWORD *)this + 19) = v19;
    goto LABEL_16;
  }
  return v18;
}
