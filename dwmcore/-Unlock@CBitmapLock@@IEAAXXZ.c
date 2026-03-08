/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800A7F9C
 * Callers:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x1800A7F34 (--1CBitmapLock@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *((unsigned int *)this + 32));
    v3 = *((_QWORD *)this + 17);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 17) = 0LL;
    }
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( *((_BYTE *)this + 73) )
    {
      operator delete(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      *((_DWORD *)this + 30) = 0;
    }
  }
  *((_BYTE *)this + 72) = 0;
}
