/*
 * XREFs of ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800CD110
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800CD2B0 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028BAFC (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18028BF74 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE1BC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::InternalGetAdapter(
        CDisplayManager *this,
        struct _LUID a2,
        struct IDXGIAdapter1 **a3)
{
  DWORD LowPart; // ebx
  int DXGIFactory; // eax
  unsigned int v6; // edi
  struct IDXGIFactory5 *v7; // rdi
  unsigned int v8; // esi
  LONG HighPart; // r12d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v11; // r14d
  __int64 v12; // rcx
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IDXGIFactory5 *v16; // [rsp+28h] [rbp-D8h] BYREF
  int *v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  char v19; // [rsp+40h] [rbp-C0h]
  struct _LUID v20; // [rsp+48h] [rbp-B8h]
  _BYTE v21[296]; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+178h] [rbp+78h]
  int v23; // [rsp+17Ch] [rbp+7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  LowPart = a2.LowPart;
  v20 = a2;
  *a3 = 0LL;
  v16 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v16);
  v6 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x134,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory,
      v15[0]);
  }
  else
  {
    v7 = v16;
    v8 = 0;
    HighPart = v20.HighPart;
    *(_QWORD *)v15 = 0LL;
    while ( 1 )
    {
      lpVtbl = v7->lpVtbl;
      v17 = v15;
      v18 = 0LL;
      v19 = 1;
      v11 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v7, v8, &v18);
      if ( v19 )
      {
        v12 = *(_QWORD *)v17;
        *(_QWORD *)v17 = v18;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v11 < 0 )
        break;
      memset_0(v21, 0, 0x138uLL);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v15 + 80LL))(*(_QWORD *)v15, v21);
      v11 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13D,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
          (const char *)(unsigned int)v13,
          v15[0]);
        break;
      }
      if ( LowPart == v22 && HighPart == v23 )
      {
        *a3 = *(struct IDXGIAdapter1 **)v15;
        *(_QWORD *)v15 = 0LL;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v15);
        v6 = 0;
        goto LABEL_11;
      }
      ++v8;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v15);
    v6 = v11;
  }
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v6;
}
