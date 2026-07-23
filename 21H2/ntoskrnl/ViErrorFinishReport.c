/*
 * XREFs of ViErrorFinishReport @ 0x1409D925C
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
 *     DbgPrompt @ 0x1405857A0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409D91BC (VfErrorStoreTriageInformation.c)
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
