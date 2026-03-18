/*
 * XREFs of ViErrorFinishReport @ 0x140A92D34
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
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140A92C94 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
    }
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
