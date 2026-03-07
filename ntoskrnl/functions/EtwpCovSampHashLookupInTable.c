__int64 __fastcall EtwpCovSampHashLookupInTable(__int64 a1, unsigned __int8 *a2, __int64 **a3)
{
  int v3; // edi
  __int64 v4; // r11
  int v5; // r10d
  __int64 v6; // rbx
  int v7; // r9d
  __int64 i; // rcx
  __int64 *v9; // rdx
  __int64 result; // rax

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 20) - 1;
  v6 = *(_QWORD *)a2;
  v7 = a2[7]
     + 37 * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * (a2[1] + 37 * (*a2 + 11623883)))))));
  for ( i = v7 & (unsigned int)v5; ; i = v5 & (unsigned int)(v3 + i) )
  {
    v9 = (__int64 *)(v4 + 8 * i);
    result = *v9;
    if ( *v9 == v6 )
      break;
    if ( !result )
      goto LABEL_9;
    if ( !v3 )
    {
      v3 = -1640531535 * v7 + 1;
      if ( ((-79 * (_BYTE)v7) & 1) != 0 )
        v3 = -1640531535 * v7;
    }
  }
  result = 1LL;
LABEL_9:
  *a3 = v9;
  return result;
}
