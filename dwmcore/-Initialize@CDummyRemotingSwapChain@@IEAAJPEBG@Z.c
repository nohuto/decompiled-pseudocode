/*
 * XREFs of ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x18029612C
 * Callers:
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180295C98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Initialize(CDummyRemotingSwapChain *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  FARPROC ProcAddress; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, char *); // rdi
  _QWORD *v9; // r14
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); // rbx
  __int64 v11; // rcx
  HANDLE EventW; // rax
  HANDLE v13; // rax
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-88h]
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  const unsigned __int16 *v18; // [rsp+40h] [rbp-68h]
  int v19; // [rsp+48h] [rbp-60h]
  int v20; // [rsp+4Ch] [rbp-5Ch]
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v22[72]; // [rsp+58h] [rbp-50h] BYREF

  ProcAddress = GetProcAddress(*((HMODULE *)this + 11), "DwmIndirectCreate");
  if ( !ProcAddress )
  {
    v7 = -2147024809;
    v14 = -2147024809;
    v16 = 93;
    goto LABEL_11;
  }
  v19 = 0;
  v20 = 0;
  v18 = a2;
  v17 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  v6 = ((__int64 (__fastcall *)(__int128 *, char *))ProcAddress)(&v17, (char *)this + 96);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 67;
    goto LABEL_8;
  }
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 12);
  v9 = (_QWORD *)((char *)this + 104);
  v10 = **v8;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
  v6 = v10(v8, &IID_IDWMRemotingIndirectEx, (char *)this + 104);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 70;
LABEL_8:
    v14 = v6;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v14, v16, 0LL);
    return v7;
  }
  v21 = 7;
  memset_0(v22, 0, 0x40uLL);
  (*(void (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*v9 + 56LL))(*v9, &v21, 1LL);
  if ( *((_BYTE *)g_pComposition + 416) )
  {
    v11 = *v9;
    v21 = 11;
    v22[8] = 1;
    (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v11 + 56LL))(v11, &v21, 1LL);
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 16,
    EventW);
  v13 = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 24,
    v13);
  return v7;
}
