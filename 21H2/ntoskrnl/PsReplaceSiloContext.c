/*
 * XREFs of PsReplaceSiloContext @ 0x140905D00
 * Callers:
 *     <none>
 * Callees:
 *     PspIsSiloContext @ 0x1406C4364 (PspIsSiloContext.c)
 *     ObGetExtendedUserInfo @ 0x1408DD4DC (ObGetExtendedUserInfo.c)
 *     PspStorageReplaceObject @ 0x14090F220 (PspStorageReplaceObject.c)
 */

__int64 __fastcall PsReplaceSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r11
  _QWORD *ExtendedUserInfo; // rax
  __int64 v7; // r10

  if ( !PspIsSiloContext(a3) )
    return PspStorageReplaceObject(v5, a2);
  ExtendedUserInfo = (_QWORD *)ObGetExtendedUserInfo(v4);
  if ( *ExtendedUserInfo == v7 )
    return PspStorageReplaceObject(v5, a2);
  else
    return 3221225485LL;
}
