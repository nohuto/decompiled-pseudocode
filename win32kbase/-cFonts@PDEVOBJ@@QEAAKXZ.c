/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0010E80
 * Callers:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0010CC8 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v5 = 0LL;
  if ( *(_DWORD *)(v1 + 2072) == -1 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(v1 + 2872);
    if ( v4 )
      *(_DWORD *)(*(_QWORD *)this + 2072LL) = v4(*(_QWORD *)(v1 + 1768), 0LL, 0LL, &v5);
    else
      *(_DWORD *)(v1 + 2072) = 0;
  }
  return *(unsigned int *)(*(_QWORD *)this + 2072LL);
}
