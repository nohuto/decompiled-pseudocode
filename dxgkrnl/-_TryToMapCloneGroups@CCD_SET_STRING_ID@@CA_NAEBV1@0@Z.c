char __fastcall CCD_SET_STRING_ID::_TryToMapCloneGroups(
        const struct CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2)
{
  int v2; // esi
  unsigned int v5; // ebx
  int v6; // r14d
  int PathByMonitorId; // eax
  __int64 v8; // rcx
  struct _STRING v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = -1;
  v5 = 0;
  v6 = -1;
  if ( !*((_WORD *)this + 16) )
    return 1;
  while ( !*(_WORD *)(*((_QWORD *)this + 3) + 8LL * v5 + 4) )
  {
    v10 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, v5, &v10);
    v11 = 0;
    PathByMonitorId = CCD_SET_STRING_ID::FindPathByMonitorId(a2, &v10, &v11);
    if ( PathByMonitorId < 0 )
    {
      if ( PathByMonitorId != -1073741275 )
        WdLogSingleEntry0(1LL);
      return 0;
    }
    v8 = *((_QWORD *)a2 + 3);
    if ( v2 == *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v5 + 2) )
    {
      if ( v6 != *(unsigned __int16 *)(v8 + 8LL * v11 + 2) )
        return 0;
    }
    else
    {
      v6 = *(unsigned __int16 *)(v8 + 8LL * v11 + 2);
      v2 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v5 + 2);
    }
    if ( ++v5 >= *((unsigned __int16 *)this + 16) )
      return 1;
  }
  return 0;
}
