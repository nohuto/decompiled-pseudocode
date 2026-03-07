_BOOL8 __fastcall MultiUserGreCleanupInit(__int64 a1)
{
  _QWORD *v1; // rbx
  struct _ERESOURCE *SemaphoreNonTracked; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v1[401] = v1 + 400;
  v1[400] = v1 + 400;
  SemaphoreNonTracked = GreCreateSemaphoreNonTracked();
  v1[402] = SemaphoreNonTracked;
  return SemaphoreNonTracked != 0LL;
}
