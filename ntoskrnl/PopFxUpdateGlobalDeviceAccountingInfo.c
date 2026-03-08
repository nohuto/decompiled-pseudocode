/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x140589EEC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1405895A4 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x140589680 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 *i; // r9
  __int64 v6; // rdx

  result = qword_140C3EA68;
  if ( qword_140C3EA68 < a1 )
  {
    v3 = a1 - qword_140C3EA68;
    qword_140C3EA70 += v3;
    if ( v3 < a2 )
    {
      qword_140C3EA78 += v3;
    }
    else
    {
      v4 = 0;
      for ( i = PopFxAccountingBucketLimits; ; ++i )
      {
        v6 = v4 + 1;
        if ( v3 >= *i && v3 < PopFxAccountingBucketLimits[v6] )
          break;
        ++v4;
        if ( (unsigned int)v6 >= 5 )
          return result;
      }
      result = v4;
      ++*(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 32];
      *(_QWORD *)&PopFxGlobalDeviceAccountingInfo[8 * v4 + 72] += v3;
    }
  }
  return result;
}
