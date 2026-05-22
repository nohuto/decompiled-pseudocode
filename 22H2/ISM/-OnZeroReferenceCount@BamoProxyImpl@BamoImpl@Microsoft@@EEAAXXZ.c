/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800102B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180005030 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  _QWORD *v2; // rcx
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *((_BYTE *)this + 29);
    if ( v3 )
      goto LABEL_7;
    if ( *(_QWORD *)(*(_QWORD *)(v2[3] + 32LL) + 56LL) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 64LL))(v2, *((unsigned int *)this + 6));
      v3 = *((_BYTE *)this + 29);
    }
    if ( v3 )
    {
LABEL_7:
      Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
        (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v6,
        *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
      v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 48LL))(this);
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      v5 = v6;
      if ( v6 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 128));
        *(_DWORD *)(v5 + 168) = GetCurrentThreadId();
      }
    }
  }
}
