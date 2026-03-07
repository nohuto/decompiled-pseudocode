__int64 __fastcall FsRtlDismountComplete(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    result = MmWriteableSharedUserData;
    _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
  }
  return result;
}
