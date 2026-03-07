HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rcx
  DC *v7; // rbx
  int v8; // r12d
  __int64 v9; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // r14
  struct _DC_ATTR *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned int v20; // r8d
  unsigned int v21; // edi
  unsigned int v22; // ecx
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  DC *v28; // rdx
  __int64 v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  struct _DC_ATTR *v32; // rdi
  HDC v33; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  bool v38; // zf
  int v39; // eax
  unsigned __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // eax
  HPALETTE v43; // [rsp+50h] [rbp-20h]
  DC *v44; // [rsp+58h] [rbp-18h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h]
  unsigned int v46; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v44, a1);
  v7 = v44;
  v8 = HIDWORD(v45);
  if ( !v44 )
    return v43;
  if ( (*((_DWORD *)v44 + 11) & 2) != 0 )
    goto LABEL_12;
  if ( !HIDWORD(v45) )
  {
    v9 = SGDGetSessionState(v6);
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v9 + 24) + 8008LL),
                        v7);
    if ( EntryFromObject )
    {
      v12 = *((_QWORD *)EntryFromObject + 2);
      if ( v12 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
        v14 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
        {
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v36 = *((unsigned int *)v14 + 73);
          v3 = 0LL;
          if ( ProcessWow64Process )
            v37 = (unsigned int)__ROR4__(v12, 32 - (v36 & 0x1F));
          else
            v37 = __ROR8__(v12, 64 - ((unsigned __int8)v36 & 0x3Fu));
          v15 = (struct _DC_ATTR *)(v36 ^ v37);
LABEL_9:
          if ( v15 && !(unsigned int)DC::SaveAttributes(v7, v15) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
            v7 = 0LL;
            v8 = HIDWORD(v45);
            goto LABEL_16;
          }
          goto LABEL_11;
        }
        v3 = 0LL;
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
      v15 = 0LL;
      goto LABEL_9;
    }
  }
LABEL_11:
  *((_DWORD *)v7 + 11) |= 2u;
  LODWORD(v45) = 1;
LABEL_12:
  if ( (*((_DWORD *)v7 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(v7);
  if ( *((_WORD *)v7 + 6) == 1 )
  {
    v43 = SelectPaletteWorker((struct XDCOBJ *)&v44, a2, a3);
  }
  else
  {
    v41 = *((_QWORD *)v7 + 6);
    if ( v41 )
      v42 = *(_DWORD *)(v41 + 40);
    else
      v42 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(17LL, v42, *((unsigned __int16 *)v7 + 6));
    v43 = 0LL;
  }
LABEL_16:
  if ( !v7 )
    return v43;
  if ( !(_DWORD)v45 || (*((_DWORD *)v7 + 11) & 2) == 0 )
    goto LABEL_44;
  if ( !v8 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v16) + 24) + 8008LL);
    v18 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v17,
            (unsigned __int16)*(_DWORD *)v7 | (*(_DWORD *)v7 >> 8) & 0xFF0000u);
    v19 = *(_QWORD *)(v17 + 16);
    v20 = v18;
    v21 = *(_DWORD *)(v19 + 2056);
    v46 = v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16);
    if ( v18 < v46 )
    {
      if ( v18 >= v21 )
        v22 = ((v18 - v21) >> 16) + 1;
      else
        v22 = 0;
      v23 = *(_QWORD *)(v19 + 8LL * v22 + 8);
      if ( v22 )
        v18 += ((1 - v22) << 16) - v21;
      if ( v18 < *(_DWORD *)(v23 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v18 >> 8))
                     + 16LL * (unsigned __int8)v18
                     + 8) )
      {
        v3 = *(_QWORD *)v23 + 24LL * v18;
      }
    }
    v24 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v17, v20);
    v26 = v24;
    if ( v24 >= v46 )
      goto LABEL_64;
    if ( v24 >= v21 )
      v25 = ((v24 - v21) >> 16) + 1;
    else
      v25 = 0LL;
    v27 = *(_QWORD *)(v19 + 8 * v25 + 8);
    if ( (_DWORD)v25 )
      v26 = ((1 - (_DWORD)v25) << 16) - v21 + (unsigned int)v26;
    if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 20) )
    {
LABEL_64:
      v28 = 0LL;
    }
    else
    {
      v25 = 2LL * (unsigned __int8)v26;
      v28 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8);
    }
    if ( v28 == v7 && v3 )
    {
      v29 = *(_QWORD *)(v3 + 16);
      if ( v29 )
      {
        v30 = (_QWORD *)PsGetCurrentProcessWin32Process(v25);
        v31 = v30;
        if ( v30 && *v30 )
        {
          v38 = PsGetProcessWow64Process(*v30) == 0;
          v39 = *((_DWORD *)v31 + 73);
          if ( v38 )
            v40 = __ROR8__(v29, 64 - (v39 & 0x3Fu));
          else
            v40 = (unsigned int)__ROR4__(v29, 32 - (v39 & 0x1F));
          v32 = (struct _DC_ATTR *)(*((unsigned int *)v31 + 73) ^ v40);
LABEL_41:
          if ( v32 )
            DC::RestoreAttributes(v7, v32);
          goto LABEL_43;
        }
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
      v32 = 0LL;
      goto LABEL_41;
    }
  }
LABEL_43:
  *((_DWORD *)v7 + 11) &= ~2u;
LABEL_44:
  v33 = *(HDC *)v7;
  v46 = 0;
  HmgDecrementExclusiveReferenceCountEx((int *)v7, v8, (int *)&v46);
  if ( v46 )
    GrepDeleteDC(v33, 0x2000000u);
  return v43;
}
