/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1800C1B30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::SetSyncRefreshCountWaitTarget(
        CLegacyRenderTarget *this,
        unsigned int a2,
        void **a3)
{
  __int64 *v5; // rcx
  int v7; // eax
  int v8; // ebx
  int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  v5 = (__int64 *)*((_QWORD *)this + 4);
  if ( !v5 )
  {
    v8 = -2003304442;
    v12 = 883;
    goto LABEL_13;
  }
  if ( ((*((_QWORD *)this + 2304) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = *v5;
    v13 = 0LL;
    v14 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 72))(v5, &v13);
    if ( v14 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 18432,
        v13);
    if ( v8 < 0 )
    {
      v12 = 874;
LABEL_13:
      v10 = v8;
      goto LABEL_7;
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4), a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = v7;
    v12 = 877;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v10, v12, 0LL);
    return (unsigned int)v8;
  }
  *a3 = (void *)*((_QWORD *)this + 2304);
  return (unsigned int)v8;
}
