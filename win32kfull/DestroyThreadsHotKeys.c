/*
 * XREFs of DestroyThreadsHotKeys @ 0x1C00B6540
 * Callers:
 *     <none>
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0039F6C (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003B140 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

void __fastcall DestroyThreadsHotKeys(struct tagHOTKEY *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  struct tagHOTKEY *v3; // rbx
  struct tagHOTKEY **v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // r12
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  v1 = 0LL;
  do
  {
    v2 = SGDGetUserSessionState(a1) + 12736;
    v3 = *(struct tagHOTKEY **)(v2 + 8 * v1);
    v4 = (struct tagHOTKEY **)(v2 + 8 * v1);
    if ( v3 )
    {
      do
      {
        if ( *(_QWORD *)v3 == gptiCurrent )
        {
          if ( !HKRemoveHotkeyOrMakePlaceholder(v4) )
            v4 = (struct tagHOTKEY **)((char *)*v4 + 48);
        }
        else
        {
          v5 = (_QWORD *)*((_QWORD *)v3 + 7);
          if ( v5 != (_QWORD *)((char *)v3 + 56) )
          {
            do
            {
              v6 = (_QWORD *)*v5;
              if ( *(v5 - 4) == gptiCurrent )
              {
                NotifyHotKeyRegistrationChanged(v3, (struct tagCHILDHOTKEY *const)(v5 - 4), 0);
                HMAssignmentUnlock(v5 - 3);
                v7 = (_QWORD *)*v5;
                if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
                  __fastfail(3u);
                *v8 = v7;
                v7[1] = v8;
                Win32FreePool(v5 - 4);
              }
              v5 = v6;
            }
            while ( v6 != (_QWORD *)((char *)v3 + 56) );
          }
          a1 = *v4;
          if ( _bittest16((const signed __int16 *)*v4 + 17, 8u)
            && *((struct tagHOTKEY **)a1 + 7) == (struct tagHOTKEY *)((char *)a1 + 56) )
          {
            *v4 = (struct tagHOTKEY *)*((_QWORD *)a1 + 6);
            Win32FreePool(a1);
          }
          else
          {
            v4 = (struct tagHOTKEY **)((char *)a1 + 48);
          }
        }
        v3 = *v4;
      }
      while ( *v4 );
    }
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < 0x80 );
}
