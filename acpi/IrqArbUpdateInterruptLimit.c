__int64 IrqArbUpdateInterruptLimit()
{
  __int64 result; // rax
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 2;
  v1 = 2048;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int16 *, int *))HalDispatchTable->HalQuerySystemInformation)(
             50LL,
             2LL,
             &v1,
             &v2);
  if ( (int)result >= 0 && v2 == 2 && (unsigned __int16)v1 < 0x800u )
    IrqArbInterruptLimit = v1;
  return result;
}
