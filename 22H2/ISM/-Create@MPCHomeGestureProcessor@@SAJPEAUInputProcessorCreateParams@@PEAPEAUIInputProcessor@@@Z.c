/*
 * XREFs of ?Create@MPCHomeGestureProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180136720
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180136404 (--$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreatePara.c)
 */

__int64 __fastcall MPCHomeGestureProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  const struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCHomeGestureProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           a2,
           &v3);
}
