/*
 * XREFs of HMValidateHandle @ 0x1C0030A98
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     ValidateHmenu @ 0x1C0030BB0 (ValidateHmenu.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C01592E0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C01C4E8C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C002DD80 (ValidateHandleSecure.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // r14
  char *v8; // rdi
  __int64 v9; // rbp
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v3 = a2;
  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_25;
  v7 = gpKernelHandleTable;
  v8 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
  v9 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5);
  v10 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v8 + 13) && v10 != 0x7FFF && (v10 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_25;
  if ( (v8[25] & 1) == 0 && v8[24] == (_BYTE)v3 )
    v4 = v7[v9];
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3) )
      v4 = 0LL;
  }
  else
  {
    v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2) != 0);
    v4 &= v11;
  }
  if ( v8[25] < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v5, v6, v12);
    if ( CurrentProcessWin32Process )
    {
      v5 = 3LL * (unsigned __int8)v8[24];
      v15 = *((_WORD *)&unk_1C024AF4C + 12 * (unsigned __int8)v8[24]);
      if ( (v15 & 2) != 0 )
      {
        v16 = v7[v9 + 1];
LABEL_23:
        if ( v16 && v16 != CurrentProcessWin32Process )
          goto LABEL_25;
        goto LABEL_9;
      }
      if ( (v15 & 1) != 0 )
      {
        v17 = v7[v9 + 1];
        if ( v17 )
        {
          v16 = *(_QWORD *)(v17 + 424);
          goto LABEL_23;
        }
      }
    }
  }
LABEL_9:
  if ( v4 )
    return v4;
LABEL_25:
  switch ( v3 )
  {
    case 1:
      v18 = 1400LL;
      break;
    case 2:
      v18 = 1401LL;
      break;
    case 3:
      v18 = 1402LL;
      break;
    case 4:
      v18 = 1405LL;
      break;
    case 5:
      v18 = 1404LL;
      break;
    case 8:
      v18 = 1403LL;
      break;
    default:
      v18 = 6LL;
      break;
  }
  UserSetLastError(v18, v5, v6);
  return 0LL;
}
