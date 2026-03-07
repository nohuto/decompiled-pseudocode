__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  if ( (result & 1) == 0 )
  {
    ((void (*)(void))ViThunkFreeSharedThunksArray)();
    ViThunkFreeSharedThunksArray(a1 + 32);
    return ViThunkFreeSharedThunksArray(a1 + 40);
  }
  return result;
}
