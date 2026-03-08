/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x1800A854C
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x1800A8510 (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), 2013265920LL);
  v2 = *((_DWORD *)this + 8);
  v3 = *((_QWORD *)this + 2);
  v8 = 14;
  v9 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v8);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x73u, 0LL);
  *((_QWORD *)this + 5) = 0LL;
  result = v6;
  *((_DWORD *)this + 12) = 0;
  return result;
}
