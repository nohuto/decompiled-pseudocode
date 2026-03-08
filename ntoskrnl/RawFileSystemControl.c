/*
 * XREFs of RawFileSystemControl @ 0x1406F36F8
 * Callers:
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RawVerifyVolume @ 0x1405A483C (RawVerifyVolume.c)
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 *     RawUserFsCtrl @ 0x14087D8B4 (RawUserFsCtrl.c)
 */

__int64 __fastcall RawFileSystemControl(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
    {
      v4 = RawMountVolume(a3);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 1) != 2 )
      {
        v5 = -1073741808;
        goto LABEL_5;
      }
      v4 = RawVerifyVolume(a3, a1);
    }
  }
  else
  {
    v4 = RawUserFsCtrl(a2, a3, a1);
  }
  v5 = v4;
LABEL_5:
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return v5;
}
