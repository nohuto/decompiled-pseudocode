/*
 * XREFs of ViErrorDisplayDescription @ 0x1409D9208
 * Callers:
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A21CC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A2260 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A2304 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C8540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C8810 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D7224 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D9020 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D90B8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D9140 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E86D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E8880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E89D0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
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
