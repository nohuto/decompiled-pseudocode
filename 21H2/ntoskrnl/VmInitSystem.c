/*
 * XREFs of VmInitSystem @ 0x140A48B1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1402A3110 (ExInitializeLookasideListExInternal.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 */

__int64 __fastcall VmInitSystem(int a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall **v5)(int, int, int, int, __int64); // [rsp+60h] [rbp-28h]
  __int128 v6; // [rsp+68h] [rbp-20h]

  if ( a1 )
  {
    if ( a1 == 2 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&qword_140CFB458, 0LL, 0LL);
      VmpTraceLoggingProvider = (__int64)&qword_140CFB458;
    }
  }
  else
  {
    v3[1] = 1;
    v4 = 512LL;
    v3[0] = 1114120;
    v6 = 0LL;
    v5 = &VmpHostInterface;
    result = ExRegisterHost(&VmpExtensionHost, a2, (unsigned __int16 *)v3);
    if ( (int)result < 0 )
      return result;
    ExInitializeLookasideListExInternal(&VmpLargeFaultBatchLookasideList, 0LL, 0LL, 512, 0, 0x8020uLL, 1649175894, 0, 0);
  }
  return 0LL;
}
