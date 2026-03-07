void __fastcall CD3DResourceManager::UnusedNotification(union _SLIST_HEADER *this, struct _SLIST_ENTRY *a2)
{
  __int64 v2; // rax
  char *v5; // rcx

  v2 = *((_QWORD *)&a2->Next + 1);
  *((_QWORD *)&a2[1].Next + 1) = 0LL;
  v5 = (char *)&a2->Next + *(int *)(v2 + 4) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  InterlockedPushEntrySList(this + 1, a2 + 3);
}
