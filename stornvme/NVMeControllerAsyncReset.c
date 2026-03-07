char __fastcall NVMeControllerAsyncReset(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)StorPortExtendedFunction(29LL, a1, &v10, a4)
    && !(unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1701672526LL) )
  {
    MEMORY[0] = a2;
    MEMORY[8] = a3;
    MEMORY[0x10] = a4;
    if ( !(unsigned int)StorPortExtendedFunction(30LL, a1, NVMeControllerAsyncResetWorker, v10) )
      return 1;
  }
  if ( v10 )
    StorPortExtendedFunction(31LL, a1, v10, v8);
  return 0;
}
