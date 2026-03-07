void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this && *((_BYTE *)this + 16) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 16) = 0;
  }
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    v2 = *(__int64 **)this;
    v4 = 0;
    v3 = *v2;
    HmgDecrementExclusiveReferenceCountEx(v2, *((unsigned int *)this + 3), &v4);
    if ( v4 )
      GrepDeleteDC(v3, 0x2000000LL);
  }
  *(_QWORD *)this = 0LL;
}
