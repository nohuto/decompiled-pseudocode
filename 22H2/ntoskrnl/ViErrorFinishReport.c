/*
 * XREFs of ViErrorFinishReport @ 0x1409D826C
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
 *     DbgPrompt @ 0x1405854B0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405A0634 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409D81CC (VfErrorStoreTriageInformation.c)
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
