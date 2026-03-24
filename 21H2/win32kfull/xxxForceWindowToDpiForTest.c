/*
 * XREFs of xxxForceWindowToDpiForTest @ 0x1C01E669C
 * Callers:
 *     NtUserForceWindowToDpiForTest @ 0x1C01F8B90 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxForceWindowToDpiForTest(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _OWORD *v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned __int16 v9; // r12
  struct tagBWL *v10; // r14
  unsigned __int64 *i; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // rcx

  v4 = Win32AllocPoolZInit(100LL, 1886872661LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (_OWORD *)*((_QWORD *)a1 + 36);
    v7 = 1;
    *(_OWORD *)v4 = *v6;
    *(_OWORD *)(v4 + 16) = v6[1];
    *(_OWORD *)(v4 + 32) = v6[2];
    *(_OWORD *)(v4 + 48) = v6[3];
    *(_OWORD *)(v4 + 64) = v6[4];
    *(_OWORD *)(v4 + 80) = v6[5];
    *(_DWORD *)v4 = 1;
    v8 = (100 * a2 + 48) / 0x60u;
    *(_DWORD *)(v4 + 4) = v8;
    *(_DWORD *)(v4 + 8) = v8;
    *(_DWORD *)(v4 + 12) = v8;
    *(_DWORD *)(v4 + 16) = v8;
    v9 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    v10 = BuildHwndList(a1, 1, 0LL);
    if ( v10 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x4000000u;
      for ( i = (unsigned __int64 *)((char *)v10 + 32); *i != 1; ++i )
      {
        v12 = HMValidateHandleNoSecure(*i, 1);
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
      }
    }
    else
    {
      v7 = 0;
    }
    if ( (*v5)-- == 1 )
      Win32FreePool(v5);
    xxxNotifyMonitorChanged(a1, 0LL, 0LL, v9);
  }
  else
  {
    return 0;
  }
  return v7;
}
