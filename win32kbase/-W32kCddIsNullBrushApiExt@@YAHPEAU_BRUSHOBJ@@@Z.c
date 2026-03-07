__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02D5770 && (int)qword_1C02D5770() >= 0 && qword_1C02D5778 )
    return (unsigned int)qword_1C02D5778(a1);
  return v1;
}
