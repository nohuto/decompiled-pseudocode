/*
 * XREFs of _WOWModuleUnload @ 0x1C0221974
 * Callers:
 *     NtUserWOWModuleUnload @ 0x1C0200870 (NtUserWOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C02217C8 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1)
{
  __int16 v1; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v3; // r14
  struct _CALLPROCDATA ***v4; // rbx
  struct _CALLPROCDATA **v5; // rdi
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v3 = 2LL;
  v4 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 344);
  do
  {
    while ( *v4 )
    {
      SmartObjStackRefBase<tagCLS>::Init(v10, 0LL);
      v5 = *v4;
      if ( HIWORD(*((_DWORD *)(*v4)[1] + 16)) == v1 )
      {
        if ( !*((_DWORD *)v5 + 18) )
        {
          DestroyClass(CurrentProcessWin32Process, v4);
          goto LABEL_27;
        }
        SmartObjStackRefBase<tagCLS>::Init(v11, (__int64)*v4);
        PseudoDestroyClassWindows(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL), v11);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
        *((_WORD *)(*v4)[1] + 3) |= 4u;
      }
      else
      {
        if ( v5 != *(struct _CALLPROCDATA ***)v10[0] )
        {
          if ( v10[0] != gSmartObjNullRef && !--*(_DWORD *)(v10[0] + 8LL) )
          {
            if ( *(_BYTE *)(v10[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v10[0]);
          }
          if ( v5 )
          {
            v10[0] = v5[16];
            ++*(_DWORD *)(v10[0] + 8LL);
          }
          else
          {
            v10[0] = gSmartObjNullRef;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 6LL) & 8) != 0
          && v1 == *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 12LL)
                            + *(_QWORD *)(*(_QWORD *)v10[0] + 8LL)
                            + 94LL) )
        {
          v6 = 0;
          v7 = 868LL;
          v8 = 0LL;
          while ( !*((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v8)
               || *(_WORD *)(*v4)[1] != *(_WORD *)(v7 + gpsi)
               || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 6LL) & 1) != 0 )
          {
            ++v6;
            ++v8;
            v7 += 2LL;
            if ( v7 >= 918 )
              goto LABEL_23;
          }
          *((_QWORD *)(*v4)[1] + 4) = *((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v8);
LABEL_23:
          if ( v6 == 25 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 6LL) & 1) == 0 )
            *((_QWORD *)(*v4)[1] + 4) = *(_QWORD *)(gpsi + 616LL);
        }
      }
      v4 = (struct _CALLPROCDATA ***)*v4;
LABEL_27:
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
    }
    v4 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 352);
    --v3;
  }
  while ( v3 );
  return 1LL;
}
