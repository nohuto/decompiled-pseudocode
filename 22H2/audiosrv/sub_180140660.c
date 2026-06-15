/*
 * XREFs of sub_180140660 @ 0x180140660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18013EC44 @ 0x18013EC44 (sub_18013EC44.c)
 */

__int64 __fastcall sub_180140660(__int64 a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-2147467261;
  if ( *a2 >= 3 )
    return (unsigned int)-2147024809;
  v7 = sub_180055F40(0x438uLL);
  v8 = v7;
  if ( v7 )
  {
    *v7 = off_18014B3E0;
    v7[1] = *(_QWORD *)a2;
    *((_DWORD *)v7 + 4) = a3;
    *((_DWORD *)v7 + 5) = 0;
    *((_DWORD *)v7 + 268) = 0;
    memset(v7 + 3, 0, 0x418uLL);
    *v8 = off_1801563E0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return (unsigned int)-2147024882;
  v9 = sub_18013EC44(a1, (__int64)v8);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !a3 )
    return v3;
  v10 = sub_180055F40(0x438uLL);
  v11 = v10;
  if ( v10 )
  {
    *v10 = off_18014B3E0;
    v10[1] = *(_QWORD *)a2;
    v10[2] = 0LL;
    *((_DWORD *)v10 + 268) = 3;
    memset(v10 + 3, 0, 0x418uLL);
    *v11 = off_1801563C0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return (unsigned int)-2147024882;
  v9 = sub_18013EC44(a1, (__int64)v11);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v12 = sub_180055F40(0x438uLL);
  v13 = v12;
  if ( v12 )
  {
    *v12 = off_18014B3E0;
    v12[1] = *(_QWORD *)a2;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 268) = 2;
    memset(v12 + 3, 0, 0x418uLL);
    *v13 = off_1801563B0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    return (unsigned int)-2147024882;
  v14 = sub_18013EC44(a1, (__int64)v13);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v3;
}
