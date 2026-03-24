/*
 * XREFs of ViErrorDisplayDescription @ 0x1409D8218
 * Callers:
 *     ViErrorReport1 @ 0x1405A1E58 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A1EDC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A1F70 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2014 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C7820 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D6234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D8030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D80C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D8150 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E76E0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E7890 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E79E0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405A0634 (VfUtilDbgPrint.c)
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
