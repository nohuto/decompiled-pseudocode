__int64 __fastcall DMMVIDPNSOURCEMODESET::UnpinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( *((_QWORD *)this + 18) )
    {
      *((_QWORD *)this + 18) = 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      return 1075708679LL;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    return 3223192352LL;
  }
  return result;
}
