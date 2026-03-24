/*
 * XREFs of ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C002F5A8
 * Callers:
 *     _SetClipboardData @ 0x1C002F514 (_SetClipboardData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C002F788 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C021EDE0 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002FA10 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015CD28 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, void *a3, int a4, int a5)
{
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

  if ( !*((_QWORD *)a1 + 10) || !a2 )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 2u);
  v10 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = *((_QWORD *)a1 + 16);
    if ( v11 )
    {
      v12 = 32LL * *((unsigned int *)a1 + 34);
      if ( v12 > 0xFFFFFFFF || (int)v12 + 32 < (unsigned int)v12 )
      {
        v14 = 0LL;
        goto LABEL_9;
      }
      v13 = UserReAllocPool(v11, (unsigned int)v12, (unsigned int)(v12 + 32), 1650684757LL);
    }
    else
    {
      v13 = Win32AllocPool(32LL, 1650684757LL);
    }
    v14 = v13;
LABEL_9:
    if ( v14 )
    {
      *((_QWORD *)a1 + 16) = v14;
      if ( (unsigned int)UserGetAtomName((unsigned __int16)a2, v19, 256LL) )
      {
        UserAddAtomEx(v19, 0LL, 2LL);
        v15 = *((unsigned int *)a1 + 34);
        v10 = (struct tagCLIP *)(32 * v15 + v14);
        *((_DWORD *)a1 + 34) = v15 + 1;
        *(_DWORD *)v10 = a2;
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  UT_FreeCBFormat(ClipFormat);
LABEL_12:
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
