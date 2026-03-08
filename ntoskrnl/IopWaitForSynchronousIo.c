/*
 * XREFs of IopWaitForSynchronousIo @ 0x140299468
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopCheckIrpCancelled @ 0x140552B98 (IopCheckIrpCancelled.c)
 *     IopCancelAlertedRequest @ 0x14094140C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  _BYTE *v3; // rdi
  int v4; // esi
  NTSTATUS v9; // eax

  v3 = a2 + 38;
  v4 = a2[20] & 4;
  while ( (*v3 & 0x7F) != 0 || !a2[39] )
  {
    v9 = KeWaitForSingleObject(v3, Executive, v4 != 0 ? a3 : 0, 1u, 0LL);
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( v4
      || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
      || (unsigned __int8)IopCheckIrpCancelled(v3, Irp) )
    {
      IopCancelAlertedRequest(v3, Irp);
      return a2[14];
    }
  }
  return a2[14];
}
