void __fastcall Base853Encoder::EnsureZeroesAreSerialized(Base853Encoder *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)this;
    if ( v2 == 1 )
    {
      LOBYTE(a2) = 45;
    }
    else
    {
      if ( v2 != 2 )
      {
        LOBYTE(a2) = 61;
        std::string::push_back(v4, a2);
        Base853Encoder::AppendVarInt(this, v2);
        return;
      }
      LOBYTE(a2) = 95;
    }
    std::string::push_back(v4, a2);
  }
}
