__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r10d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a1[4];
  --a1[2];
  v4 = a1[1];
  if ( a2 == &a1[v2 * *a1 + 16] )
  {
    result = (v2 + 1) / v4;
    a1[4] = (v2 + 1) % v4;
  }
  else
  {
    result = (unsigned int)((int)(v4 + a1[3] - 1) / (int)v4);
    a1[3] = (int)(v4 + a1[3] - 1) % (int)v4;
  }
  return result;
}
