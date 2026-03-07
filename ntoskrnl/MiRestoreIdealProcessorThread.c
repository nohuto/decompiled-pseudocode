__int64 __fastcall MiRestoreIdealProcessorThread(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 != -1 )
    return KeSetIdealProcessorThreadEx((__int64)KeGetCurrentThread(), a1, 0LL);
  return result;
}
