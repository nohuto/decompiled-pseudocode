/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18002A144
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180028300 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18002A384 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18007F930 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, __int64, const wchar_t *, _QWORD),
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  PCWSTR StringRawBuffer; // rax
  __int64 v12; // r15
  wchar_t *v13; // rbx
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // esi
  unsigned __int64 v19; // rax
  const wchar_t *v20; // rsi
  wchar_t *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // r15d
  unsigned int v26; // ecx
  unsigned int v27; // r12d
  size_t v28; // rax
  int v29; // edx
  unsigned int v30; // r8d
  int v31; // r15d
  unsigned int v32; // r13d
  HRESULT v33; // eax
  int v34; // edx
  unsigned int v35; // r8d
  wchar_t *v37; // rcx
  __int64 v38; // rdx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  int v43; // [rsp+20h] [rbp-A8h]
  unsigned int MaxCount; // [rsp+30h] [rbp-98h] BYREF
  unsigned int MaxCount_4; // [rsp+34h] [rbp-94h]
  const wchar_t *v46; // [rsp+38h] [rbp-90h]
  unsigned int v47; // [rsp+40h] [rbp-88h]
  __int64 (__fastcall *v48)(__int64, __int64, const wchar_t *, _QWORD); // [rsp+48h] [rbp-80h]
  const wchar_t *v49; // [rsp+50h] [rbp-78h]
  __int64 v50; // [rsp+58h] [rbp-70h]
  void (__fastcall *v51)(_QWORD, HSTRING, __int64); // [rsp+60h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-60h] BYREF
  HSTRING string; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  MaxCount_4 = a3;
  v46 = a2;
  v48 = a1;
  v47 = a3;
  v50 = a7;
  v51 = (void (__fastcall *)(_QWORD, HSTRING, __int64))&PnpDeviceWatcher::OnPnpNotification;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  v12 = (unsigned __int64)StringRawBuffer & -(__int64)(*StringRawBuffer != 0);
  v13 = 0LL;
  v49 = 0LL;
  v14 = -2147023728;
  do
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *))v46)(a4, v12, &MaxCount);
    v17 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v15, v16);
    v18 = v17;
    if ( v17 == -2147023728 )
    {
      if ( !v13 )
        return v14;
      v37 = v13;
LABEL_34:
      operator delete(v37, (const struct std::nothrow_t *)2);
      return v14;
    }
    if ( v17 < 0 )
    {
      v38 = 292LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)v18,
        v43);
      if ( v13 )
        operator delete(v13, (const struct std::nothrow_t *)2);
      return v18;
    }
    v19 = 2LL * MaxCount;
    if ( !is_mul_ok(MaxCount, 2uLL) )
      v19 = -1LL;
    v20 = (const wchar_t *)operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v13;
    v13 = (wchar_t *)v20;
    v49 = v20;
    if ( v21 )
      operator delete(v21, (const struct std::nothrow_t *)2);
    if ( !v20 )
    {
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x8007000ELL,
        v43);
      return 2147942414LL;
    }
    v22 = v48(a4, v12, v20, MaxCount);
  }
  while ( v22 == 26 );
  v24 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v22, v23);
  v25 = v24;
  if ( v24 == -2147023728 )
  {
LABEL_23:
    v37 = (wchar_t *)v20;
    goto LABEL_34;
  }
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v24,
      v43);
    v14 = v25;
    goto LABEL_23;
  }
  v46 = v20;
  v26 = MaxCount;
  v27 = MaxCount_4;
  while ( v26 && *v20 )
  {
    v28 = wcsnlen(v20, v26);
    v31 = v28;
    if ( v28 >= MaxCount )
    {
      v18 = -2147418113;
      v38 = 322LL;
      goto LABEL_29;
    }
    string = 0LL;
    MaxCount_4 = v28;
    v32 = v28 + 1;
    LODWORD(v48) = v28 + 1;
    if ( (int)v28 + 1 < (unsigned int)v28 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v29, v30);
      goto LABEL_27;
    }
    v33 = WindowsCreateStringReference(v20, v28, &hstringHeader, &string);
    if ( v33 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33, v34, v35);
      return sub_18005E360(v40, v39, v41, v42, a5, a6, a7, a8, a9, a10);
    }
    v51(v27, string, v50);
    v20 += v32;
    v46 = v20;
    v26 = -1 - v31 + MaxCount;
    MaxCount = v26;
  }
  if ( v13 )
    operator delete(v13, (const struct std::nothrow_t *)2);
  return 0LL;
}
