__int64 HalpMcUpdatePostUpdate()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpMcUpdatePostUpdateFunc )
    return ((__int64 (*)(void))HalpMcUpdatePostUpdateFunc)();
  return result;
}
