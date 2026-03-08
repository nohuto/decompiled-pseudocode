/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004FC1C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051630 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2)
{
  int v2; // esi
  char *v3; // rdi
  bool *v4; // r15
  char v6; // r14
  __int64 v7; // rbp
  _QWORD *i; // rsi
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 *v12; // r12
  __int64 *j; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ebp
  struct CRenderTarget **v19; // rbp
  struct CRenderTarget **k; // r14
  __int64 *v21; // r14
  __int64 *m; // rbp
  char v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (char *)this + 582;
  v4 = a2;
  *a2 = 0;
  if ( *((_BYTE *)this + 581) && !*v3 )
    goto LABEL_23;
  v6 = *v3;
  v7 = qword_1803E30A8;
  for ( i = (_QWORD *)CSyncLockGroup::g_syncLockGroups; i != (_QWORD *)v7; ++i )
  {
    LOBYTE(a2) = v6;
    (**(void (__fastcall ***)(_QWORD, bool *))*i)(*i, a2);
  }
  *((_BYTE *)this + 576) = 1;
  v9 = CRenderTargetManager::ComputeOverlayConfiguration(this);
  v2 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180353680, 3u, v9, 0x68u, 0LL);
  v12 = (__int64 *)*((_QWORD *)this + 2);
  for ( j = (__int64 *)*((_QWORD *)this + 1); j != v12; ++j )
  {
    v14 = *j;
    v24 = 0;
    v15 = v14 + 80 + *(int *)(*(_QWORD *)(v14 + 80) + 12LL);
    LOBYTE(v11) = *v3;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v15 + 32LL))(
            v15,
            *((_QWORD *)this + 65),
            v11,
            &v24);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180353680, 3u, v16, 0x70u, 0LL);
    if ( !v2 || v2 >= 0 && v18 < 0 )
      v2 = v18;
    if ( v24 )
      *v4 = 1;
  }
  *((_BYTE *)this + 576) = 0;
  v19 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( k = (struct CRenderTarget **)*((_QWORD *)this + 7); k != v19; ++k )
    CRenderTargetManager::RemoveRenderTarget(this, *k);
  v21 = (__int64 *)*((_QWORD *)this + 8);
  for ( m = (__int64 *)*((_QWORD *)this + 7); m != v21; ++m )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(m);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  if ( v2 >= 0 && !*v4 )
LABEL_23:
    *v3 = 0;
  return (unsigned int)v2;
}
