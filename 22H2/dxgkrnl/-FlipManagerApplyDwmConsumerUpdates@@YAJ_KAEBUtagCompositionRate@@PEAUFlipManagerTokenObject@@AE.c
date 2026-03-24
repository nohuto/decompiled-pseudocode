/*
 * XREFs of ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C006A3A4
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0013DE0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0063D6C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0063DC8 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C006A234 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEA.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C006FF04 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

__int64 __fastcall FlipManagerApplyDwmConsumerUpdates(
        unsigned __int64 a1,
        const struct tagCompositionRate *a2,
        struct FlipManagerTokenObject *this,
        struct _LIST_ENTRY *a4,
        enum FlipPresentProcessResult *a5)
{
  int FlipManagerObjectNoRef; // edi
  unsigned __int64 v10; // r8
  PVOID v11; // r14
  unsigned __int64 v12; // r15
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v15; // rcx
  unsigned __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  Object = 0LL;
  v17 = 0LL;
  FlipManagerObjectNoRef = FlipManagerTokenObject::GetFlipManagerObjectNoRef(this, (struct FlipManagerObject **)&Object);
  if ( FlipManagerObjectNoRef < 0
    || (FlipManagerObjectNoRef = FlipManagerTokenObject::GetPresentId(this, &v17), FlipManagerObjectNoRef < 0)
    || (v10 = a1,
        v11 = Object,
        v12 = v17,
        FlipManagerObjectNoRef = FlipManagerObject::ConsumerDwmApplyUpdates(
                                   (FlipManagerObject *)Object,
                                   v17,
                                   v10,
                                   a2,
                                   a4,
                                   a5),
        FlipManagerObjectNoRef < 0) )
  {
LABEL_8:
    while ( 1 )
    {
      Flink = a4->Flink;
      if ( a4->Flink == a4 )
        break;
      if ( Flink->Blink != a4 || (v15 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      a4->Flink = v15;
      v15->Blink = a4;
      if ( Flink != (struct _LIST_ENTRY *)8 )
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
    }
  }
  else
  {
    for ( i = a4->Flink; i != a4; i = i->Flink )
    {
      FlipManagerObjectNoRef = ObReferenceObjectByPointer(v11, 3u, g_pDxgkCompositionObjectType, 0);
      if ( FlipManagerObjectNoRef < 0 )
        goto LABEL_8;
      CFlipContentToken::SetFlipManagerObjectPreReferenced(
        (CFlipContentToken *)&i[-1].Blink,
        (struct FlipManagerObject *)v11);
      i[6].Flink = (struct _LIST_ENTRY *)v12;
    }
  }
  return (unsigned int)FlipManagerObjectNoRef;
}
