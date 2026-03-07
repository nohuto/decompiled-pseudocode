char __fastcall CHolographicInteropTaskQueue::PostMessageW(
        CHolographicInteropTaskQueue *this,
        int a2,
        struct _SLIST_ENTRY *a3,
        void *a4,
        struct _SLIST_ENTRY *a5,
        void *a6,
        struct _SLIST_ENTRY *a7)
{
  char v11; // di
  PSLIST_ENTRY v12; // rbx
  struct _SLIST_ENTRY *v13; // rax
  void *v14; // rdx

  v11 = 0;
  v12 = InterlockedPopEntrySList((PSLIST_HEADER)this + 2);
  if ( !v12 )
  {
    v13 = (struct _SLIST_ENTRY *)operator new(0x40uLL);
    v12 = v13;
    if ( !v13 )
      return v11;
    memset_0(v13, 0, 0x40uLL);
    memset_0(v12, 0, 0x40uLL);
  }
  *((_DWORD *)&v12->Next + 2) = a2;
  v12[1].Next = a3;
  if ( a3 )
    (*((void (__fastcall **)(struct _SLIST_ENTRY *))&a3->Next->Next + 1))(a3);
  v12[2].Next = a5;
  *((_QWORD *)&v12[2].Next + 1) = a6;
  v12[3].Next = a7;
  *((_QWORD *)&v12[1].Next + 1) = a4;
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, v12);
  wil::details::SetEvent(*((wil::details **)this + 6), v14);
  return 1;
}
