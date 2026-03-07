__int64 __fastcall KiUnstackDetachProcess($115DCDF994C6370D29323EAB0E0C9502 *a1)
{
  __int64 result; // rax

  result = (__int64)a1->SavedApcState.Process;
  if ( result != 1 )
  {
    if ( !result )
      a1 = &KeGetCurrentThread()->600;
    return KiDetachProcess(a1);
  }
  return result;
}
