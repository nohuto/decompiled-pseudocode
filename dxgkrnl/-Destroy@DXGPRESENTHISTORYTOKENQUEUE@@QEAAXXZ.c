/*
 * XREFs of ?Destroy@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXXZ @ 0x1C01DBAA8
 * Callers:
 *     ??1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C01DBA90 (--1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::Destroy(DXGPRESENTHISTORYTOKENQUEUE *this)
{
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v3; // rax
  struct _KEVENT *v4; // rcx
  void *v5; // rcx

  for ( i = (union _SLIST_HEADER *)((char *)this + 32); ; i = (union _SLIST_HEADER *)((char *)this + 32) )
  {
    v3 = ExpInterlockedPopEntrySList(i);
    if ( !v3 )
      break;
    operator delete(v3);
  }
  v4 = (struct _KEVENT *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    KeClearEvent(v4);
    ObfDereferenceObject(*((PVOID *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
}
