/*
 * XREFs of IoGetInitiatorProcess @ 0x14032C4D0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14025FB40 (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x14036C690 (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
