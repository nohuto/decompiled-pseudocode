/*
 * XREFs of ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18003CA28
 * Callers:
 *     ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18003C9E0 (--_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180023D94 (--1CResourceProxy@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(CImageLegacyMilBrushProxy *this)
{
  __int64 v1; // rdx
  __int128 v3; // [rsp+90h] [rbp-38h] BYREF
  __int128 v4; // [rsp+A0h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CImageLegacyMilBrushProxy::`vftable';
  v3 = 0LL;
  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v1 + 16) + 1032LL))(
    *(_QWORD *)(v1 + 16),
    *(unsigned int *)(v1 + 24),
    &v3,
    &v4,
    &v3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  CResourceProxy::~CResourceProxy(this);
}
