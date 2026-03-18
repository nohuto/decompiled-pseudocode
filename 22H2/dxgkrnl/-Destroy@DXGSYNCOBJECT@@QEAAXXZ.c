/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01A75CC
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01A6A78 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0002A60 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C01A76B8 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C01A7748 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01E0724 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C034F638 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C034FC34 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  unsigned int v2; // edx
  DXGADAPTERSYNCOBJECT *v3; // rdi
  struct DXGPROCESS *Current; // rax
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2050LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 2050LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 50) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v2 = *((_DWORD *)this + 20);
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 71) & 0x10) != 0 )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 36), v2);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v5);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 20));
      if ( v5[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
    }
    *((_DWORD *)this + 20) = 0;
  }
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
    v3 = (DXGSYNCOBJECT *)((char *)this + 296);
  }
  else
  {
    v3 = (DXGSYNCOBJECT *)((char *)this + 296);
    DXGADAPTERSYNCOBJECT::Stop((DXGSYNCOBJECT *)((char *)this + 296));
  }
  Current = DXGPROCESS::GetCurrent();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), Current);
  if ( (*((_DWORD *)this + 51) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(v3);
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}
