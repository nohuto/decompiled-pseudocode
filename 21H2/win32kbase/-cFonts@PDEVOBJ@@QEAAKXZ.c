/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0099D70
 * Callers:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0099BB0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CA2A8 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  unsigned __int32 v2; // ecx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  unsigned __int32 v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0LL;
  result = *(unsigned int *)(*(_QWORD *)this + 2104LL);
  if ( (_DWORD)result == -1 )
  {
    v4 = *(_QWORD *)this;
    v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)this + 2896LL);
    if ( v5 )
    {
      v6 = v5(*(_QWORD *)(v4 + 1800), 0LL, 0LL, &v7);
      v4 = *(_QWORD *)this;
      v2 = v6;
    }
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 2104), v2, -1);
    if ( (_DWORD)result == -1 )
      return v2;
  }
  return result;
}
