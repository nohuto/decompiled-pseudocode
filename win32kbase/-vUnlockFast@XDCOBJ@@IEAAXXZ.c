void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  __int64 v1; // rbp
  int *v3; // rcx
  int v4; // edx
  HDC v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // r8d
  unsigned int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  struct _DC_ATTR *v22; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v24; // rsi
  __int64 ProcessWow64Process; // rax
  int v26; // ecx
  unsigned __int64 v27; // rbx
  int v28; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*((_DWORD *)this + 2) || (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    goto LABEL_2;
  if ( !*((_DWORD *)this + 3) )
  {
    v6 = SGDGetSessionState(this);
    v7 = *(_QWORD *)this;
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8008LL);
    v9 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)v8,
           (unsigned __int16)**(_DWORD **)this | (**(_DWORD **)this >> 8) & 0xFF0000u);
    v10 = *(_QWORD *)(v8 + 16);
    v11 = v9;
    v12 = *(_DWORD *)(v10 + 2056);
    v13 = v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
    if ( v9 < v13 )
    {
      if ( v9 >= v12 )
        v14 = ((v9 - v12) >> 16) + 1;
      else
        v14 = 0;
      v15 = *(_QWORD *)(v10 + 8LL * v14 + 8);
      if ( v14 )
        v9 += ((1 - v14) << 16) - v12;
      if ( v9 < *(_DWORD *)(v15 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                     + 16LL * (unsigned __int8)v9
                     + 8) )
      {
        v1 = *(_QWORD *)v15 + 24LL * v9;
      }
    }
    v16 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v8, v11);
    v18 = v16;
    if ( v16 >= v13 )
      goto LABEL_37;
    if ( v16 >= v12 )
      v17 = ((v16 - v12) >> 16) + 1;
    else
      v17 = 0LL;
    v19 = *(_QWORD *)(v10 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v18 = ((1 - (_DWORD)v17) << 16) - v12 + (unsigned int)v18;
    if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 20) )
    {
LABEL_37:
      v20 = 0LL;
    }
    else
    {
      v17 = 2LL * (unsigned __int8)v18;
      v20 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
    }
    if ( v20 == v7 && v1 )
    {
      v21 = *(_QWORD *)(v1 + 16);
      if ( v21 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
        v24 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
        {
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v26 = *((_DWORD *)v24 + 73);
          if ( ProcessWow64Process )
            v27 = (unsigned int)__ROR4__(v21, 32 - (v26 & 0x1F));
          else
            v27 = __ROR8__(v21, 64 - (v26 & 0x3Fu));
          v22 = (struct _DC_ATTR *)(*((unsigned int *)v24 + 73) ^ v27);
LABEL_25:
          if ( v22 )
            DC::RestoreAttributes(*(DC **)this, v22);
          goto LABEL_27;
        }
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
      v22 = 0LL;
      goto LABEL_25;
    }
  }
LABEL_27:
  *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
  *((_DWORD *)this + 2) = 0;
LABEL_2:
  v3 = *(int **)this;
  v4 = *((_DWORD *)this + 3);
  v28 = 0;
  v5 = *(HDC *)v3;
  HmgDecrementExclusiveReferenceCountEx(v3, v4, &v28);
  if ( v28 )
    GrepDeleteDC(v5, 0x2000000u);
}
