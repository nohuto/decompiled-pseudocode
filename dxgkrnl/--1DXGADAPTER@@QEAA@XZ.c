/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B0AE4
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0050B14 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x1C003E6F8 (--1MOCKDRIVERSTATE@@QEAA@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C003E754 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C003E788 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02B1C34 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1C02B1DAC (-DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(DXGADAPTER *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdi

  DXGADAPTER::Destroy(this);
  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 365) = 0LL;
  }
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 366) = 0LL;
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(*((void **)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 378);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 378) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 529);
  if ( v7 )
    operator delete(v7);
  if ( *((_QWORD *)this + 351) )
  {
    DXGADAPTER::DestroyPhysicalAdapterData(this);
    operator delete(*((void **)this + 351));
    *((_QWORD *)this + 351) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 591);
  if ( v8 )
  {
    MOCKDRIVERSTATE::~MOCKDRIVERSTATE(*((MOCKDRIVERSTATE **)this + 591));
    operator delete(v8);
  }
  DXGADAPTER::DestroyVSyncPhaseState(this);
  operator delete(*((void **)this + 566));
  *((_QWORD *)this + 2) = 0LL;
}
