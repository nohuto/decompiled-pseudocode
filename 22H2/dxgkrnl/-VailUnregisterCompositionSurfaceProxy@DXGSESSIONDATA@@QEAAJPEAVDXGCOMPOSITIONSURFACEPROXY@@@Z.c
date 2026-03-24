/*
 * XREFs of ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B8A0C
 * Callers:
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C028CB40 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028E524 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B60C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(
        DXGSESSIONDATA *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  struct DXGFASTMUTEX *v2; // r14
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _EX_RUNDOWN_REF *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE v18[8]; // [rsp+20h] [rbp-10h] BYREF
  char v19; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18880);
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v8 )
    ++*((_DWORD *)this + 4730);
  if ( v19 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v6);
    v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v8 && ExAcquireRundownProtection(v8 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v12 = *((unsigned int *)a2 + 4);
      v13 = *(_QWORD *)(*((_QWORD *)this + 2366) + 80LL);
      *((_DWORD *)a2 + 4) = 0;
      if ( (_DWORD)v12 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v13 + 8) + 64LL))(
          *(_QWORD *)(v13 + 8),
          v12,
          18LL);
        DXGCOMPOSITIONSURFACEPROXY::Release(a2);
      }
      if ( v19 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v12);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      v5 = -2147483611;
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v14 + 24) = 2LL;
      *(_QWORD *)(v14 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v14);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    v5 = -2147483611;
    v15 = WdLogNewEntry5_WdWarning(v8, v6, v7);
    *(_QWORD *)(v15 + 24) = 1LL;
    *(_QWORD *)(v15 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v15);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v16);
  }
  return v5;
}
