void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // rsi
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  unsigned int v10; // edx
  char v11; // al
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _DWORD *v29; // [rsp+88h] [rbp+10h]

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
    v29 = (_DWORD *)v3;
    v4 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)v3 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v3 + 16),
                                    (unsigned __int16)*v2,
                                    1)
             + 13) == HIWORD(v4) )
          v4 = (unsigned __int16)v4;
      }
      else
      {
        v4 = (unsigned __int16)*v2;
      }
    }
    v5 = *(_QWORD *)(v3 + 16);
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_DWORD *)(v5 + 2056);
    v9 = v8 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
    if ( v4 >= v9 )
    {
      v11 = 0;
    }
    else
    {
      if ( v4 >= v8 )
        v10 = ((v4 - v8) >> 16) + 1;
      else
        v10 = 0;
      v6 = *(_QWORD *)(v5 + 8LL * v10 + 8);
      if ( v10 )
        v7 = v4 + ((1 - v10) << 16) - v8;
      else
        v7 = v4;
      v11 = 1;
    }
    v12 = 0LL;
    if ( v11 )
    {
      v13 = (unsigned int)v7;
      if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 20) )
      {
        v15 = 0LL;
      }
      else
      {
        v14 = (unsigned int)v7 >> 8;
        v7 = 2LL * (unsigned __int8)v7;
        v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * v14) + 16LL * (unsigned __int8)v13 + 8);
      }
      if ( v15 )
      {
        v7 = 3 * v13;
        v12 = *(_QWORD *)v6 + 24 * v13;
      }
    }
    if ( v4 >= 0x10000 )
    {
      v7 = (unsigned __int16)v4;
      if ( *v29 > 0x10000u )
      {
        v7 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    (GdiHandleEntryDirectory *)v5,
                                    (unsigned __int16)v4,
                                    1)
             + 13);
        if ( (_DWORD)v7 == HIWORD(v4) )
          v4 = (unsigned __int16)v4;
      }
      else
      {
        v4 = (unsigned __int16)v4;
      }
    }
    if ( v4 >= v9 )
      goto LABEL_59;
    if ( v4 >= v8 )
      v7 = ((v4 - v8) >> 16) + 1;
    else
      v7 = 0LL;
    v16 = *(_QWORD *)(v5 + 8LL * (unsigned int)v7 + 8);
    if ( (_DWORD)v7 )
      v4 += ((1 - (_DWORD)v7) << 16) - v8;
    if ( v4 >= *(_DWORD *)(v16 + 20) )
    {
LABEL_59:
      v17 = 0LL;
    }
    else
    {
      v7 = 2LL * (unsigned __int8)v4;
      v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8LL * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
    }
    v18 = 0LL;
    if ( v17 == v2 )
      v18 = v12;
    v19 = *(_QWORD *)(v18 + 16);
    if ( v19 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
      v21 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v21 = 0LL;
      if ( v21 )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*v21);
        v23 = *((unsigned int *)v21 + 73);
        v24 = *((_DWORD *)v21 + 73);
        if ( ProcessWow64Process )
          v25 = v23 ^ (unsigned int)__ROR4__(v19, 32 - (v24 & 0x1F));
        else
          v25 = __ROR8__(v19, 64 - (v24 & 0x3Fu)) ^ v23;
        if ( v25 && (*(_DWORD *)v25 & 0x10) != 0 )
        {
          v26 = *(_DWORD **)this;
          if ( *(_QWORD *)this )
          {
            v27 = (__int64)(v26 + 12);
            v28 = (__int64)(v26 + 13);
          }
          else
          {
            v27 = 24LL;
            v28 = 28LL;
          }
          if ( *(_DWORD *)v28 == 1 )
            *(_DWORD *)(v25 + 4) = 1;
          else
            *(_DWORD *)(v25 + 4) = (*(_DWORD *)v27 > 0x38u) + 2;
          *(_OWORD *)(v25 + 8) = *(_OWORD *)(*(_QWORD *)this + 56LL);
        }
      }
      else
      {
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
    }
  }
}
