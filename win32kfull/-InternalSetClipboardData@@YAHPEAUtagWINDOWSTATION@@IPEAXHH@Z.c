/*
 * XREFs of ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01FECA4
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FEEDC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF19C (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _SetClipboardData @ 0x1C02007CC (_SetClipboardData.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FF294 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 */

__int64 __fastcall InternalSetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, void *a3, int a4, int a5)
{
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _BYTE v21[512]; // [rsp+20h] [rbp-228h] BYREF

  if ( !*((_QWORD *)a1 + 10) || !a2 )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 2);
  v10 = ClipFormat;
  if ( !ClipFormat )
  {
    v12 = *((_QWORD *)a1 + 16);
    if ( v12 )
    {
      v14 = 32LL * *((unsigned int *)a1 + 34);
      if ( v14 > 0xFFFFFFFF || (int)v14 + 32 < (unsigned int)v14 )
        return 0LL;
      v13 = UserReAllocPool(v12, (unsigned int)v14, (unsigned int)(v14 + 32), 1650684757LL);
    }
    else
    {
      v13 = Win32AllocPoolZInit(32LL, 1650684757LL);
    }
    v15 = v13;
    if ( v13 )
    {
      *((_QWORD *)a1 + 16) = v13;
      if ( (unsigned int)UserGetAtomName((unsigned __int16)a2, v21, 256LL) )
      {
        UserAddAtomEx(v21, 0LL, 2LL);
        v11 = *((unsigned int *)a1 + 34);
        *((_DWORD *)a1 + 34) = v11 + 1;
        v10 = (struct tagCLIP *)(32LL * (unsigned int)v11 + v15);
        *(_DWORD *)v10 = a2;
        goto LABEL_13;
      }
    }
    return 0LL;
  }
  UT_FreeCBFormat(ClipFormat);
LABEL_13:
  *((_QWORD *)v10 + 1) = a3;
  *((_DWORD *)v10 + 4) = a4;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( CurrentProcessWin32Process )
  {
    v17 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  *((_DWORD *)v10 + 5) = *(_DWORD *)(CurrentProcessWin32Process + 864);
  v18 = PsGetCurrentProcessWin32Process(v17);
  if ( v18 )
    v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
  *((_DWORD *)v10 + 6) = *(_DWORD *)(v18 + 868);
  if ( a5 )
  {
    *((_DWORD *)a1 + 16) |= 0x40u;
    if ( (*((_DWORD *)a1 + 16) & 0x80u) == 0 )
      ++*((_DWORD *)a1 + 36);
  }
  v19 = *((_QWORD *)a1 + 14);
  if ( !v19 || *(_QWORD *)(v19 + 16) != gptiCurrent )
  {
    if ( a5 )
      ++*((_DWORD *)a1 + 35);
  }
  return 1LL;
}
