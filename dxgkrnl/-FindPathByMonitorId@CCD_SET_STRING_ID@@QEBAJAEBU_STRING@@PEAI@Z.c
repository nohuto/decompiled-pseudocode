/*
 * XREFs of ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C03B7B18
 * Callers:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C03B7DB8 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C01BAF3C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C01BF18C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::FindPathByMonitorId(
        CCD_SET_STRING_ID *this,
        const struct _STRING *a2,
        unsigned int *a3)
{
  PCHAR Buffer; // r8
  unsigned int v7; // ebx
  struct _STRING v9; // [rsp+30h] [rbp-18h] BYREF

  Buffer = a2->Buffer;
  if ( Buffer && a2->Length && a3 )
  {
    v7 = 0;
    if ( *((_WORD *)this + 16) )
    {
      while ( 1 )
      {
        v9 = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(this, v7, &v9);
        if ( !CCD_SET_STRING_ID::_StringCompare(a2, &v9) )
          break;
        if ( ++v7 >= *((unsigned __int16 *)this + 16) )
          return 3221226021LL;
      }
      *a3 = v7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    WdLogSingleEntry4(1LL, this, Buffer, a2->Length, a3);
    return 3221225485LL;
  }
}
