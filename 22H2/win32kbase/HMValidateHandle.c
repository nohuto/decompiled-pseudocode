/*
 * XREFs of HMValidateHandle @ 0x1C0043940
 * Callers:
 *     ValidateHmenu @ 0x1C00438F0 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012BDD0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C012ECF0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C018DAA0 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ValidateHandleSecure @ 0x1C0044200 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  char *v5; // rdi
  _QWORD *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v10; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C024FA38 + (unsigned int)(unsigned __int16)a1 * dword_1C024FA40;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v11);
    v6 = gpKernelHandleTable;
    v7 = 3LL * (unsigned int)((v5 - (char *)qword_1C024FA38) >> 5);
    if ( (WORD1(a1) == *((_WORD *)v5 + 13)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (v5[25] & 1) == 0
      && v5[24] == (_BYTE)v3 )
    {
      v4 = v6[v7];
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v4 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v4 )
    return v4;
  switch ( v3 )
  {
    case 1:
      v10 = 1400LL;
      break;
    case 2:
      v10 = 1401LL;
      break;
    case 3:
      v10 = 1402LL;
      break;
    case 4:
      v10 = 1405LL;
      break;
    case 5:
      v10 = 1404LL;
      break;
    case 8:
      v10 = 1403LL;
      break;
    default:
      v10 = 6LL;
      break;
  }
  UserSetLastError(v10, v8);
  return 0LL;
}
