/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00AED30
 * Callers:
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00AED30 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00AED30 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1)
{
  __int64 v2; // rsi
  __int64 AlignmentRequirement_low; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 Prop; // rdi
  struct tagWND *i; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v9; // rdi
  int v10; // ebp
  tagObjLock **v11; // rsi
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  char v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+60h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 18);
    v12 = 0LL;
    v13 = 0;
    AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
    v14 = 0;
    v4 = SGDGetUserSessionState(a1);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v5) )
    {
      v10 = 0;
      v14 = 1;
      if ( v2 == gObjDummyLock )
        v2 = 0LL;
      *(_QWORD *)&v12 = v2;
      v11 = (tagObjLock **)&v12;
      do
      {
        if ( *v11 )
          tagObjLock::LockExclusive(*v11);
        ++v10;
        ++v11;
      }
      while ( !v10 );
      v13 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
    if ( v14 && v13 )
    {
      if ( (_QWORD)v12 )
        tagObjLock::UnLockExclusive((tagObjLock *)v12);
      v13 = 0;
    }
    if ( Prop && !*(_BYTE *)(Prop + 73) )
    {
      *(_BYTE *)(Prop + 73) = 1;
      Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
      v9 = (struct _LIST_ENTRY *)(Prop + 24);
      if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
        __fastfail(3u);
      v9->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
      v9->Blink = &CVisRgnTrackerProp::s_DirtyList;
      Flink->Blink = v9;
      CVisRgnTrackerProp::s_DirtyList.Flink = v9;
    }
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
