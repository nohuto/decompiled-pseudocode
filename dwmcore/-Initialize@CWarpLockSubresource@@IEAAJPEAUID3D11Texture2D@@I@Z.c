/*
 * XREFs of ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x1800A85D0
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A840C (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x1800A8664 (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Initialize(CWarpLockSubresource *this, struct ID3D11Texture2D *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx

  v3 = (_QWORD *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
         v3);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3Fu, 0LL);
  }
  else
  {
    *((_DWORD *)this + 8) = a3;
    v11 = CWarpLockSubresource::Lock(this);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x42u, 0LL);
  }
  return v10;
}
