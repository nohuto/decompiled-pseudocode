/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C01A7748
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01A75CC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx

  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) <= 1 )
  {
    v3 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 33);
    LOBYTE(v2) = (*((_BYTE *)this + 204) & 1) != 0 || (*((_DWORD *)this + 71) & 0x20) != 0;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(v3 + 8) + 920LL))((char *)this + 128, v2);
  }
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1607LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_hSyncObjHandle == NULL", 1607LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 1608LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 1608LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSYNCOBJECT *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
