/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C003F938
 * Callers:
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore();
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v3, v2, v4, v5);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
