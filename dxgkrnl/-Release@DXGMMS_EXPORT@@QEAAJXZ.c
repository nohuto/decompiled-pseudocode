/*
 * XREFs of ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C031E1B4
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Release(DXGMMS_EXPORT *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *(_BYTE *)this )
  {
    (*((void (__fastcall **)(_QWORD))this + 10))(0LL);
    ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)this + 32, 8uLL);
    *(_BYTE *)this = 0;
  }
  return 0LL;
}
