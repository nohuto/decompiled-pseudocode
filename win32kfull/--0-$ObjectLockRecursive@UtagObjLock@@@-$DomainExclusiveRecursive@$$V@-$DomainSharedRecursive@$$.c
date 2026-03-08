/*
 * XREFs of ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D680C
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D5560 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C00D5730 (DestroyThreadHidObjects.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00D6420 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C01AA7F4 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        __int64 a1,
        __int64 a2)
{
  struct _KTHREAD ***v2; // rbx
  int v4; // esi
  struct _KTHREAD **v5; // rcx
  __int64 result; // rax

  v2 = (struct _KTHREAD ***)(a1 + 16);
  *(_QWORD *)a1 = gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  if ( a2 == gObjDummyLock )
    a2 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  v4 = 0;
  do
  {
    v5 = *v2;
    if ( *v2 )
    {
      if ( KeGetCurrentThread() == v5[1] )
        *v2 = 0LL;
      else
        tagObjLock::LockExclusive((tagObjLock *)v5);
    }
    ++v4;
    ++v2;
  }
  while ( !v4 );
  result = a1;
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
