/*
 * XREFs of ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1802385E0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180070200 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003103C (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDisplayManager::DriverUpdateInProgress(struct _RTL_CRITICAL_SECTION *this)
{
  struct IDXGIFactory5 *v1; // rbx
  unsigned int v2; // esi
  char v3; // di
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  bool v5; // r14
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+38h] [rbp-28h]
  _DWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION **v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+40h] BYREF
  struct IDXGIFactory5 *v19; // [rsp+A8h] [rbp+48h] BYREF

  v16 = this;
  v19 = 0LL;
  CDisplayManager::InternalGetDXGIFactory(this, &v19);
  v1 = v19;
  if ( v19 )
  {
    v18 = 0LL;
    v2 = 0;
    v3 = 1;
    while ( 1 )
    {
      lpVtbl = v1->lpVtbl;
      v10 = 0LL;
      v9 = (__int64 *)&v18;
      v11 = 1;
      v5 = ((int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v1, v2, &v10) >= 0;
      if ( v11 )
      {
        v6 = *v9;
        *v9 = v10;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( !v5 )
        break;
      v17 = 0LL;
      if ( (**v18)(v18, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v17) >= 0 )
      {
        LODWORD(v16) = 0;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v8) >= 0 )
        {
          v15 = 0;
          v12[0] = v8;
          v13 = &v16;
          v12[1] = 11;
          v14 = 4;
          D3DKMTQueryAdapterInfo(v12);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v8);
        }
        if ( (_DWORD)v16 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
          goto LABEL_15;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
      ++v2;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  v3 = 0;
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v3;
}
