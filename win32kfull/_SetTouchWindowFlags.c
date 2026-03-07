__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5LL);
  InternalRemoveProp(a1, (unsigned __int16)gatomTouchFlags, 1LL);
  return 1LL;
}
