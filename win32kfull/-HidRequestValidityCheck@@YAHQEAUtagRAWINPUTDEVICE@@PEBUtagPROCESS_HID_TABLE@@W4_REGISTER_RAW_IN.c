/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5C58
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00D5AC8 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00D6024 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v6; // rbp
  int v7; // r8d
  _BYTE *v8; // rsi
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v16; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // r8
  bool v20; // zf

  v3 = (_DWORD *)(a1 + 4);
  v6 = 0LL;
  if ( a3 == 2 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (*v3 & 0xFFFF40CE) != 0 )
      goto LABEL_32;
  }
  if ( !*(_WORD *)a1 )
    goto LABEL_30;
  v8 = (_BYTE *)(a1 + 4);
  if ( a2 && *(_WORD *)a1 == 1 && *(_WORD *)(a1 + 2) == 6 )
  {
    v8 = (_BYTE *)(a1 + 4);
    if ( !((*(_DWORD *)(a1 + 4) & 1) != 0
         ? __CFSHR__(*(_DWORD *)(a2 + 100), 13) == v7
         : !__CFSHR__(*(_DWORD *)(a2 + 100), 13)) )
      goto LABEL_30;
  }
  if ( a3 != 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v8 = v3;
    if ( v9 )
      v6 = ValidateHwnd(v9);
  }
  if ( (*(_DWORD *)v8 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_32;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      if ( (*v8 & 0xF0) != 0x30 || !v6 )
        goto LABEL_32;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(_DWORD *)v8 & 0xF0);
      v19 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v20 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) == v19;
    }
    else
    {
      v20 = *(_WORD *)(a1 + 2) == 6;
    }
    if ( !v20 )
      goto LABEL_32;
  }
  v10 = *(_DWORD *)v8;
  if ( (*(_DWORD *)v8 & 0x400) != 0 && (*(_WORD *)a1 != 1 || *(_WORD *)(a1 + 2) != 6 || (v10 & 0xF0) != 0x30) )
    goto LABEL_32;
  if ( (v10 & 0x8000) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_32;
    if ( *(_WORD *)(a1 + 2) != 2 )
      goto LABEL_32;
    v11 = *(_DWORD *)v8 & 0x1100;
    if ( (v10 & 0x1100) == 0 )
      goto LABEL_32;
  }
  else
  {
    v11 = *(_DWORD *)v8 & 0x1100;
  }
  v12 = (unsigned __int8)v10 & 0xF0;
  if ( (v10 & 1) == 0 )
    goto LABEL_13;
  if ( (((_DWORD)v12 - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_32:
    v16 = 1004;
    goto LABEL_31;
  }
  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_30;
LABEL_13:
  if ( (v10 & 0xF0) != 0 )
  {
    if ( (_DWORD)v12 != 16 )
    {
      if ( (_DWORD)v12 == 32 )
      {
        if ( *(_WORD *)(a1 + 2) )
          goto LABEL_30;
      }
      else if ( (_DWORD)v12 != 48 || !(unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) )
      {
        goto LABEL_30;
      }
      goto LABEL_16;
    }
    if ( v11 )
      goto LABEL_30;
  }
  if ( !*(_WORD *)(a1 + 2) )
    goto LABEL_30;
  if ( (_DWORD)v12 == 16 )
  {
    if ( !v11 && !*(_QWORD *)(a1 + 8) )
      return 1LL;
    goto LABEL_30;
  }
LABEL_16:
  if ( a3 == 1 || !*(_QWORD *)(a1 + 8) )
  {
    if ( !v6 )
      goto LABEL_22;
  }
  else if ( !v6 )
  {
    goto LABEL_30;
  }
  v13 = PsGetCurrentProcessWin32Process(v12);
  v14 = v13;
  if ( v13 )
    v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) == v14 )
  {
LABEL_22:
    if ( (*(_DWORD *)v8 & 0x1100) == 0 || v6 || a3 == 1 && *(_QWORD *)(a1 + 8) )
      return 1LL;
  }
LABEL_30:
  v16 = 87;
LABEL_31:
  UserSetLastError(v16);
  return 0LL;
}
