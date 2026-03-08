/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C0230A50
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0107A14 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0012890 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ClassLock @ 0x1C00128B8 (ClassLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyClassSmIcon @ 0x1C00343D0 (DestroyClassSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     SendDwmIconChange @ 0x1C00A1060 (SendDwmIconChange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateClassSmIcon @ 0x1C0107B5C (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C010A268 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C012F204 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(struct tagWND *a1)
{
  bool v2; // bl
  __int64 v3; // rcx
  struct tagCLS *v4; // rbx
  __int64 ThreadWin32Thread; // rax
  char v6; // bl
  __int64 result; // rax
  __int64 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v8, *((_QWORD *)a1 + 17));
  v2 = (unsigned int)DestroyClassSmIcon(v8) && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v8);
  if ( v2 )
  {
    v3 = *((_QWORD *)a1 + 17);
    v9 = 0LL;
    v10 = 0LL;
    if ( (unsigned int)ClassLock(v3, (__int64)&v9) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v8, *((_QWORD *)a1 + 17));
      xxxCreateClassSmIcon((__int64)v8);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v8);
      v4 = (struct tagCLS *)*((_QWORD *)a1 + 17);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v9;
      ClassUnlockWorker(v4);
    }
  }
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon((__int64 *)a1) && !v6 )
    xxxCreateWindowSmIcon((__int64 *)a1, *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL), 1);
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
