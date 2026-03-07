_BOOL8 __fastcall GreEngLoadModuleTrackInit(__int64 a1)
{
  _QWORD *v1; // rbx
  struct _ERESOURCE *SemaphoreNonTracked; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v1[404] = v1 + 403;
  v1[403] = v1 + 403;
  SemaphoreNonTracked = GreCreateSemaphoreNonTracked();
  v1[405] = SemaphoreNonTracked;
  return SemaphoreNonTracked != 0LL;
}
