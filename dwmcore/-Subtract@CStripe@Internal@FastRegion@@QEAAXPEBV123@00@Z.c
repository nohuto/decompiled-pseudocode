/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180046F28
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180046BB8 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  int *v5; // r9
  char *v6; // r10
  int *v7; // rdx
  char *v8; // r8
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // r11d
  int *v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // r11d
  int v16; // r11d

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (int *)((char *)a3 + *((int *)a3 + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  v9 = (_DWORD *)((char *)this + *((int *)this + 1));
LABEL_2:
  if ( v5 == (int *)v6 )
    goto LABEL_13;
  if ( v7 == (int *)v8 )
    goto LABEL_21;
LABEL_4:
  v10 = *v5;
  v11 = *v7;
  if ( *v5 >= *v7 )
  {
    v12 = v7 + 1;
    if ( v11 < v10 )
      goto LABEL_24;
    v13 = *v12;
LABEL_7:
    ++v5;
    goto LABEL_8;
  }
  ++v5;
  *v9++ = v10;
  do
  {
    v14 = *v5;
    v15 = *v7;
    if ( *v5 < *v7 )
    {
      *v9 = v14;
      ++v5;
      ++v9;
      if ( v5 == (int *)v6 )
        goto LABEL_13;
      goto LABEL_4;
    }
    v12 = v7 + 1;
    if ( v15 >= v14 )
    {
      *v9++ = v14;
    }
    else
    {
      *v9++ = v15;
      v13 = *v12;
LABEL_8:
      if ( *v5 >= v13 )
      {
        v7 = v12 + 1;
        if ( v13 < *v5 )
        {
          *v9 = v13;
          goto LABEL_19;
        }
        ++v5;
        goto LABEL_2;
      }
    }
    if ( ++v5 == (int *)v6 )
      goto LABEL_13;
LABEL_24:
    v16 = *v5;
    v13 = *v12;
    if ( *v5 < *v12 )
      goto LABEL_7;
    v7 = v12 + 1;
    if ( v13 < v16 )
    {
      if ( v7 == (int *)v8 )
        break;
      goto LABEL_4;
    }
    ++v5;
    *v9 = v16;
LABEL_19:
    ++v9;
  }
  while ( v7 != (int *)v8 );
  while ( v5 != (int *)v6 )
LABEL_21:
    *v9++ = *v5++;
LABEL_13:
  *((_DWORD *)this + 3) = (_DWORD)v9 - ((_DWORD)this + 8);
}
