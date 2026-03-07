__int64 __fastcall MiValidateMemoryRangeEntries(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v3 = a1;
  if ( a3 )
    *a3 = 0LL;
  v4 = 0LL;
  v5 = (unsigned __int64)&a1[2 * a2];
  if ( (unsigned __int64)a1 >= v5 )
  {
LABEL_9:
    if ( a3 )
      *a3 = v4;
    return 1LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = v3[1];
      if ( !v6 )
        return 0LL;
      if ( (unsigned __int64)(*v3 + v6 - 1) < *v3 )
        return 0LL;
      if ( (unsigned __int64)(v6 + *v3 - 1LL) > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v7 = v4 + ((v6 + (unsigned __int64)(*(_DWORD *)v3 & 0xFFF) + 4095) >> 12);
      if ( v7 < v4 )
        return 0LL;
      v3 += 2;
      v4 = v7;
      if ( (unsigned __int64)v3 >= v5 )
        goto LABEL_9;
    }
  }
}
