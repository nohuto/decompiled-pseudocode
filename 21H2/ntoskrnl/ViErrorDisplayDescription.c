/*
 * XREFs of ViErrorDisplayDescription @ 0x1409D8208
 * Callers:
 *     ViErrorReport1 @ 0x1405A1F18 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1F9C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2030 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A20D4 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7810 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D6224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8140 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E76D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405A06F4 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
}
