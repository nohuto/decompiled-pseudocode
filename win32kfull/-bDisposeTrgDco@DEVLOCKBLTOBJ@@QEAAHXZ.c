__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  DC **v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  DC *v5; // rcx
  __int64 v6; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (DC **)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 && *((_BYTE *)this + 137) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*v1, *(struct SURFACE **)(v4 + 2528));
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *v1 && *((_BYTE *)v1 + 16) )
    {
      *((_DWORD *)*v1 + 10) &= ~2u;
      *((_BYTE *)v1 + 16) = 0;
    }
    if ( *v1 )
    {
      if ( *((_DWORD *)v1 + 2) && (*((_DWORD *)*v1 + 11) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v1);
        *((_DWORD *)*v1 + 11) &= ~2u;
        *((_DWORD *)v1 + 2) = 0;
      }
      v5 = *v1;
      v8 = 0;
      v6 = *(_QWORD *)v5;
      HmgDecrementExclusiveReferenceCountEx(v5, *((unsigned int *)v1 + 3), &v8);
      if ( v8 )
        GrepDeleteDC(v6, 0x2000000LL);
    }
    *v1 = 0LL;
  }
  return 1LL;
}
