/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B6390
 * Callers:
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C00B632C (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 *     DestroyWindowsHotKeys @ 0x1C012E1A4 (DestroyWindowsHotKeys.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0039F6C (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003B140 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(struct tagHOTKEY *a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v4; // bp
  __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // r14
  struct tagHOTKEY *v9; // r12
  __int64 v10; // rax
  struct tagHOTKEY *v11; // rbx
  struct tagHOTKEY **v12; // rdi
  _QWORD *v14; // r15
  char v15; // al
  _QWORD *v16; // rcx
  struct tagCHILDHOTKEY *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  bool v20; // zf
  _QWORD *v21; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  do
  {
    v10 = SGDGetUserSessionState(a1) + 12736;
    v11 = *(struct tagHOTKEY **)(v10 + 8 * v6);
    v12 = (struct tagHOTKEY **)(v10 + 8 * v6);
    if ( !v11 )
      goto LABEL_3;
    do
    {
      if ( a4 == 3 )
      {
        if ( *(struct tagHOTKEY **)v11 == v9 && *((_QWORD *)v11 + 2) == v8 && *((_DWORD *)v11 + 10) == v7 )
          goto LABEL_15;
        goto LABEL_7;
      }
      if ( a4 )
      {
        if ( a4 != 1 )
        {
          if ( a4 == 2 )
          {
            if ( *((_QWORD *)v11 + 2) == v8 && *((_DWORD *)v11 + 10) == v7 )
              goto LABEL_15;
          }
          else if ( a4 == 4 )
          {
            goto LABEL_15;
          }
          goto LABEL_7;
        }
        v20 = *((_QWORD *)v11 + 2) == v8;
      }
      else
      {
        v20 = *(_QWORD *)v11 == (_QWORD)v9;
      }
      if ( v20 )
      {
LABEL_15:
        if ( !HKRemoveHotkeyOrMakePlaceholder(v12) )
          v12 = (struct tagHOTKEY **)((char *)*v12 + 48);
        v4 = 1;
        goto LABEL_11;
      }
LABEL_7:
      v14 = (_QWORD *)*((_QWORD *)v11 + 7);
      v15 = 0;
      if ( v14 != (_QWORD *)((char *)v11 + 56) )
      {
        do
        {
          v16 = (_QWORD *)*v14;
          v17 = (struct tagCHILDHOTKEY *)(v14 - 4);
          v21 = (_QWORD *)*v14;
          if ( a4 )
          {
            if ( a4 == 1 )
            {
              if ( *((_QWORD *)v17 + 1) == a2 )
                goto LABEL_30;
            }
            else if ( (a4 == 2 || a4 == 3 && *(struct tagHOTKEY **)v17 == v9)
                   && *((_QWORD *)v17 + 1) == a2
                   && *((_DWORD *)v17 + 5) == a3 )
            {
LABEL_30:
              NotifyHotKeyRegistrationChanged(v11, v17, 0);
              HMAssignmentUnlock(v14 - 3);
              v18 = (_QWORD *)*v14;
              if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v19 = (_QWORD *)v14[1], (_QWORD *)*v19 != v14) )
                __fastfail(3u);
              *v19 = v18;
              v18[1] = v19;
              Win32FreePool(v14 - 4);
              v16 = v21;
              v15 = 1;
            }
          }
          else if ( *(struct tagHOTKEY **)v17 == v9 )
          {
            goto LABEL_30;
          }
          v14 = v16;
        }
        while ( v16 != (_QWORD *)((char *)v11 + 56) );
      }
      a1 = *v12;
      v4 |= v15;
      if ( _bittest16((const signed __int16 *)*v12 + 17, 8u)
        && *((struct tagHOTKEY **)a1 + 7) == (struct tagHOTKEY *)((char *)a1 + 56) )
      {
        *v12 = (struct tagHOTKEY *)*((_QWORD *)a1 + 6);
        Win32FreePool(a1);
      }
      else
      {
        v12 = (struct tagHOTKEY **)((char *)a1 + 48);
      }
      v7 = a3;
      v8 = a2;
LABEL_11:
      v11 = *v12;
    }
    while ( *v12 );
LABEL_3:
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 0x80 );
  return v4;
}
