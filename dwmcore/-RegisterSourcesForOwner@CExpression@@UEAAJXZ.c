__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  CExpression *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v10; // ecx

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 56);
  v2 = this;
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 110) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v2 + 54);
      v5 = *(_DWORD *)(v4 + 24 * v3 + 20);
      if ( v5 >= *((_DWORD *)v2 + 106) )
        break;
      LODWORD(this) = *(_DWORD *)(v4 + 24 * v3 + 20);
      v6 = *(_QWORD *)(*((_QWORD *)v2 + 52) + 8LL * v5);
      if ( v6 )
      {
        this = *(CExpression **)(v6 + 16);
        if ( this )
        {
          v7 = CResource::AddSourceAnimation(this, v1, *(_DWORD *)(v4 + 24 * v3));
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v7, 0x188u, 0LL);
            goto LABEL_14;
          }
          *((_BYTE *)v2 + 456) |= 2u;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)v2 + 110) )
        return 0;
    }
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x17Fu, 0LL);
LABEL_14:
    v8 = v7;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x15Au, 0LL);
  }
  else
  {
    return 0;
  }
  return v8;
}
