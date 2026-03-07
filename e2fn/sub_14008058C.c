_QWORD *__fastcall sub_14008058C(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  __int64 v5; // rdx
  __int64 Pool2; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = 0;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = a2[3];
  if ( v5 && (Pool2 = ExAllocatePool2(64LL, v5, 1802921315LL), (a1[1] = Pool2) != 0LL) )
  {
    a1[3] = a2[3];
    v7 = a2[2];
    a1[2] = v7;
    if ( v7 )
    {
      v8 = 0LL;
      do
      {
        ++v2;
        *(_BYTE *)(v8 + a1[1]) = *(_BYTE *)(v8 + a2[1]);
        ++v8;
      }
      while ( (unsigned __int64)v2 < a1[2] );
    }
  }
  else
  {
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return a1;
}
