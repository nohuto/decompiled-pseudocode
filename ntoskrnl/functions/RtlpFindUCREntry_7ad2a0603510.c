_QWORD *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  int v3; // r10d
  __int64 *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rcx

  v3 = a1;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)", a2, a2);
    RtlpHeapHandleError();
  }
  v4 = *(__int64 **)(a1 + 320);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 + 2);
    v6 = a2 >> 12;
    while ( v6 >= v5 )
    {
      v7 = (__int64 *)*v4;
      if ( !*v4 )
      {
        LODWORD(v6) = *((_DWORD *)v4 + 2) - 1;
        return (_QWORD *)RtlpHeapFindListLookupEntry(v3, (_DWORD)v4, 0, v6, a2);
      }
      v4 = (__int64 *)*v4;
      v5 = *((unsigned int *)v7 + 2);
    }
    return (_QWORD *)RtlpHeapFindListLookupEntry(v3, (_DWORD)v4, 0, v6, a2);
  }
  else
  {
    v9 = (_QWORD *)(a1 + 240);
    for ( result = (_QWORD *)*v9; v9 != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return v9;
  }
}
