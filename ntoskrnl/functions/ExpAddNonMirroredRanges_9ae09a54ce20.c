__int64 __fastcall ExpAddNonMirroredRanges(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  __int64 v6; // rsi
  int *Pool2; // rax
  int *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rax

  v6 = a2;
  Pool2 = (int *)ExAllocatePool2(256LL, 16 * (a2 + 3LL), 0x4D72734Bu);
  v10 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 9;
    v12 = *Pool2;
    if ( a4 )
      v12 = 13;
    v10[1] = a2;
    *v10 = v12;
    v13 = v10 + 12;
    if ( a2 )
    {
      do
      {
        v14 = *a3;
        a3 += 2;
        *v13 = v14;
        v13 += 2;
        *(v13 - 1) = *(a3 - 1);
        --v6;
      }
      while ( v6 );
    }
    v11 = ZwManagePartition(a1, 0LL);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
