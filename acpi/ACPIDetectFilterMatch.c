__int64 __fastcall ACPIDetectFilterMatch(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned int *v6; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = a1;
  *a3 = 0LL;
  v6 = a2;
  if ( (v3 & 0x200000000000008LL) != 8 || *(_QWORD *)(a1 + 768) )
  {
    if ( a2 && *a2 )
    {
      do
      {
        if ( *(_QWORD *)(v5 + 784) == *(_QWORD *)&v6[2 * v4 + 2] )
          ACPIInternalClearFlags((void *)(v5 + 8), 256LL);
        ++v4;
      }
      while ( v4 < *v6 );
    }
    return 0LL;
  }
  else
  {
    result = ACPIDetectCouldExtensionBeInRelation(a1, a2, 1, 0, a3);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}
