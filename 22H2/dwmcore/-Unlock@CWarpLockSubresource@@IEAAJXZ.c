/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x18003BA70
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18003B6AC (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), 2013265920LL);
  v2 = *((_QWORD *)this + 2);
  v8 = *((_DWORD *)this + 8);
  v7 = 14;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x73u, 0LL);
  *((_QWORD *)this + 5) = 0LL;
  result = v5;
  *((_DWORD *)this + 12) = 0;
  return result;
}
