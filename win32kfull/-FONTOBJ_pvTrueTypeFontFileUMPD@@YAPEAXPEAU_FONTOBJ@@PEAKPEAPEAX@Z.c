void *__fastcall FONTOBJ_pvTrueTypeFontFileUMPD(struct _FONTOBJ *a1, unsigned int *a2, void **a3)
{
  void *v3; // rbx
  struct _FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a2 = 0;
  v5 = a1;
  if ( a1 )
    v3 = RFONTOBJ::pvFileUMPD((RFONTOBJ *)&v5, a2, a3);
  else
    v3 = 0LL;
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
