void __fastcall FxChildList::DrainFreeListHead(FxChildList *this, _LIST_ENTRY *FreeListHead, unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rbp
  unsigned __int64 ObjectHandleUnchecked; // rax
  void (__fastcall *v10)(unsigned __int64); // r8
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(unsigned __int64, _LIST_ENTRY *); // r8

  while ( 1 )
  {
    Flink = FreeListHead->Flink;
    if ( FreeListHead->Flink == FreeListHead )
      break;
    if ( Flink->Blink != FreeListHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    FreeListHead->Flink = v6;
    v6->Blink = FreeListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    if ( this->m_StaticList && (LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[3].Blink) == 5) )
    {
      Blink = Flink[1].Blink->Blink;
      if ( LODWORD(Flink[3].Blink) == 5 )
        LODWORD(Flink[3].Blink) = 0;
      LODWORD(Flink[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, a3);
    }
    else
    {
      v8 = Flink[1].Blink;
      if ( this->m_EvtAddressDescriptionCleanup && Flink[2].Flink )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
        v10(ObjectHandleUnchecked);
      }
      if ( this->m_EvtIdentificationDescriptionCleanup && v8 )
      {
        v11 = FxObject::GetObjectHandleUnchecked(this);
        v12(v11, v8);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[4].Blink->Flink[1].Flink)(
        Flink[4].Blink,
        Flink,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree((FX_POOL_TRACKER *)Flink);
    }
  }
}
