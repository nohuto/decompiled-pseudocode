void __fastcall MiStoreFreeWriteSupport(struct _SLIST_ENTRY *P, union _SLIST_HEADER *a2)
{
  _SLIST_ENTRY *Next; // rcx

  Next = P[4].Next;
  if ( Next )
  {
    ObDereferenceObjectDeferDeleteWithTag(Next, 0x746C6644u);
    P[4].Next = 0LL;
  }
  if ( LOWORD(a2[81].Alignment) >= 0x100u )
    ExFreePoolWithTag(P, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 81, P);
}
