/*
 * XREFs of NtFlipObjectReadNextMessageToProducer @ 0x1C0080A70
 * Callers:
 *     <none>
 * Callees:
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___ @ 0x1C007ECFC (CFlipPropertySetBase--WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___.c)
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007F61C (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectReadNextMessageToProducer(void *a1, int a2, char *a3)
{
  struct CFlipConsumerMessage *v6; // rdi
  char v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipConsumerMessage *v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    v6 = 0LL;
    v12 = 0LL;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 2u, v7, (struct FlipManagerObject **)&Object);
    if ( v9 >= 0 )
    {
      v9 = FlipManagerObject::QueryNextMessageToProducer((FlipManagerObject *)Object, 1, &v12);
      v6 = v12;
    }
    if ( v9 >= 0 )
    {
      if ( a2 != *((_DWORD *)v6 + 8) )
        v9 = -1073741811;
      if ( v9 >= 0 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___((__int64)v6, v8, a3);
    }
    if ( v6 )
      CFlipPropertySetBase::Release(v6);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
