/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1402468AC
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D5020 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x14076C2E4 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerBlockGetValueOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  size_t *v4; // r10
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  pcbLength = 0LL;
  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 6), a3 - 6, &pcbLength);
  if ( result >= 0 )
  {
    if ( pcbLength + 8 < pcbLength )
    {
      return -1073741675;
    }
    else
    {
      *v4 = (pcbLength + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0;
    }
  }
  return result;
}
