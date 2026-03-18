/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x14028F090
 * Callers:
 *     IopFreeIrpExtension @ 0x14028FCF8 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x14028CE0C (IopUnlockAndFreeMdl.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F044 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopIrpHasExtensionType @ 0x140290158 (IopIrpHasExtensionType.c)
 */

void __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _MDL *v4; // rcx

  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 9LL) && *(_QWORD *)(v2 + 112) )
  {
    v4 = *(struct _MDL **)(v2 + 8);
    if ( v4 )
    {
      IopUnlockAndFreeMdl(v4);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    IopFreeCopyObjectsFromDataBuffer(*(_QWORD *)(a1 + 112), 0, v3);
  }
}
