char __fastcall CCD_SET_STRING_ID::IsSubsetOf(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  unsigned __int16 v2; // ax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  struct _STRING v10; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 <= *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    v6 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      v7 = *((_QWORD *)this + 3);
      v11 = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(v7 + 8LL * v6 + 6), &v11);
      while ( v5 < *((unsigned __int16 *)a2 + 16) )
      {
        v8 = *((_QWORD *)a2 + 3);
        v10 = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(v8 + 8LL * v5 + 6), &v10);
        if ( !(unsigned int)CCD_SET_STRING_ID::_StringCompare(&v11, &v10) )
          break;
        ++v5;
      }
      if ( v5 >= *((unsigned __int16 *)a2 + 16) )
        break;
      if ( ++v6 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
