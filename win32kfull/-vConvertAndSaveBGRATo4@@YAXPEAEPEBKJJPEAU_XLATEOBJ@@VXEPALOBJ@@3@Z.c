char __fastcall vConvertAndSaveBGRATo4(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  char v5; // bl
  char *v8; // rsi
  const unsigned __int8 *Xlate555; // rax
  const unsigned __int8 *v10; // r12
  char v11; // bl
  unsigned __int64 v12; // rbp
  char v13; // bl
  char v14; // bl

  v5 = a4;
  v8 = (char *)(a1 + ((__int64)a4 >> 1));
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  v10 = Xlate555;
  if ( Xlate555 && a3 )
  {
    if ( (v5 & 1) != 0 )
    {
      v11 = *v8;
      LOBYTE(Xlate555) = XLATEOBJ_BGR32ToPalSurf(a5, Xlate555, *a2++);
      LOBYTE(Xlate555) = v11 & 0xF0 | (unsigned __int8)Xlate555;
      *v8++ = (char)Xlate555;
      --a3;
    }
    if ( a3 >= 2 )
    {
      v12 = (unsigned __int64)(unsigned int)a3 >> 1;
      a3 -= 2 * ((unsigned int)a3 >> 1);
      do
      {
        v13 = 16 * XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2);
        LOBYTE(Xlate555) = v13 | XLATEOBJ_BGR32ToPalSurf(a5, v10, a2[1]);
        a2 += 2;
        *v8++ = (char)Xlate555;
        --v12;
      }
      while ( v12 );
    }
    if ( a3 )
    {
      v14 = *v8;
      LOBYTE(Xlate555) = v14 & 0xF | (16 * XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2));
      *v8 = (char)Xlate555;
    }
  }
  return (char)Xlate555;
}
