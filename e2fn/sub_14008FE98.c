_QWORD *__fastcall sub_14008FE98(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 Pool2; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = 0;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = a2[3];
  if ( !v5 )
    goto LABEL_9;
  v6 = 4 * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v6 = -1LL;
  Pool2 = ExAllocatePool2(64LL, v6, 1802921315LL);
  a1[1] = Pool2;
  if ( Pool2 )
  {
    a1[3] = a2[3];
    v8 = a2[2];
    a1[2] = v8;
    if ( v8 )
    {
      v9 = 0LL;
      do
      {
        ++v2;
        *(_DWORD *)(v9 + a1[1]) = *(_DWORD *)(v9 + a2[1]);
        v9 += 4LL;
      }
      while ( (unsigned __int64)v2 < a1[2] );
    }
  }
  else
  {
LABEL_9:
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return a1;
}
