/*
 * XREFs of GreRestoreOwnedDC @ 0x1C00A46A0
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00499E0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0186930 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRestoreOwnedDC(HDC a1, int a2)
{
  __int64 v3; // rcx
  DC *v4; // rbx
  __int64 v5; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v7; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v9; // rbx
  struct _DC_ATTR *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  DC *v14; // rbx
  __int64 v15; // rax
  struct _ENTRY *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  struct _DC_ATTR *v21; // rdi
  HDC v22; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // ecx
  DC *v35; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+58h] [rbp-8h]
  int v37; // [rsp+A0h] [rbp+40h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v35, a1);
  v4 = v35;
  if ( !v35 )
    goto LABEL_45;
  if ( (*((_DWORD *)v35 + 11) & 2) != 0 )
    goto LABEL_13;
  if ( !HIDWORD(v36) )
  {
    v5 = SGDGetSessionState(v3);
    v4 = v35;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v5 + 24) + 8008LL),
                        v35);
    if ( EntryFromObject )
    {
      v7 = *((_QWORD *)EntryFromObject + 2);
      if ( v7 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v3);
        v9 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
        {
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v25 = *((unsigned int *)v9 + 73);
          v26 = *((_DWORD *)v9 + 73);
          if ( ProcessWow64Process )
          {
            v3 = v26 & 0x1F;
            LOBYTE(v3) = 32 - v3;
            v27 = (unsigned int)__ROR4__(v7, v3);
          }
          else
          {
            v3 = v26 & 0x3F;
            LOBYTE(v3) = 64 - v3;
            v27 = __ROR8__(v7, v3);
          }
          v4 = v35;
          v10 = (struct _DC_ATTR *)(v25 ^ v27);
LABEL_9:
          if ( v10 )
          {
            if ( (unsigned int)DC::SaveAttributes(v4, v10) )
            {
              v4 = v35;
              goto LABEL_12;
            }
            _InterlockedDecrement((volatile signed __int32 *)v35 + 3);
            v35 = 0LL;
LABEL_45:
            EngSetLastError(6u);
            goto LABEL_46;
          }
          goto LABEL_12;
        }
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        v4 = v35;
      }
      v10 = 0LL;
      goto LABEL_9;
    }
  }
LABEL_12:
  *((_DWORD *)v4 + 11) |= 2u;
  v4 = v35;
  LODWORD(v36) = 1;
LABEL_13:
  if ( (*((_DWORD *)v4 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v4);
    v4 = v35;
  }
  if ( !v4 )
    goto LABEL_45;
  v11 = SGDGetSessionState(v3);
  if ( (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v11 + 24) + 8008LL),
                      v4)
        + 2) & 0xFFFFFFFE) == 0 )
    goto LABEL_45;
  if ( *((_WORD *)v35 + 6) <= 1u )
  {
    v13 = GrepRestoreDCOBJ((struct XDCOBJ *)&v35, a2);
    goto LABEL_19;
  }
  v33 = *((_QWORD *)v35 + 6);
  if ( v33 )
    v34 = *(_DWORD *)(v33 + 40);
  else
    v34 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(8LL, v34, *((unsigned __int16 *)v35 + 6));
LABEL_46:
  v13 = 0;
LABEL_19:
  v14 = v35;
  if ( !v35 )
    return v13;
  if ( (_DWORD)v36 && (*((_DWORD *)v35 + 11) & 2) != 0 )
  {
    if ( HIDWORD(v36)
      || (v15 = SGDGetSessionState(v12),
          v14 = v35,
          (v16 = GdiHandleManager::GetEntryFromObject(
                   *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v15 + 24) + 8008LL),
                   v35)) == 0LL) )
    {
LABEL_30:
      *((_DWORD *)v14 + 11) &= ~2u;
      v14 = v35;
      LODWORD(v36) = 0;
      goto LABEL_31;
    }
    v18 = *((_QWORD *)v16 + 2);
    if ( v18 )
    {
      v19 = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
      v20 = v19;
      if ( v19 && *v19 )
      {
        v28 = PsGetProcessWow64Process(*v19);
        v29 = *((unsigned int *)v20 + 73);
        v30 = v28 == 0;
        v31 = *((_DWORD *)v20 + 73);
        if ( v30 )
          v32 = __ROR8__(v18, 64 - (v31 & 0x3Fu));
        else
          v32 = (unsigned int)__ROR4__(v18, 32 - (v31 & 0x1F));
        v14 = v35;
        v21 = (struct _DC_ATTR *)(v29 ^ v32);
LABEL_28:
        if ( v21 )
        {
          DC::RestoreAttributes(v14, v21);
          v14 = v35;
        }
        goto LABEL_30;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      v14 = v35;
    }
    v21 = 0LL;
    goto LABEL_28;
  }
LABEL_31:
  v22 = *(HDC *)v14;
  v37 = 0;
  HmgDecrementExclusiveReferenceCountEx((int *)v14, SHIDWORD(v36), &v37);
  if ( v37 )
    GrepDeleteDC(v22, 0x2000000u);
  return v13;
}
