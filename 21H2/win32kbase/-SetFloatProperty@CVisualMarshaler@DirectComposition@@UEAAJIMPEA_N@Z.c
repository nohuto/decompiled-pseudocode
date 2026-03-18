/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0085FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NI@Z @ 0x1C00861B4 (-HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NI@Z.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // esi
  int v7; // edi
  bool v8; // al
  unsigned int v9; // edx
  float v11; // xmm1_4

  v4 = 0;
  if ( a2 == 32 )
  {
    v7 = 0x1000000;
    if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
      goto LABEL_29;
    }
    goto LABEL_11;
  }
  if ( a2 > 0x20 )
  {
    switch ( a2 )
    {
      case '!':
        v7 = 0x1000000;
        if ( *((float *)this + 26) != a3 )
        {
          *((float *)this + 26) = a3;
          goto LABEL_29;
        }
        goto LABEL_11;
      case '"':
        v7 = 0x1000000;
        if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_29;
        }
        goto LABEL_11;
      case '#':
        v7 = 0x2000000;
        if ( *((float *)this + 28) != a3 )
        {
          *((float *)this + 28) = a3;
          goto LABEL_29;
        }
        goto LABEL_11;
      case '$':
        v7 = 0x2000000;
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_29;
        }
        goto LABEL_11;
      case '-':
        v7 = 0x40000000;
        if ( *((float *)this + 31) != a3 )
        {
          *((float *)this + 31) = a3;
          goto LABEL_29;
        }
        goto LABEL_11;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0u:
      v7 = 128;
      if ( *((float *)this + 20) != a3 )
      {
        *((float *)this + 20) = a3;
        goto LABEL_29;
      }
LABEL_11:
      v8 = 0;
      goto LABEL_12;
    case 1u:
      v7 = 128;
      if ( *((float *)this + 21) != a3 )
      {
        *((float *)this + 21) = a3;
        goto LABEL_29;
      }
      goto LABEL_11;
    case 2u:
      v7 = 128;
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
        goto LABEL_29;
      }
      goto LABEL_11;
    case 0x18u:
      v7 = 0x200000;
      if ( *((float *)this + 23) != a3 )
      {
        *((float *)this + 23) = a3;
        goto LABEL_29;
      }
      goto LABEL_11;
  }
  if ( a2 != 25 )
  {
    if ( a2 == 26 )
    {
      v7 = 0x400000;
      v11 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 30) != v11 )
      {
        *((float *)this + 30) = v11;
        goto LABEL_29;
      }
      goto LABEL_11;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v7 = 0x200000;
  if ( *((float *)this + 24) == a3 )
    goto LABEL_11;
  *((float *)this + 24) = a3;
LABEL_29:
  v8 = 1;
LABEL_12:
  *a4 = v8;
  if ( DirectComposition::CResourceMarshaler::HasAnimations(this, a2) )
    *a4 = 1;
  if ( v9 <= 2 || v9 - 24 <= 2 )
  {
    *a4 = 1;
LABEL_18:
    *((_DWORD *)this + 4) |= v7;
    return v4;
  }
  if ( *a4 )
    goto LABEL_18;
  return v4;
}
