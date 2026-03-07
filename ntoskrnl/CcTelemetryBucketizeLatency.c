__int64 __fastcall CcTelemetryBucketizeLatency(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *i; // rcx

  result = 0LL;
  for ( i = CcLatencyBuckets; a1 > *i; i += 6 )
  {
    if ( a1 <= i[1] )
    {
      result = (unsigned int)(result + 1);
      goto LABEL_5;
    }
    if ( a1 <= i[2] )
    {
      result = (unsigned int)(result + 2);
      goto LABEL_5;
    }
    if ( a1 <= i[3] )
    {
      result = (unsigned int)(result + 3);
      goto LABEL_5;
    }
    if ( a1 <= i[4] )
    {
      result = (unsigned int)(result + 4);
      goto LABEL_5;
    }
    if ( a1 <= i[5] )
    {
      result = (unsigned int)(result + 5);
LABEL_5:
      if ( (unsigned int)result >= 0xC )
        return result;
      break;
    }
    result = (unsigned int)(result + 6);
    if ( (unsigned int)result >= 0xC )
      return result;
  }
  ++*(_QWORD *)(a2 + 8 * result);
  *(_QWORD *)(a3 + 8 * result) += a1;
  return result;
}
