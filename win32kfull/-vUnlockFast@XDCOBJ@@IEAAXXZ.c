void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  struct _DC_ATTR *UserAttr; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( !*((_DWORD *)this + 3) )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
  v2 = *(__int64 **)this;
  v5 = 0;
  v3 = *v2;
  HmgDecrementExclusiveReferenceCountEx(v2, *((unsigned int *)this + 3), &v5);
  if ( v5 )
    GrepDeleteDC(v3, 0x2000000LL);
}
