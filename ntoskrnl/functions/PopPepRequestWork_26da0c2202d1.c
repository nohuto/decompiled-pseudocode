__int64 __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a3 > a2 )
  {
    v3 = (*(_DWORD *)(a1 + 24) >> 5) & 1;
    v4 = a3 - a2;
    if ( v4 )
    {
      v5 = v4;
      do
      {
        result = PopFxRequestWorkerInternal(0LL, v3);
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
