/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C0161D40
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0019AD4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0008718 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0019B08 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0019B50 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0019B70 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A80C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001AA10 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this, __int64 a2)
{
  __int64 v3; // rcx
  OUTPUTDUPL_SESSION_MGR *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v10; // rdx
  void *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  struct _KEVENT *v14; // rcx
  char *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8

  v3 = *((_QWORD *)this + 2340);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 2340) = 0LL;
  }
  v4 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  if ( *((_DWORD *)this + 4730) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v21 + 24) = 3310LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v22 + 24) = 3311LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((DXGSESSIONDATA **)this + 2320) != (DXGSESSIONDATA *)((char *)this + 18560) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v23 + 24) = 3316LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((DXGSESSIONDATA **)this + 2322) != (DXGSESSIONDATA *)((char *)this + 18576) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v24 + 24) = 3317LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_WORD *)this + 9309) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v25 + 24) = 3319LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v5 = (void *)*((_QWORD *)this + 2328);
  if ( v5 )
  {
    operator delete[](v5);
    *((_WORD *)this + 9308) = 0;
    *((_QWORD *)this + 2328) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 2329);
  *((_QWORD *)this + 2330) = 0LL;
  ObfDereferenceObject(v6);
  if ( *((_QWORD *)this + 2336) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v26 + 24) = 3330LL;
    WdLogEvent5_WdAssertion(v26);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1548), this);
  v11 = (void *)*((_QWORD *)this + 2339);
  if ( v11 )
  {
    operator delete[](v11);
    *((_QWORD *)this + 2339) = 0LL;
    *((_DWORD *)this + 4676) = 0;
  }
LABEL_21:
  v12 = *((_DWORD *)this + 4684);
  while ( v12 )
  {
    v13 = (_QWORD *)(*((_QWORD *)this + 2343) + 32LL * (unsigned int)--v12);
    *((_DWORD *)this + 4684) = v12;
    if ( v13[1] )
    {
      v27 = v13[2];
      if ( *(_QWORD **)(v27 + 8) != v13 + 2 || (v10 = (_QWORD *)v13[3], (_QWORD *)*v10 != v13 + 2) )
        __fastfail(3u);
      *v10 = v27;
      *(_QWORD *)(v27 + 8) = v10;
      --*(_DWORD *)(v13[1] + 4LL);
      goto LABEL_21;
    }
  }
  v14 = (struct _KEVENT *)*((_QWORD *)this + 2341);
  *((_DWORD *)this + 4684) = -1;
  if ( v14 )
  {
    KeSetEvent(v14, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 2341));
    *((_QWORD *)this + 2341) = 0LL;
  }
  v15 = (char *)*((_QWORD *)this + 2343);
  if ( v15 != (char *)this + 18752 )
    operator delete[](v15);
  v16 = (void *)*((_QWORD *)this + 2388);
  if ( v16 )
    operator delete[](v16);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19048), (__int64)v10);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 2380, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18992), v17);
  DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)this + 2367);
  DispBrokerClientReference::Assign((HANDLE **)this + 2373, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18880), v18);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18648), v19);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16), v20);
}
