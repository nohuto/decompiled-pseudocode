/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C0186CEC
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0057938 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0186C00 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // rdi
  DXGADAPTERSYNCOBJECT *v3; // rdx
  DXGADAPTERSYNCOBJECT **v4; // rax
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 192));
    v3 = *(DXGADAPTERSYNCOBJECT **)this;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this
      || (v4 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1), *v4 != this) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v2 + 192));
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v5 + 16), (struct DXGADAPTER *)v5);
  }
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 1613LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchSyncObject == NULL", 1613LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
