/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C009DF10
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     _UnregisterHotKey @ 0x1C009DD7C (_UnregisterHotKey.c)
 *     DestroyThreadsHotKeys @ 0x1C009DEE0 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C009E4F8 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C009E5D8 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // r10d
  unsigned __int8 v6; // bp
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rsi
  struct tagHOTKEY *v10; // rbx
  struct tagHOTKEY **v11; // rdi
  _QWORD *v13; // r15
  char v14; // al
  struct tagHOTKEY *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+20h] [rbp-48h]

  v5 = a3;
  v6 = 0;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  do
  {
    v10 = (struct tagHOTKEY *)(&gphkHashTable)[v9];
    v11 = (struct tagHOTKEY **)&(&gphkHashTable)[v9];
    if ( !v10 )
      goto LABEL_3;
    do
    {
      if ( a4 == 1 )
      {
        if ( *((_QWORD *)v10 + 2) != v7 )
          goto LABEL_7;
        goto LABEL_14;
      }
      if ( !a4 )
      {
        if ( *(_QWORD *)v10 != v8 )
          goto LABEL_7;
        goto LABEL_14;
      }
      if ( a4 != 2 )
      {
        if ( a4 != 3 )
        {
          if ( a4 != 4 )
            goto LABEL_7;
          goto LABEL_14;
        }
        if ( *(_QWORD *)v10 != v8 )
          goto LABEL_7;
      }
      if ( *((_QWORD *)v10 + 2) != v7 || *((_DWORD *)v10 + 8) != v5 )
      {
LABEL_7:
        v13 = (_QWORD *)*((_QWORD *)v10 + 6);
        v14 = 0;
        if ( v13 == (_QWORD *)((char *)v10 + 48) )
        {
LABEL_8:
          v15 = *v11;
          v6 |= v14;
          if ( (*((_WORD *)*v11 + 13) & 0x100) != 0
            && *((struct tagHOTKEY **)v15 + 6) == (struct tagHOTKEY *)((char *)v15 + 48) )
          {
            *v11 = (struct tagHOTKEY *)*((_QWORD *)v15 + 5);
            Win32FreePool(v15);
          }
          else
          {
            v11 = (struct tagHOTKEY **)((char *)v15 + 40);
          }
          goto LABEL_10;
        }
        while ( 2 )
        {
          v16 = (_QWORD *)*v13;
          v19 = (_QWORD *)*v13;
          if ( a4 == 1 )
          {
            if ( *(v13 - 2) != v7 )
              goto LABEL_25;
LABEL_29:
            NotifyHotKeyRegistrationChanged(v10, (struct tagCHILDHOTKEY *const)(v13 - 3), 0);
            HMAssignmentUnlock(v13 - 2);
            v17 = (_QWORD *)*v13;
            if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v18 = (_QWORD *)v13[1], (_QWORD *)*v18 != v13) )
              __fastfail(3u);
            *v18 = v17;
            v17[1] = v18;
            Win32FreePool(v13 - 3);
            v16 = v19;
            v14 = 1;
            v8 = a1;
            v7 = a2;
            v5 = a3;
          }
          else if ( a4 )
          {
            if ( (a4 == 2 || a4 == 3 && *(v13 - 3) == v8) && *(v13 - 2) == v7 && *((_DWORD *)v13 - 1) == v5 )
              goto LABEL_29;
          }
          else if ( *(v13 - 3) == v8 )
          {
            goto LABEL_29;
          }
LABEL_25:
          v13 = v16;
          if ( v16 == (_QWORD *)((char *)v10 + 48) )
            goto LABEL_8;
          continue;
        }
      }
LABEL_14:
      if ( !HKRemoveHotkeyOrMakePlaceholder(v11) )
        v11 = (struct tagHOTKEY **)((char *)*v11 + 40);
      v6 = 1;
LABEL_10:
      v10 = *v11;
      v8 = a1;
      v7 = a2;
      v5 = a3;
    }
    while ( *v11 );
LABEL_3:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < 0x80 );
  return v6;
}
