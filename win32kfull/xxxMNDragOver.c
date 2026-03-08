/*
 * XREFs of xxxMNDragOver @ 0x1C023457C
 * Callers:
 *     NtUserMNDragOver @ 0x1C01D7780 (NtUserMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C02192C4 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C02192F8 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 MenuStateWindow; // rax
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-18h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
  v22 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v5
    && (v6 = *(_DWORD *)(v5 + 8), (v6 & 0x400) != 0)
    && (v7 = *(_QWORD **)(gptiCurrent + 608LL),
        *(_DWORD *)(v5 + 8) = v6 | 0x8000,
        MenuStateWindow = GetMenuStateWindow(v7),
        (v9 = (__int64 *)MenuStateWindow) != 0LL) )
  {
    ++*(_DWORD *)(v5 + 40);
    ThreadLockAlways(MenuStateWindow, &v21);
    xxxCallHandleMenuMessages(v5, v9, 160, 0LL, *a1 | (a1[2] << 16));
    ThreadUnlock1(v11, v10, v12);
    LOBYTE(v13) = IsMFMWFPWindow(*(_QWORD *)(v5 + 80));
    if ( v13 )
    {
      v15 = safe_cast_fnid_to_PMENUWND(v14);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v16);
          if ( *(_QWORD *)(*(_QWORD *)v20[0] + 40LL) )
            v17 = **(_QWORD **)(*(_QWORD *)v20[0] + 40LL);
          else
            v17 = 0LL;
          *(_QWORD *)(a2 + 8) = v17;
          *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
          if ( *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
            v4 = **(_QWORD **)(*(_QWORD *)v20[0] + 8LL);
          *(_QWORD *)(a2 + 24) = v4;
          v18 = *(_DWORD *)(v5 + 92);
          *(_DWORD *)a2 = v18;
          if ( (v18 & 2) != 0 )
            ++*(_DWORD *)(a2 + 16);
          LODWORD(v4) = 1;
        }
      }
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
    return (unsigned int)v4;
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
    return 0LL;
  }
}
