/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x14056D590
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14056CB0C (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x14056CBE4 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  __int64 *i; // r9

  result = qword_140C24988;
  if ( qword_140C24988 < a1 )
  {
    v3 = a1 - qword_140C24988;
    qword_140C24990 += a1 - qword_140C24988;
    if ( a1 - qword_140C24988 < a2 )
    {
      qword_140C24998 += v3;
    }
    else
    {
      v4 = 0LL;
      for ( i = PopFxAccountingBucketLimits; ; ++i )
      {
        if ( v3 >= *i )
        {
          result = (unsigned int)(v4 + 1);
          if ( v3 < PopFxAccountingBucketLimits[result] )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 5 )
          return result;
      }
      ++*(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 32];
      *(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 72] += v3;
    }
  }
  return result;
}
