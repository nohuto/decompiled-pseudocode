void __fastcall EXFORMOBJ::vComputeAccelFlags(float **this, int a2)
{
  float *v3; // rax
  float *v4; // rax
  float *v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  EFLOAT *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  *((_DWORD *)*this + 8) = a2;
  v3 = *this;
  if ( !*((_DWORD *)*this + 6) && !*((_DWORD *)v3 + 7) )
    *((_DWORD *)v3 + 8) |= 0x40u;
  v4 = *this;
  if ( (*this)[1] == 0.0 && v4[2] == 0.0 )
  {
    *((_DWORD *)v4 + 8) |= 1u;
    v5 = *this;
    if ( a2 == 8 )
    {
      if ( *v5 != 16.0 )
        return;
      v6 = EFLOAT::bIs16((EFLOAT *)(v5 + 3));
    }
    else
    {
      v8 = (EFLOAT *)*this;
      if ( a2 == 32 )
      {
        if ( !EFLOAT::bIs1(v8) )
          return;
        v6 = EFLOAT::bIs1((EFLOAT *)(v10 + 12));
      }
      else
      {
        if ( !(unsigned int)EFLOAT::bIs1Over16(v8) )
          return;
        v6 = EFLOAT::bIs1Over16((EFLOAT *)(v9 + 12));
      }
    }
    if ( v6 )
      *(_DWORD *)(v7 + 32) |= 2u;
  }
}
