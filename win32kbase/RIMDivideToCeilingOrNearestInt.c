/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C00F1096
 * Callers:
 *     rimExtractScantime @ 0x1C01D7F80 (rimExtractScantime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(unsigned int a1, unsigned int a2, int a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  int v11; // edx

  v4 = 0;
  v5 = a2;
  v6 = a1;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3459);
  if ( a3 )
  {
    if ( (_DWORD)v6 )
    {
      *a4 = ((int)v6 - 1) / (unsigned int)v5 + 1;
      v9 = 0;
    }
    else
    {
      v9 = -2147024362;
    }
  }
  else
  {
    v10 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    v11 = -1;
    if ( v10 <= 0xFFFFFFFF )
      v11 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    *a4 = v11;
    v9 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  }
  LOBYTE(v4) = v9 == 0;
  return v4;
}
