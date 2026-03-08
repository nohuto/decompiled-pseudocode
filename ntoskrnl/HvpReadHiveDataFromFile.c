/*
 * XREFs of HvpReadHiveDataFromFile @ 0x140A1B288
 * Callers:
 *     HvpMapHiveImage @ 0x140A1B050 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpReadHiveDataFromFile(_QWORD *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  __int64 v8; // rcx

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v7 = *((_DWORD *)a1 + 6);
  if ( *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 7) <= v7 )
    v7 = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 7);
  if ( v7 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*a1 + 48LL))(
           *a1,
           *((unsigned int *)a1 + 2),
           *((unsigned int *)a1 + 3),
           a1[2],
           v7) >= 0 )
    {
      *((_DWORD *)a1 + 3) += v7;
      v8 = a1[2];
      *((_DWORD *)a1 + 7) += v7;
      *a2 = v8;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741491;
    }
  }
  else
  {
    return (unsigned int)-1073741807;
  }
  return v3;
}
