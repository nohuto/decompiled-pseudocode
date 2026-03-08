/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00
 * Callers:
 *     hbmSelectBitmap @ 0x1C000A040 (hbmSelectBitmap.c)
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCleanDC @ 0x1C0072B90 (GreCleanDC.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004B580 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct OBJECT *v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rcx
  struct OBJECT *v16; // rax
  __int64 v17; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v19; // rsi
  struct _DC_ATTR *v20; // rbx
  __int64 ProcessWow64Process; // rax
  int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v25; // [rsp+80h] [rbp+18h] BYREF

  XDCOBJ::vLockIgnoreAttributes(this, a2);
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
      goto LABEL_3;
    if ( *((_DWORD *)this + 3) )
      goto LABEL_24;
    v4 = SGDGetSessionState(v3);
    v5 = *(struct OBJECT **)this;
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8008LL);
    v7 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)v6,
           (unsigned __int16)**(_DWORD **)this | (**(_DWORD **)this >> 8) & 0xFF0000u);
    v8 = *(_QWORD *)(v6 + 16);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v7 >= v10 )
        v11 = ((v7 - v10) >> 16) + 1;
      else
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v7 += ((1 - (_DWORD)v11) << 16) - v10;
      v13 = 0LL;
      if ( v7 < *(_DWORD *)(v12 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8) )
      {
        v13 = *(_QWORD *)v12 + 24LL * v7;
      }
    }
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v6, v9);
    v25 = 0LL;
    v24 = 0;
    v16 = GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v8, v14, &v25, &v24)
        ? GdiHandleEntryTable::GetEntryObject(v25, v24)
        : 0LL;
    if ( v16 != v5 || !v13 )
    {
LABEL_24:
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
LABEL_3:
      if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty(*(DC **)this);
      return;
    }
    v17 = *(_QWORD *)(v13 + 16);
    if ( v17 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
      v19 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v22 = *((_DWORD *)v19 + 73);
        if ( ProcessWow64Process )
          v23 = (unsigned int)__ROR4__(v17, 32 - (v22 & 0x1F));
        else
          v23 = __ROR8__(v17, 64 - (v22 & 0x3Fu));
        v20 = (struct _DC_ATTR *)(*((unsigned int *)v19 + 73) ^ v23);
LABEL_22:
        if ( v20 && !(unsigned int)DC::SaveAttributes(*(DC **)this, v20) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
          *(_QWORD *)this = 0LL;
          return;
        }
        goto LABEL_24;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v20 = 0LL;
    goto LABEL_22;
  }
}
