/*
 * XREFs of CmpReparseToVirtualPath @ 0x140A17264
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x140A17B40 (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 184) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = CmpVirtualPathPresent(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v7;
}
