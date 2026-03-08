/*
 * XREFs of PiLookupInDDB @ 0x14079DE5C
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14079DC60 (PpCheckInDriverDatabase.c)
 * Callees:
 *     PiReleaseDDB @ 0x14079C824 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 */

__int64 __fastcall PiLookupInDDB(int a1, int a2, int a3, __int64 a4)
{
  PVOID v4; // rdi
  int v6; // ecx
  int IsDriverBlocked; // ebx
  _OWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = PpDDBPatchHandle;
  v6 = (int)PpDDBHandle;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvmain.sdb", 0, (__int64)v12);
    if ( IsDriverBlocked < 0 )
      goto LABEL_6;
    v6 = v12[0];
  }
  IsDriverBlocked = PiIsDriverBlocked(v6, a1, a2, a3, a4);
  if ( IsDriverBlocked < 0 )
    goto LABEL_6;
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", 1, (__int64)v13);
    if ( IsDriverBlocked < 0 )
    {
      IsDriverBlocked = 0;
      goto LABEL_6;
    }
    v4 = *(PVOID *)&v13[0];
  }
  if ( v4 )
    IsDriverBlocked = PiIsDriverBlocked((_DWORD)v4, a1, a2, a3, a4);
LABEL_6:
  if ( *(_QWORD *)&v12[0] )
    PiReleaseDDB((__int64)v12);
  if ( *(_QWORD *)&v13[0] )
    PiReleaseDDB((__int64)v13);
  return (unsigned int)IsDriverBlocked;
}
