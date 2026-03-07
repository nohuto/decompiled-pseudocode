__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  __int64 v8; // r8
  int v10; // eax

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = HmgLock(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_WORD *)(v4 + 100) || !*(_QWORD *)(v4 + 192) || *(_DWORD *)(v4 + 216)) && (a1 & 0x800000) == 0 )
    {
      if ( *(_DWORD *)(v4 + 168) || (*(_DWORD *)(v4 + 112) & 0x80000800) != 0 || SURFACE::GetFirstLSurf((SURFACE *)v4) )
      {
        if ( !*(_DWORD *)(v5 + 168) )
        {
          v10 = *(_DWORD *)(v5 + 112);
          if ( (v10 & 0x800) == 0 && v10 >= 0 )
            SURFACE::GetFirstLSurf((SURFACE *)v5);
        }
      }
      else
      {
        v2 = a1 | 0x800000;
        v7 = Gre::Base::Globals(v6);
        if ( _InterlockedDecrement((volatile signed __int32 *)v7 + 1621) >= 0
          && (unsigned int)HmgLockAndModifyHandleType(v5, v2) )
        {
          if ( (*(_DWORD *)v5 & 0x800000) != 0 )
            *(_WORD *)(v5 + 102) |= 0x200u;
          LOBYTE(v8) = 5;
          *(_QWORD *)(v5 + 32) = v2;
          HmgSetOwner(v2, 0LL, v8);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v7 + 1621);
          v2 = 0LL;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  }
  return v2;
}
