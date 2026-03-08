/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C004A6B0
 * Callers:
 *     ParseLoad @ 0x1C005B600 (ParseLoad.c)
 *     ParseUnload @ 0x1C005CB20 (ParseUnload.c)
 * Callees:
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A71C (AMLIApplyNextNamespaceOverride.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  __int64 v1; // rdx

  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject((void *)"\\");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, 0LL);
      DereferenceObjectEx(0LL, v1);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
