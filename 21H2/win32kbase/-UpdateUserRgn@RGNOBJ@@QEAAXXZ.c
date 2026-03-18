/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0052470
 * Callers:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(__int64 this, __int64 a2, __int64 a3, __int64 a4)
{
  RGNOBJ *v4; // r15
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 v9; // r8
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  __int64 v15; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx

  v4 = (RGNOBJ *)this;
  v5 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v6 = (unsigned __int16)*v5 | (*v5 >> 8) & 0xFF0000;
    if ( v6 >= 0x10000 )
    {
      this = (__int64)gpHandleManager;
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        this = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)*v5,
                                      1)
               + 13);
        if ( (_DWORD)this == HIWORD(v6) )
          v6 = (unsigned __int16)v6;
      }
      else
      {
        v6 = (unsigned __int16)*v5;
      }
    }
    v7 = *((_QWORD *)gpHandleManager + 2);
    v8 = *(_DWORD *)(v7 + 2056);
    if ( v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      v11 = 0LL;
      v10 = 1;
    }
    else
    {
      if ( v6 >= v8 )
        this = ((v6 - v8) >> 16) + 1;
      else
        this = 0LL;
      v9 = *(_QWORD *)(v7 + 8 * this + 8);
      v10 = 1;
      if ( (_DWORD)this )
        a4 = v6 + ((1 - (_DWORD)this) << 16) - v8;
      else
        a4 = v6;
      v11 = 0LL;
      if ( (unsigned int)a4 < *(_DWORD *)(v9 + 20) )
      {
        this = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8LL * ((unsigned int)a4 >> 8))
                         + 16LL * (unsigned __int8)a4
                         + 8);
        if ( this )
        {
          this = 3LL * (unsigned int)a4;
          v11 = *(_QWORD *)v9 + 24LL * (unsigned int)a4;
        }
      }
    }
    if ( v6 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        this = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v6,
                                      1)
               + 13);
        if ( (_DWORD)this == HIWORD(v6) )
          v6 = (unsigned __int16)v6;
      }
      else
      {
        v6 = (unsigned __int16)v6;
      }
    }
    v12 = *(unsigned int *)(v7 + 2056);
    if ( v6 >= (unsigned int)v12 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      goto LABEL_47;
    if ( v6 >= (unsigned int)v12 )
      this = ((v6 - (unsigned int)v12) >> 16) + 1;
    else
      this = 0LL;
    v13 = *(_QWORD *)(v7 + 8 * this + 8);
    if ( (_DWORD)this )
      v6 += ((1 - (_DWORD)this) << 16) - v12;
    if ( v6 >= *(_DWORD *)(v13 + 20) )
    {
LABEL_47:
      v14 = 0LL;
    }
    else
    {
      this = 2LL * (unsigned __int8)v6;
      v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8LL * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
    }
    if ( v14 != v5 )
      v11 = 0LL;
    v15 = *(_QWORD *)(v11 + 16);
    if ( v15 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(this, v14, v12, a4);
      v17 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process )
        KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
      ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
      v19 = *((unsigned int *)v17 + 73);
      v20 = *((_DWORD *)v17 + 73);
      if ( ProcessWow64Process )
        v21 = v19 ^ (unsigned int)__ROR4__(v15, 32 - (v20 & 0x1F));
      else
        v21 = __ROR8__(v15, 64 - (v20 & 0x3Fu)) ^ v19;
      if ( v21 && (*(_DWORD *)v21 & 0x10) != 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v4 + 84LL) != 1 )
          v10 = (*(_DWORD *)(*(_QWORD *)v4 + 80LL) > 0x38u) + 2;
        *(_DWORD *)(v21 + 4) = v10;
        *(_OWORD *)(v21 + 8) = *(_OWORD *)(*(_QWORD *)v4 + 96LL);
      }
    }
  }
}
