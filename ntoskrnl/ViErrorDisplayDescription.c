/*
 * XREFs of ViErrorDisplayDescription @ 0x140AD06D0
 * Callers:
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CDA88 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CDB1C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC0390 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140ACF214 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140ACF398 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD0564 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD05FC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE0BA0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE0D50 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE0EA0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
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
