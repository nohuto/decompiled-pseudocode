/*
 * XREFs of NtFlipObjectConsumerPostMessage @ 0x1C007FF60
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007E5CC (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C007F264 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerPostMessage(void *a1, unsigned int a2, char *a3)
{
  int v4; // ebx
  char v5; // r8
  int v6; // eax
  PVOID v7; // rdi
  struct CFlipConsumerMessage *v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    v9 = 0LL;
    v4 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(a2, a3, 1, &v9);
    KeEnterCriticalRegion();
    if ( v4 >= 0 )
    {
      v6 = FlipManagerObject::ResolveHandle(a1, 1u, v5, (struct FlipManagerObject **)&Object);
      v7 = Object;
      v4 = v6;
      if ( v6 >= 0 )
        v4 = FlipManagerObject::ConsumerPostMessage((FlipManagerObject *)Object, v9);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    if ( v9 )
      CFlipPropertySetBase::Release(v9);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
