/*
 * XREFs of ?Release@GameControllerRawInputProvider@@UEAAKXZ @ 0x1800113F0
 * Callers:
 *     ?Release@GameControllerRawInputProvider@@W7EAAKXZ @ 0x18004B5F0 (-Release@GameControllerRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x18004B600 (-Release@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x18004B610 (-Release@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::Release(GameControllerRawInputProvider *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (_DWORD *)((char *)this + 24);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 24);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
