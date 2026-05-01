/*
 * XREFs of ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800216A0
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18001CC30 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180021778 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  _QWORD *Ptr; // rbx
  __int64 v9; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v10; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h]

  v14 = a2;
  *a3 = 0LL;
  v6 = this + 56;
  AcquireSRWLockShared(this + 56);
  v15 = v6;
  Ptr = this[60].Ptr;
  try
  {
    while ( 1 )
    {
      Ptr = (_QWORD *)*Ptr;
      if ( Ptr == this[60].Ptr )
        break;
      v9 = Ptr[2];
      if ( *(_QWORD *)(v9 + 8) == a2 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 16), 0LL);
        ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
          &v14,
          &StringRawBuffer);
        v10 = *(struct Windows::Foundation::Collections::IPropertySet **)(Ptr[2] + 32LL);
        if ( v10 )
        {
          *a3 = v10;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 8LL))(v10);
        }
        else
        {
          *a3 = 0LL;
        }
      }
    }
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x78B,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v7);
  }
  return result;
}
