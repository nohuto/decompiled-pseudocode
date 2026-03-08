/*
 * XREFs of NtFlipObjectQueryNextMessageToProducer @ 0x1C0080970
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007F61C (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectQueryNextMessageToProducer(void *a1, _DWORD *a2)
{
  struct CFlipConsumerMessage *v4; // rdi
  char v5; // r8
  int v6; // ebx
  int v7; // edx
  struct CFlipConsumerMessage *v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 && a2 )
  {
    Object = 0LL;
    v4 = 0LL;
    v9 = 0LL;
    KeEnterCriticalRegion();
    v6 = FlipManagerObject::ResolveHandle(a1, 2u, v5, (struct FlipManagerObject **)&Object);
    if ( v6 >= 0 )
    {
      v6 = FlipManagerObject::QueryNextMessageToProducer((FlipManagerObject *)Object, 0, &v9);
      v4 = v9;
    }
    if ( v6 >= 0 )
    {
      v7 = *((_DWORD *)v4 + 8);
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = v7;
    }
    if ( v4 )
      CFlipPropertySetBase::Release(v4);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
