/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x1409B90AC
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E218C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSidEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // r8

  Pool2 = ExAllocatePool2(65LL, 16LL, 1649439826LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_BYTE *)Pool2 = 1;
  v9 = 2LL;
  *(_DWORD *)(Pool2 + 2) = *(_DWORD *)a1;
  v10 = Pool2 - (_QWORD)a3;
  *(_WORD *)(Pool2 + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Pool2 + 1) = 2;
  do
  {
    *(_DWORD *)((char *)a3 + v10 + 8) = *a3;
    ++a3;
    --v9;
  }
  while ( v9 );
  *a4 = Pool2;
  return 0LL;
}
