/*
 * XREFs of ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01461D0
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0145C84 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _SetClipboardData @ 0x1C014613C (_SetClipboardData.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0219798 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetClipboardData(struct tagWINDOWSTATION *a1, __int64 a2, void *a3, int a4, int a5)
{
  int v7; // esi
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v19[512]; // [rsp+20h] [rbp-228h] BYREF

  v7 = a2;
  if ( !*((_QWORD *)a1 + 10) || !(_DWORD)a2 )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 2);
  v10 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = *((_QWORD *)a1 + 16);
    if ( v11 )
    {
      v12 = 32LL * *((unsigned int *)a1 + 34);
      if ( v12 > 0xFFFFFFFF || (int)v12 + 32 < (unsigned int)v12 )
        return 0LL;
      v13 = UserReAllocPool(v11, (unsigned int)v12, (unsigned int)(v12 + 32), 1650684757LL);
    }
    else
    {
      v13 = Win32AllocPoolZInit(32LL, 1650684757LL);
    }
    v14 = v13;
    if ( v13 )
    {
      *((_QWORD *)a1 + 16) = v13;
      if ( (unsigned int)UserGetAtomName((unsigned __int16)v7, v19, 256LL) )
      {
        UserAddAtomEx(v19, 0LL, 2LL);
        v15 = *((unsigned int *)a1 + 34);
        *((_DWORD *)a1 + 34) = v15 + 1;
        v10 = (struct tagCLIP *)(32LL * (unsigned int)v15 + v14);
        *(_DWORD *)v10 = v7;
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  UT_FreeCBFormat(ClipFormat);
LABEL_11:
  *((_QWORD *)v10 + 1) = a3;
  *((_DWORD *)v10 + 4) = a4;
  v16 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v15) + 880);
  *((_DWORD *)v10 + 5) = v16;
  *((_DWORD *)v10 + 6) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 884);
  if ( a5 )
  {
    *((_DWORD *)a1 + 16) |= 0x40u;
    if ( (*((_DWORD *)a1 + 16) & 0x80u) == 0 )
      ++*((_DWORD *)a1 + 36);
  }
  v17 = *((_QWORD *)a1 + 14);
  if ( !v17 || *(_QWORD *)(v17 + 16) != gptiCurrent )
  {
    if ( a5 )
      ++*((_DWORD *)a1 + 35);
  }
  return 1LL;
}
