/*
 * XREFs of ViErrorDisplayDescription @ 0x140A92CE0
 * Callers:
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405FFBC8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405FFC5C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405FFD00 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140A82730 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140A82A00 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140A91824 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140A919A8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140A92B74 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140A92C0C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AA0A20 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AA0BD0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AA0D20 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
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
