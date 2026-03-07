__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned __int16 *v5; // rdx

  v1 = *(_QWORD *)(a1 + 33968);
  v2 = *(_QWORD *)(a1 + 33976);
  if ( v1 && v2 )
  {
    if ( *(_BYTE *)(v2 + 100) )
    {
      v3 = *(_DWORD *)(v2 + 116);
    }
    else
    {
      v3 = *(_DWORD *)(v2 + 72);
      if ( v3 >= *(_DWORD *)(v1 + 516) )
        v3 = *(_DWORD *)(v1 + 516);
    }
  }
  else
  {
    v3 = 100;
  }
  result = 0LL;
  v5 = (unsigned __int16 *)(a1 + 34154);
  do
  {
    if ( v3 <= *v5 )
      break;
    result = (unsigned int)(result + 1);
    ++v5;
  }
  while ( (unsigned int)result < 3 );
  return result;
}
