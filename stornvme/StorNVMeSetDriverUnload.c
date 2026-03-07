__int64 (*__fastcall StorNVMeSetDriverUnload(__int64 a1))()
{
  __int64 (*result)(); // rax

  result = *(__int64 (**)())(a1 + 104);
  StorPortDriverUnload = (__int64)result;
  if ( result )
  {
    result = StorNVMeDriverUnload;
    *(_QWORD *)(a1 + 104) = StorNVMeDriverUnload;
  }
  return result;
}
