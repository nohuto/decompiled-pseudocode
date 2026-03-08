/*
 * XREFs of ?IsOpaque@CBitmapResource@@UEBA_NXZ @ 0x1800E7AB4
 * Callers:
 *     ?IsOpaque@CBitmapResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x180118890 (-IsOpaque@CBitmapResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapResource::IsOpaque(CBitmapResource *this)
{
  char *v1; // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 5) + 8LL) - 40;
  return *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v1)(v1, v3) + 4) == 3;
}
