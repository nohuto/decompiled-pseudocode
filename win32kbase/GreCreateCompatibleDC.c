/*
 * XREFs of GreCreateCompatibleDC @ 0x1C0052510
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0055780 (NtGdiCreateCompatibleDC.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00499E0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C004AC60 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreSetLayout @ 0x1C00D1C50 (GreSetLayout.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C017F984 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rsi
  __int64 v2; // rcx
  DC *v3; // rbx
  __int64 v4; // rax
  struct _ENTRY *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  struct _DC_ATTR *v10; // rdi
  __int64 v11; // rcx
  HDC DisplayDC; // rax
  __int64 v13; // r8
  DC *v14; // rdi
  int v15; // r12d
  __int64 v16; // rax
  struct _ENTRY *v17; // rax
  struct _DC_ATTR *v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // r15
  unsigned int v21; // r8d
  struct _DC_ATTR *UserAttr; // rax
  HDC v23; // r14
  __int64 v24; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v29; // r14
  struct _DC_ATTR *v30; // rdi
  HDC v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  __int64 ProcessWow64Process; // rax
  __int64 v39; // rdx
  bool v40; // zf
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  DC *v47; // [rsp+50h] [rbp-28h] BYREF
  __int64 v48; // [rsp+58h] [rbp-20h]
  DC *v49; // [rsp+60h] [rbp-18h] BYREF
  __int64 v50; // [rsp+68h] [rbp-10h]
  int v51; // [rsp+A0h] [rbp+28h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v49 = 0LL;
    v50 = 0LL;
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v49, a1);
    v3 = v49;
    if ( !v49 )
      return v1;
    if ( (*((_DWORD *)v49 + 11) & 2) != 0 )
    {
LABEL_13:
      if ( (*((_DWORD *)v3 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v3);
      DisplayDC = (HDC)GreCreateDisplayDC(*((HDEV *)v3 + 6), 1u);
      v1 = DisplayDC;
      if ( !DisplayDC )
      {
LABEL_41:
        if ( v3 )
        {
          if ( !(_DWORD)v50 || (*((_DWORD *)v3 + 11) & 2) == 0 )
            goto LABEL_53;
          if ( HIDWORD(v50)
            || (v24 = SGDGetSessionState(v11),
                (EntryFromObject = GdiHandleManager::GetEntryFromObject(
                                     *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v24 + 24) + 8008LL),
                                     v3)) == 0LL) )
          {
LABEL_52:
            *((_DWORD *)v3 + 11) &= ~2u;
LABEL_53:
            v31 = *(HDC *)v3;
            v51 = 0;
            HmgDecrementExclusiveReferenceCountEx((int *)v3, SHIDWORD(v50), &v51);
            if ( v51 )
              GrepDeleteDC(v31, 0x2000000u);
            return v1;
          }
          v27 = *((_QWORD *)EntryFromObject + 2);
          if ( v27 )
          {
            CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v26);
            v29 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
            {
              ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
              v39 = *((unsigned int *)v29 + 73);
              v40 = ProcessWow64Process == 0;
              v41 = *((_DWORD *)v29 + 73);
              if ( v40 )
                v30 = (struct _DC_ATTR *)(v39 ^ __ROR8__(v27, 64 - (v41 & 0x3Fu)));
              else
                v30 = (struct _DC_ATTR *)(v39 ^ (unsigned int)__ROR4__(v27, 32 - (v41 & 0x1F)));
LABEL_50:
              if ( v30 )
                DC::RestoreAttributes(v3, v30);
              goto LABEL_52;
            }
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
          }
          v30 = 0LL;
          goto LABEL_50;
        }
        return v1;
      }
      v47 = 0LL;
      v48 = 0LL;
      XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v47, DisplayDC);
      v14 = v47;
      v15 = HIDWORD(v48);
      if ( v47 )
      {
        if ( (*((_DWORD *)v47 + 11) & 2) != 0 )
        {
LABEL_26:
          if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v14);
          if ( (*((_DWORD *)v3 + 130) & 1) != 0 )
            DC::vSetDpiScaling(v14, *(_QWORD *)((char *)v3 + 524), v13);
          goto LABEL_30;
        }
        if ( HIDWORD(v48) )
          goto LABEL_25;
        v16 = SGDGetSessionState(v11);
        v17 = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(*(_QWORD *)(v16 + 24) + 8008LL), v14);
        if ( !v17 )
          goto LABEL_25;
        v18 = (struct _DC_ATTR *)*((_QWORD *)v17 + 2);
        if ( v18 )
        {
          v19 = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
          v20 = v19;
          if ( v19 && *v19 )
          {
            v33 = PsGetProcessWow64Process(*v19);
            v34 = *((unsigned int *)v20 + 73);
            if ( v33 )
            {
              v11 = (unsigned __int8)(32 - (v34 & 0x1F));
              v18 = (struct _DC_ATTR *)(v34 ^ (unsigned int)__ROR4__((_DWORD)v18, v11));
            }
            else
            {
              v11 = (unsigned __int8)(64 - (v34 & 0x3F));
              v18 = (struct _DC_ATTR *)(v34 ^ __ROR8__(v18, v11));
            }
          }
          else
          {
            v18 = 0LL;
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
          }
        }
        if ( !v18 || (unsigned int)DC::SaveAttributes(v14, v18) )
        {
LABEL_25:
          *((_DWORD *)v14 + 11) |= 2u;
          LODWORD(v48) = 1;
          goto LABEL_26;
        }
        _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
        v3 = v49;
        v14 = 0LL;
        v15 = HIDWORD(v48);
        v47 = 0LL;
      }
LABEL_30:
      v21 = *(_DWORD *)(*((_QWORD *)v3 + 122) + 108LL);
      if ( (v21 & 7) != 0 )
        GreSetLayout(v1, -1, v21);
      if ( v14 )
      {
        if ( (_DWORD)v48 && (*((_DWORD *)v14 + 11) & 2) != 0 )
        {
          if ( !v15 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v47);
            if ( UserAttr )
              DC::RestoreAttributes(v14, UserAttr);
          }
          *((_DWORD *)v14 + 11) &= ~2u;
        }
        v23 = *(HDC *)v14;
        v51 = 0;
        HmgDecrementExclusiveReferenceCountEx((int *)v14, v15, &v51);
        if ( v51 )
          GrepDeleteDC(v23, 0x2000000u);
      }
      goto LABEL_41;
    }
    if ( HIDWORD(v50)
      || (v4 = SGDGetSessionState(v2),
          (v5 = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(*(_QWORD *)(v4 + 24) + 8008LL), v3)) == 0LL) )
    {
LABEL_12:
      *((_DWORD *)v3 + 11) |= 2u;
      LODWORD(v50) = 1;
      goto LABEL_13;
    }
    v7 = *((_QWORD *)v5 + 2);
    if ( v7 )
    {
      v8 = (_QWORD *)PsGetCurrentProcessWin32Process(v6);
      v9 = v8;
      if ( v8 && *v8 )
      {
        v35 = PsGetProcessWow64Process(*v8);
        v36 = *((unsigned int *)v9 + 73);
        v37 = *((_DWORD *)v9 + 73);
        if ( v35 )
          v10 = (struct _DC_ATTR *)(v36 ^ (unsigned int)__ROR4__(v7, 32 - (v37 & 0x1F)));
        else
          v10 = (struct _DC_ATTR *)(v36 ^ __ROR8__(v7, 64 - (v37 & 0x3Fu)));
LABEL_10:
        if ( v10 && !(unsigned int)DC::SaveAttributes(v3, v10) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
          v3 = 0LL;
          goto LABEL_41;
        }
        goto LABEL_12;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v10 = 0LL;
    goto LABEL_10;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v51);
  v44 = GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 1u);
  if ( !(_BYTE)v51 )
    UserSessionSwitchLeaveCrit(v43, v42, v45, v46);
  return (HDC)v44;
}
