unsigned __int8 __fastcall VIDMM_PAGE_TABLE_BASE::IsResident(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 120) )
      return 1;
  }
  return result;
}
