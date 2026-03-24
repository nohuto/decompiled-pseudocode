/*
 * XREFs of ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C02F0EEC
 * Callers:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C02F112C (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C013AEBC (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C0141DFC (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::FindPathByMonitorId(
        CCD_SET_STRING_ID *this,
        const struct _STRING *a2,
        unsigned int *a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax
  struct _STRING v9; // [rsp+20h] [rbp-18h] BYREF

  if ( a2->Buffer && a2->Length && a3 )
  {
    v6 = 0;
    if ( *((_WORD *)this + 16) )
    {
      while ( 1 )
      {
        v9 = 0LL;
        CCD_SET_STRING_ID::QueryMonitorId(this, v6, &v9);
        if ( !CCD_SET_STRING_ID::_StringCompare(a2, &v9) )
          break;
        if ( ++v6 >= *((unsigned __int16 *)this + 16) )
          return 3221226021LL;
      }
      *a3 = v6;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
    v8[4] = a2->Buffer;
    v8[5] = a2->Length;
    v8[3] = this;
    v8[6] = a3;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
