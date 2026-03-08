/*
 * XREFs of xxxForceWindowToDpiForTest @ 0x1C01BBDC8
 * Callers:
 *     NtUserForceWindowToDpiForTest @ 0x1C01D0A00 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxForceWindowToDpiForTest(struct tagWND *this, int a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _OWORD *v6; // r8
  unsigned int v7; // edx
  unsigned __int16 v8; // r12
  struct tagBWL *v9; // rax
  unsigned int v10; // esi
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // rcx

  v4 = Win32AllocPoolZInit(100LL, 1886872661LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (_OWORD *)*((_QWORD *)this + 36);
    *(_OWORD *)v4 = *v6;
    *(_OWORD *)(v4 + 16) = v6[1];
    *(_OWORD *)(v4 + 32) = v6[2];
    *(_OWORD *)(v4 + 48) = v6[3];
    *(_OWORD *)(v4 + 64) = v6[4];
    *(_OWORD *)(v4 + 80) = v6[5];
    *(_DWORD *)v4 = 1;
    v7 = (100 * a2 + 48) / 0x60u;
    *(_DWORD *)(v4 + 4) = v7;
    *(_DWORD *)(v4 + 8) = v7;
    *(_DWORD *)(v4 + 12) = v7;
    *(_DWORD *)(v4 + 16) = v7;
    v8 = *(_WORD *)(*((_QWORD *)this + 5) + 284LL);
    v9 = BuildHwndList(this, 1, 0LL, 1);
    if ( v9 )
    {
      *((_DWORD *)this + 80) |= 0x40000u;
      v11 = (_QWORD *)((char *)v9 + 32);
      v10 = 1;
      while ( *v11 != 1LL )
      {
        v12 = HMValidateHandleNoSecure(*v11, 1);
        v13 = v12;
        if ( v12 )
        {
          *(_WORD *)(*(_QWORD *)(v12 + 40) + 284LL) = a2;
          v14 = *(_DWORD **)(v12 + 288);
          if ( v14 )
          {
            --*v14;
            v15 = *(_DWORD **)(v13 + 288);
            if ( !*v15 )
              Win32FreePool(v15);
          }
          *(_QWORD *)(v13 + 288) = v5;
          ++*v5;
        }
        ++v11;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( (*v5)-- == 1 )
      Win32FreePool(v5);
    xxxNotifyMonitorChanged(this, 0LL, 0LL, v8);
  }
  else
  {
    return 0;
  }
  return v10;
}
