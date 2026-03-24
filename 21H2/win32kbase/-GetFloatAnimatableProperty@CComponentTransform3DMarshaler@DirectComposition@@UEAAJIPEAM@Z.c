/*
 * XREFs of ?GetFloatAnimatableProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01E4BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx

  v3 = 0;
  if ( a2 > 9 )
  {
    v12 = a2 - 10;
    if ( !v12 )
    {
      *a3 = *((float *)this + 28);
      return v3;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v11 = *((_DWORD *)this + 29);
      goto LABEL_21;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v11 = *((_DWORD *)this + 30);
      goto LABEL_21;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v11 = *((_DWORD *)this + 31);
      goto LABEL_21;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v11 = *((_DWORD *)this + 32);
      goto LABEL_21;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v11 = *((_DWORD *)this + 33);
      goto LABEL_21;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      v11 = *((_DWORD *)this + 34);
      goto LABEL_21;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v11 = *((_DWORD *)this + 35);
      goto LABEL_21;
    }
    if ( v19 == 1 )
    {
      v11 = *((_DWORD *)this + 36);
      goto LABEL_21;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 9 )
  {
    v11 = *((_DWORD *)this + 27);
    goto LABEL_21;
  }
  if ( !a2 )
  {
    v11 = *((_DWORD *)this + 18);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v11 = *((_DWORD *)this + 19);
    goto LABEL_21;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v11 = *((_DWORD *)this + 20);
    goto LABEL_21;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = *((_DWORD *)this + 21);
    goto LABEL_21;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *((_DWORD *)this + 22);
    goto LABEL_21;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = *((_DWORD *)this + 23);
    goto LABEL_21;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = *((_DWORD *)this + 24);
    goto LABEL_21;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = *((_DWORD *)this + 25);
    goto LABEL_21;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741811;
  v11 = *((_DWORD *)this + 26);
LABEL_21:
  *(_DWORD *)a3 = v11;
  return v3;
}
