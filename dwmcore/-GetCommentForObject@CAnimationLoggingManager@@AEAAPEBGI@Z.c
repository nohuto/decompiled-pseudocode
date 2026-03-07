const unsigned __int16 *__fastcall CAnimationLoggingManager::GetCommentForObject(
        CAnimationLoggingManager *this,
        unsigned int a2)
{
  struct CResource *ResourceWithoutType; // rax
  CAnimationLoggingManager *v3; // r9
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  const unsigned __int16 *result; // rax

  if ( !a2 )
    return 0LL;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 32LL), a2);
  if ( !ResourceWithoutType )
    return 0LL;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(v3, ResourceWithoutType);
  if ( !DebugInfoForResource || !*((_QWORD *)DebugInfoForResource + 3) )
    return 0LL;
  result = (const unsigned __int16 *)((char *)DebugInfoForResource + 8);
  if ( *((_QWORD *)result + 3) >= 8uLL )
    return *(const unsigned __int16 **)result;
  return result;
}
