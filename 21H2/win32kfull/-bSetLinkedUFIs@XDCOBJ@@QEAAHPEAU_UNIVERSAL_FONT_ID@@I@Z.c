/*
 * XREFs of ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02ABC38
 * Callers:
 *     NtGdiSetLinkedUFIs @ 0x1C027AF30 (NtGdiSetLinkedUFIs.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rcx

  v3 = a3;
  *(_DWORD *)(*(_QWORD *)this + 308LL) = a3 == 0;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(v6 + 296);
  if ( v7 )
  {
    if ( (unsigned int)v3 <= *(_DWORD *)(v6 + 304) )
    {
LABEL_7:
      memmove(*(void **)(v6 + 296), a2, 8 * v3);
      *(_DWORD *)(*(_QWORD *)this + 304LL) = v3;
      return 1LL;
    }
    if ( v7 != v6 + 264 )
    {
      Win32FreePool(*(_QWORD *)(v6 + 296));
      *(_QWORD *)(*(_QWORD *)this + 296LL) = 0LL;
    }
  }
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)(*(_QWORD *)this + 296LL) = *(_QWORD *)this + 264LL;
    v6 = *(_QWORD *)this;
    goto LABEL_7;
  }
  if ( 8 * (_DWORD)v3 )
    v9 = Win32AllocPoolZInit((unsigned int)(8 * v3), 1684300103LL);
  else
    v9 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 296LL) = v9;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 296LL) )
    goto LABEL_7;
  *(_DWORD *)(v6 + 304) = 0;
  return 0LL;
}
