unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 < 2 || a1 == -2LL || a1 == -1LL )
    return a1;
  else
    return *(_QWORD *)a1;
}
