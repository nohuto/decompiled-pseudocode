/*
 * XREFs of ?EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801F3D60
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801F373C (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::EnableIndependentFlip(CDirectFlipInfo *this)
{
  __int64 v1; // rsi
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v1 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 352LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  v6 = v3(v1, *((_QWORD *)this + 3), v5, 0LL);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x230u, 0LL);
  return v8;
}
