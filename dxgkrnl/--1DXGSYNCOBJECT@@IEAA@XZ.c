/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0186D7C
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0186C00 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
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
    WdLogSingleEntry1(1LL, 1590LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_hSyncObjHandle == NULL", 1590LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 1591LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 1591LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSYNCOBJECT *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
