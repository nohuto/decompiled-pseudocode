/*
 * XREFs of PsReplaceSiloContext @ 0x140905BA0
 * Callers:
 *     <none>
 * Callees:
 *     PspIsSiloContext @ 0x140715D14 (PspIsSiloContext.c)
 *     ObGetExtendedUserInfo @ 0x1408DD37C (ObGetExtendedUserInfo.c)
 *     PspStorageReplaceObject @ 0x14090F0C0 (PspStorageReplaceObject.c)
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
