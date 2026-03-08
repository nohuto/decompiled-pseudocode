/*
 * XREFs of PfSnScanCommandLine @ 0x1407E4F40
 * Callers:
 *     PfSnCalculateScenarioNameAndHash @ 0x1407E4DC0 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfSnHashUnsafeUnicodeString @ 0x1407895F0 (PfSnHashUnsafeUnicodeString.c)
 *     PfSnParsePrefetchParam @ 0x1407E4C2C (PfSnParsePrefetchParam.c)
 *     PfSnGetUnsafeProcessParameters @ 0x1407E4FFC (PfSnGetUnsafeProcessParameters.c)
 *     PfSnCaptureParamBlockString @ 0x1407E5060 (PfSnCaptureParamBlockString.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, unsigned int *a2, int a3)
{
  int v3; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v12[24]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)v12 = 0LL;
  v11 = 0LL;
  v3 = 0;
  v13 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters();
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v12);
  if ( (int)result >= 0 )
  {
    v9 = PfSnParsePrefetchParam(v12, &v13);
    v10 = v13;
    if ( v9 < 0 )
      v10 = 0;
    if ( !a3 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString(v12, &v11);
    if ( (int)result >= 0 )
    {
      v3 = v11;
LABEL_6:
      *a1 = v3;
      result = 0LL;
      *a2 = v10;
    }
  }
  return result;
}
