/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C02458A8
 * Callers:
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C023008C (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C023021C (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r14
  __int64 v6; // rcx
  struct tagWND *v8; // r15
  unsigned int v9; // r12d
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 *v21; // r9
  int v22; // r9d
  int v23; // r8d
  int v24; // r10d
  unsigned int v25; // eax
  bool v26; // zf
  _QWORD v28[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]

  v3 = (__int64 *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 80);
  v29 = 0LL;
  v30 = 0LL;
  ThreadLock(v6, (__int64 *)&v29);
  v8 = (struct tagWND *)*v3;
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v11 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( IsMFMWFPWindow(v11) )
  {
    v15 = safe_cast_fnid_to_PMENUWND(v13);
    if ( v15 )
    {
      v12 = *(_QWORD *)(v15 + 8);
      if ( v12 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, v12);
        v16 = MNGetpItem((__int64)v28, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v16 )
        {
          v20 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v28[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 116LL));
          v17 = *v21;
          v22 = *(_DWORD *)(*v21 + 68);
          v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v20 + 68LL) + v23);
          v18 = gpsi;
          v24 = *(_DWORD *)(gpsi + 2172LL);
          if ( (int)v19 > v22 + v24 )
          {
            if ( (int)v19 >= v22 + *(_DWORD *)(v17 + 76) - v24 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        if ( v8 != (struct tagWND *)*v3 )
          goto LABEL_20;
        v25 = *(_DWORD *)(a1 + 88) - v9;
        if ( v25 == -1 )
        {
          if ( *(_DWORD *)(a1 + 92) != 2 )
            goto LABEL_20;
          v26 = v10 == 1;
        }
        else
        {
          if ( v25 )
          {
            if ( v25 == 1 && *(_DWORD *)(a1 + 92) == 1 && v10 == 2 )
              goto LABEL_21;
            goto LABEL_20;
          }
          v26 = v10 == *(_DWORD *)(a1 + 92);
        }
        if ( v26 )
        {
LABEL_21:
          ThreadUnlock1(v18, v17, v19);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28);
        }
LABEL_20:
        *(_DWORD *)(a1 + 92) |= 4u;
        xxxMNSetGapState(v8, v9, v10, 0);
        xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
        goto LABEL_21;
      }
    }
  }
  *v3 = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return (_QWORD *)ThreadUnlock1(v13, v12, v14);
}
