char __fastcall KeAdjustInterruptTime(__int64 a1, char a2)
{
  char result; // al
  char Context; // [rsp+20h] [rbp-38h] BYREF
  __int16 Context_1; // [rsp+21h] [rbp-37h]
  char Context_3; // [rsp+23h] [rbp-35h]
  unsigned int Context_4; // [rsp+24h] [rbp-34h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  ULONG ActiveProcessorCount; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]

  result = 0;
  Context_1 = 0;
  Context_3 = 0;
  v10 = 0LL;
  if ( a1 >= 0 )
  {
    Context_4 = KeGetCurrentPrcb()->Number;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v9 = a1;
    Context = a2;
    v12 = 1;
    KeIpiGenericCall(KiCalibrateTimeAdjustment, (ULONG_PTR)&Context);
    return 1;
  }
  return result;
}
