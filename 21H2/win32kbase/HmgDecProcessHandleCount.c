/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C0032248
 * Callers:
 *     HmgAlloc @ 0x1C0001410 (HmgAlloc.c)
 *     GreSetBrushOwner @ 0x1C001C970 (GreSetBrushOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0034A90 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0037AB0 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003229C (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  __int64 v1; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v3; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v1);
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v3);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
