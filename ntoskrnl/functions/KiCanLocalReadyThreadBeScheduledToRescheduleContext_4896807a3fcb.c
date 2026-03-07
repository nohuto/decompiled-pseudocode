__int64 __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // r10d
  unsigned int v9; // eax
  __int64 v10; // rbx
  int v11; // esi
  unsigned __int8 *v12; // r14
  int v14; // esi

  v6 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v6 > *((_DWORD *)a1 + 2) )
    return 0LL;
  if ( v6 < *((_DWORD *)a1 + 1) )
    v6 = *((_DWORD *)a1 + 1);
  LOBYTE(v9) = *a1;
  v10 = 0LL;
  v11 = 0;
  if ( v6 )
  {
    if ( !(_BYTE)v9 )
    {
LABEL_16:
      v14 = 0;
      if ( !(_BYTE)v9 )
        return v10;
      while ( 1 )
      {
        v12 = &a1[40 * v14];
        if ( (unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v12 + 16, a2, a3, a4) )
          break;
        if ( ++v14 >= (unsigned int)*a1 )
          return v10;
      }
      return *((_QWORD *)v12 + 2);
    }
    while ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(&a1[32 * v11 + 16 + 8 * v11], a2, 0LL) )
    {
      v9 = *a1;
      if ( ++v11 >= v9 )
        goto LABEL_16;
    }
  }
  else if ( (_BYTE)v9 )
  {
    while ( 1 )
    {
      v12 = &a1[40 * v11];
      if ( (unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v12 + 16, a2, a3, a4) )
      {
        if ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v12 + 16, a2, 0LL) )
          break;
      }
      if ( ++v11 >= (unsigned int)*a1 )
        return v10;
    }
    return *((_QWORD *)v12 + 2);
  }
  return v10;
}
