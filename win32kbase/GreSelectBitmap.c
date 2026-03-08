/*
 * XREFs of GreSelectBitmap @ 0x1C0043B10
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

HBITMAP __fastcall GreSelectBitmap(HDC a1, HBITMAP a2)
{
  HBITMAP v3; // rbx
  __int64 v4; // rcx
  DC *v5; // rdi
  __int64 v6; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct _DC_ATTR *v10; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rsi
  DC *v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]

  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v18, a1);
  v5 = v18;
  if ( !v18 )
    goto LABEL_13;
  if ( (*((_DWORD *)v18 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v19)
      || (v6 = SGDGetSessionState(v4),
          v5 = v18,
          (EntryFromObject = GdiHandleManager::GetEntryFromObject(
                               *(GdiHandleManager **)(*(_QWORD *)(v6 + 24) + 8008LL),
                               v18)) == 0LL) )
    {
LABEL_8:
      *((_DWORD *)v5 + 11) |= 2u;
      v5 = v18;
      LODWORD(v19) = 1;
      goto LABEL_9;
    }
    v9 = *((_QWORD *)EntryFromObject + 2);
    if ( v9 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
      v13 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v15 = *((unsigned int *)v13 + 73);
        v16 = *((_DWORD *)v13 + 73);
        if ( ProcessWow64Process )
          v17 = (unsigned int)__ROR4__(v9, 32 - (v16 & 0x1F));
        else
          v17 = __ROR8__(v9, 64 - (v16 & 0x3Fu));
        v5 = v18;
        v10 = (struct _DC_ATTR *)(v15 ^ v17);
LABEL_7:
        if ( v10 )
        {
          if ( !(unsigned int)DC::SaveAttributes(v5, v10) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
            v18 = 0LL;
            goto LABEL_13;
          }
          v5 = v18;
        }
        goto LABEL_8;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      v5 = v18;
    }
    v10 = 0LL;
    goto LABEL_7;
  }
LABEL_9:
  if ( (*((_DWORD *)v5 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v5);
    v5 = v18;
  }
  if ( v5 )
    v3 = hbmSelectBitmapInternal((struct XDCOBJ *)&v18, a2, 0, 0, 1);
LABEL_13:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v18);
  return v3;
}
