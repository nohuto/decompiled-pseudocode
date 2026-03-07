void __fastcall EXLATEOBJ::vAltUnlock(Gre::Base **this)
{
  Gre::Base *v2; // rcx
  int v3; // eax

  v2 = *this;
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 + 9);
    if ( v3 >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v2) + 8 * *((int *)*this + 9) + 1658);
    }
    else if ( v3 == -1 )
    {
      FreeThreadBufferWithTag(v2);
    }
  }
}
