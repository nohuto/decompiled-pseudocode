/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C004FDA0
 * Callers:
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001C690 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C004FDF4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
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
