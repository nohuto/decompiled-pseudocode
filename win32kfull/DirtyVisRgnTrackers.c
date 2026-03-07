void __fastcall DirtyVisRgnTrackers(__int64 a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // r14
  __int64 v12; // rdi
  __int64 AlignmentRequirement_low; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  struct tagWND *i; // rdi
  __int64 v18; // rax
  CVisRgnTrackerProp *Prop; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v21; // rax
  int v22; // esi
  tagObjLock **v23; // rdi
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+68h] [rbp-18h]

  if ( a1 )
  {
    v1 = (struct tagWND *)a1;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v2 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 && (*(_DWORD *)(a1 + 320) & 0x2000000) != 0 )
      {
        v3 = *(_QWORD **)(a1 + 104);
        v4 = v3;
        if ( v3 )
        {
          while ( 1 )
          {
            v5 = v4[5];
            v6 = *(_BYTE *)(v5 + 31);
            if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 && v4 != v3 )
              break;
            if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
            {
              v4 = (_QWORD *)v4[13];
              if ( v4 )
                continue;
            }
            goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v3);
          v7 = *((_QWORD *)v1 + 13);
          v8 = (__int64 *)((char *)v1 + 24);
          if ( !v7 )
            goto LABEL_27;
          v9 = *v8;
          v10 = 0LL;
          if ( *v8 )
          {
            v9 = *(_QWORD *)(v9 + 8);
            if ( v9 )
              v10 = *(_QWORD *)(v9 + 24);
          }
          if ( v7 == v10 )
          {
            v11 = 1;
          }
          else
          {
LABEL_27:
            v9 = *v8;
            v11 = 0;
            if ( (!*v8 || (v18 = *(_QWORD *)(v9 + 8)) == 0 || v1 != *(struct tagWND **)(v18 + 24))
              && (*(_BYTE *)(v3[5] + 31LL) & 2) != 0 )
            {
              Prop = (CVisRgnTrackerProp *)GetProp((__int64)v3, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1u);
              if ( Prop )
                CVisRgnTrackerProp::MarkDirty(Prop);
            }
          }
          v12 = *((_QWORD *)v1 + 18);
          AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
          v24 = 0LL;
          v25 = 0;
          v26 = 0;
          v14 = SGDGetUserSessionState(v9);
          if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v14 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v15) )
          {
            v26 = 1;
            if ( v12 == gObjDummyLock )
              v12 = 0LL;
            *(_QWORD *)&v24 = v12;
            v22 = 0;
            v23 = (tagObjLock **)&v24;
            do
            {
              if ( *v23 )
                tagObjLock::LockExclusive(*v23);
              ++v22;
              ++v23;
            }
            while ( !v22 );
            v25 = 1;
          }
          v16 = RealGetProp(*((_QWORD *)v1 + 18), AlignmentRequirement_low, 1LL);
          if ( v26 && v25 )
          {
            if ( (_QWORD)v24 )
              tagObjLock::UnLockExclusive((tagObjLock *)v24);
            v25 = 0;
          }
          if ( v16 && !*(_BYTE *)(v16 + 73) )
          {
            *(_BYTE *)(v16 + 73) = 1;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v21 = (struct _LIST_ENTRY *)(v16 + 24);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v21->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            *(_QWORD *)(v16 + 32) = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v21;
            CVisRgnTrackerProp::s_DirtyList.Flink = (struct _LIST_ENTRY *)(v16 + 24);
          }
          for ( i = (struct tagWND *)*((_QWORD *)v1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
            MarkDirtyWorker(i);
          if ( !v11 )
          {
            while ( 1 )
            {
              v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
