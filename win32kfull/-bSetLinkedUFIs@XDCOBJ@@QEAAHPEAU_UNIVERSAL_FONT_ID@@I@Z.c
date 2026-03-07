__int64 __fastcall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v9; // rcx

  v3 = a3;
  *(_DWORD *)(*(_QWORD *)this + 308LL) = a3 == 0;
  v6 = *(_QWORD *)this;
  v7 = *(void **)(*(_QWORD *)this + 296LL);
  if ( v7 )
  {
    if ( a3 <= *(_DWORD *)(v6 + 304) )
    {
LABEL_7:
      memmove(*(void **)(*(_QWORD *)this + 296LL), a2, 8 * v3);
      *(_DWORD *)(*(_QWORD *)this + 304LL) = v3;
      return 1LL;
    }
    if ( v7 != (void *)(v6 + 264) )
    {
      Win32FreePool(v7);
      *(_QWORD *)(*(_QWORD *)this + 296LL) = 0LL;
    }
  }
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)(*(_QWORD *)this + 296LL) = *(_QWORD *)this + 264LL;
    goto LABEL_7;
  }
  if ( 8 * (_DWORD)v3 )
    v9 = Win32AllocPoolZInit((unsigned int)(8 * v3), 1684300103LL);
  else
    v9 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 296LL) = v9;
  if ( *(_QWORD *)(*(_QWORD *)this + 296LL) )
    goto LABEL_7;
  *(_DWORD *)(*(_QWORD *)this + 304LL) = 0;
  return 0LL;
}
