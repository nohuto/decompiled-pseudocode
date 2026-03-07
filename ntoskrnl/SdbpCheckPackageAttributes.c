__int64 __fastcall SdbpCheckPackageAttributes(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax

  if ( ((unsigned __int16)SdbGetTagFromTagID(a3, a5) == 28758 || (unsigned __int16)SdbGetTagFromTagID(a3, a5) == 28761)
    && !(unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
  {
    return 1LL;
  }
  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(unsigned __int64 **)(a6 + 88));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
