__int64 **__fastcall PopPrepChildWake(__int64 *a1, __int64 a2, char a3)
{
  __int64 **result; // rax
  __int64 *v5; // rax
  __int64 **v6; // rdx
  __int64 v7; // rdx

  if ( !a3 || (result = (__int64 **)*((unsigned int *)a1 + 150), ((unsigned int)result & 0x30000) != 0) )
  {
    result = (__int64 **)*((unsigned int *)a1 + 24);
    if ( *((_DWORD *)a1 + 25) == (_DWORD)result )
    {
      v5 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1
        || (v6 = (__int64 **)a1[1], *v6 != a1)
        || (*v6 = v5,
            v5[1] = (__int64)v6,
            v7 = a2 + 72 * (*((unsigned __int8 *)a1 + 56) + 1LL),
            result = *(__int64 ***)(v7 + 8),
            *result != (__int64 *)v7) )
      {
        __fastfail(3u);
      }
      *a1 = v7;
      a1[1] = (__int64)result;
      *result = a1;
      *(_QWORD *)(v7 + 8) = a1;
    }
    --*((_DWORD *)a1 + 25);
  }
  return result;
}
