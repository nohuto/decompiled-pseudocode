char __fastcall vConvertAndSaveBGRATo8(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  unsigned __int8 *Xlate555; // rax
  const unsigned __int8 *v10; // rbp
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi

  v6 = a4;
  v8 = a3;
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  v10 = Xlate555;
  if ( Xlate555 )
  {
    v11 = (_BYTE *)(a1 + v6);
    v12 = &v11[v8];
    while ( v11 != v12 )
    {
      LOBYTE(Xlate555) = XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2);
      *v11 = (_BYTE)Xlate555;
      ++a2;
      ++v11;
    }
  }
  return (char)Xlate555;
}
