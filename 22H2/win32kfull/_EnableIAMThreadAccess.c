/*
 * XREFs of _EnableIAMThreadAccess @ 0x1C00377F4
 * Callers:
 *     NtUserEnableIAMAccess @ 0x1C00376F0 (NtUserEnableIAMAccess.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0037F84 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EnableIAMThreadAccess(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  struct tagIAM_THREAD *v4; // rax
  __int64 v5; // rcx
  struct tagIAM_THREAD **v6; // rdx
  struct _LIST_ENTRY *IAMThread; // r8
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0;
  if ( a2 )
  {
    IAMThread = (struct _LIST_ENTRY *)FindIAMThread((const struct tagTHREADINFO *const)a1);
    if ( !IAMThread )
    {
      IAMThread = (struct _LIST_ENTRY *)Win32AllocPoolZInit(32LL, 1869443925LL);
      if ( !IAMThread )
        return v2;
      Flink = gIAMThreadList.Flink;
      if ( gIAMThreadList.Flink->Blink != &gIAMThreadList )
        goto FatalListEntryError_0;
      IAMThread->Flink = gIAMThreadList.Flink;
      IAMThread->Blink = &gIAMThreadList;
      Flink->Blink = IAMThread;
      gIAMThreadList.Flink = IAMThread;
      IAMThread[1].Flink = (struct _LIST_ENTRY *)a1;
    }
    IAMThread[1].Blink = *(struct _LIST_ENTRY **)(a1 + 456);
    return 1;
  }
  v4 = FindIAMThread((const struct tagTHREADINFO *const)a1);
  if ( v4 )
  {
    v5 = *(_QWORD *)v4;
    if ( *(struct tagIAM_THREAD **)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v6 = (struct tagIAM_THREAD **)*((_QWORD *)v4 + 1);
      if ( *v6 == v4 )
      {
        *v6 = (struct tagIAM_THREAD *)v5;
        *(_QWORD *)(v5 + 8) = v6;
        Win32FreePool(v4);
        return 1;
      }
    }
FatalListEntryError_0:
    __fastfail(3u);
  }
  return v2;
}
