__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int64 *a12)
{
  unsigned int v12; // r14d
  __int64 i; // rdi
  unsigned int v17; // ecx
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  int Prcb; // eax
  _QWORD v21[2]; // [rsp+60h] [rbp-38h] BYREF
  int v22; // [rsp+B0h] [rbp+18h]

  v22 = a3;
  v12 = 0;
  v21[0] = 0LL;
  *a12 = -1LL;
  if ( a7 )
  {
    for ( i = a8 + 8; ; i += 24LL )
    {
      v17 = *(_DWORD *)(i - 8);
      if ( v17 == -1 )
        break;
      if ( v17 != *(_DWORD *)(a1 + 36) )
      {
        Prcb = KeGetPrcb(v17);
        result = PpmIdleCheckCoordinatedProcessorDependency(Prcb, a4, i, a11, (__int64)v21);
        goto LABEL_8;
      }
      v19 = -1LL;
      v21[0] = -1LL;
      result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, i, a9);
LABEL_9:
      if ( result )
        return result;
      a3 = v22;
      if ( *a12 < v19 )
        v19 = *a12;
      ++v12;
      *a12 = v19;
      if ( v12 >= a7 )
        return 0LL;
    }
    result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a6, a3, i, a9, a10, a11, (__int64)v21);
LABEL_8:
    v19 = v21[0];
    goto LABEL_9;
  }
  return 0LL;
}
