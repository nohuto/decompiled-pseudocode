__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( !qword_1C02D55D0 || (int)qword_1C02D55D0() < 0 )
    return 0LL;
  if ( qword_1C02D55D8 )
    return (unsigned int)qword_1C02D55D8();
  return v1;
}
