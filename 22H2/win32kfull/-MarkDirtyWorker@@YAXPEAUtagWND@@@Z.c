/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470
 * Callers:
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 * Callees:
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 AlignmentRequirement_low; // rbp
  __int64 v6; // rdi
  PERESOURCE *v7; // rax
  int v8; // ebx
  tagObjLock **v9; // rdi
  __int64 Prop; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v12; // rax
  struct tagWND *i; // rbx
  __int128 v14; // [rsp+48h] [rbp-30h] BYREF
  char v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+60h] [rbp-18h]

  if ( a1 )
  {
    AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
    v14 = 0LL;
    v15 = 0;
    v6 = *((_QWORD *)a1 + 18);
    v16 = 0;
    v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v7) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
    {
      v8 = 0;
      v16 = 1;
      if ( v6 == gObjDummyLock )
        v6 = 0LL;
      *(_QWORD *)&v14 = v6;
      v9 = (tagObjLock **)&v14;
      do
      {
        if ( *v9 )
          tagObjLock::LockExclusive(*v9);
        ++v8;
        ++v9;
      }
      while ( !v8 );
      v15 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
    if ( v16 && v15 )
    {
      if ( (_QWORD)v14 )
        tagObjLock::UnLockExclusive((tagObjLock *)v14);
      v15 = 0;
    }
    if ( Prop && !*(_BYTE *)(Prop + 73) )
    {
      *(_BYTE *)(Prop + 73) = 1;
      Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
      v12 = (struct _LIST_ENTRY *)(Prop + 24);
      if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
        __fastfail(3u);
      v12->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
      *(_QWORD *)(Prop + 32) = &CVisRgnTrackerProp::s_DirtyList;
      Flink->Blink = v12;
      CVisRgnTrackerProp::s_DirtyList.Flink = (struct _LIST_ENTRY *)(Prop + 24);
    }
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
