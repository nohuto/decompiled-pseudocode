/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x1402F98FC
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x1402B18FC (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1402F9948 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopUnlockAndFreeMdl @ 0x1402F9CA8 (IopUnlockAndFreeMdl.c)
 */

unsigned __int8 __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  unsigned __int8 result; // al
  __int64 v3; // rcx
  struct _MDL *v4; // rcx

  result = IopIrpHasExtensionType(a1, 9u);
  if ( result && *(_QWORD *)(v3 + 112) )
  {
    v4 = *(struct _MDL **)(v3 + 8);
    if ( v4 )
    {
      IopUnlockAndFreeMdl(v4);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    return IopFreeCopyObjectsFromDataBuffer(*(_QWORD *)(a1 + 112), 0LL);
  }
  return result;
}
