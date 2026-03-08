/*
 * XREFs of IopAddBootDiskInformation @ 0x140386334
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140B4CFA8 (IopGetBootDiskInformationLite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopAddBootDiskInformation(unsigned int *a1, __int64 a2)
{
  unsigned int i; // r8d
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 result; // rax

  for ( i = 0; i < *a1; ++i )
  {
    v4 = 7LL * i;
    v5 = *(_QWORD *)&a1[v4 + 1] - *(_QWORD *)a2;
    if ( !v5 )
    {
      v5 = *(_QWORD *)&a1[v4 + 3] - *(_QWORD *)(a2 + 8);
      if ( !v5 )
        v5 = *(_QWORD *)&a1[v4 + 5] - *(_QWORD *)(a2 + 16);
    }
    if ( !v5 )
      break;
  }
  v6 = 7LL * i;
  a1[v6 + 7] |= *(_DWORD *)(a2 + 24);
  result = *a1;
  if ( i == (_DWORD)result )
  {
    *a1 = result + 1;
    *(_OWORD *)&a1[v6 + 1] = *(_OWORD *)a2;
    *(_QWORD *)&a1[v6 + 5] = *(_QWORD *)(a2 + 16);
    result = *(unsigned int *)(a2 + 24);
    a1[v6 + 7] = result;
  }
  return result;
}
