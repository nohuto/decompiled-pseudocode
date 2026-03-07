__int64 __fastcall PopulateUMKMHandlePair(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0LL;
  if ( a1 )
  {
    result = ConvertUserToKernelFileHandle(a1, (char *)a2 + 8);
    if ( (int)result >= 0 )
      *(_QWORD *)a2 = a1;
  }
  return result;
}
