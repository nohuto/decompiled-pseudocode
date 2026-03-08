/*
 * XREFs of RtlApplyFunctionOverrideFixupsToImage @ 0x1403712F4
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B3AAB0 (MiApplyFunctionOverrideToBootDrivers.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140371360 (RtlpCaptureDynamicRelocationTableRva.c)
 */

__int64 __fastcall RtlApplyFunctionOverrideFixupsToImage(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  result = RtlImageNtHeaderEx(0, a1, a2, &v5);
  if ( (int)result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(a1, a2, &v6);
    if ( (_DWORD)result == -1073741637 )
    {
      return 0LL;
    }
    else if ( (int)result >= 0 )
    {
      return 0LL;
    }
  }
  return result;
}
