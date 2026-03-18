/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C0158A28
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00634EC (DestroyClassSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00A2E38 (xxxCreateClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00F56D8 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(struct tagWND *a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  char v4; // bl
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _CALLPROCDATA **v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v10, *((_QWORD *)a1 + 17));
  v2 = (unsigned int)DestroyClassSmIcon(v10) && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
  if ( v2 )
  {
    v6 = *((_QWORD *)a1 + 17);
    v11 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)ClassLock(v6, &v11) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v10, *((_QWORD *)a1 + 17));
      xxxCreateClassSmIcon((__int64)v10, v7);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
      v8 = (struct _CALLPROCDATA **)*((_QWORD *)a1 + 17);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v11;
      ClassUnlockWorker(v8);
    }
  }
  v4 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon((__int64)a1, v3) && !v4 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL), 1);
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange((ULONG_PTR)a1);
  return result;
}
