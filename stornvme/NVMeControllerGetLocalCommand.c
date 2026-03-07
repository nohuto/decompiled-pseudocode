_BYTE *__fastcall NVMeControllerGetLocalCommand(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a1 == -4512 || (unsigned int)StorPortExtendedFunction(37LL, a1, a1 + 4512, &v3) || !v3 )
    result = (_BYTE *)NVMeControllerAllocateLocalCommand(a1);
  else
    result = (_BYTE *)(v3 - 112);
  if ( result )
    *result = 1;
  return result;
}
