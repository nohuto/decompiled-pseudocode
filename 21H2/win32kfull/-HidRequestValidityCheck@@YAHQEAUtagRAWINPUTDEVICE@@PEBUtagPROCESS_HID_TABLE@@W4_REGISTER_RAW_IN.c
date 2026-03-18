/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00AE5F4
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00AE358 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C01030EC (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v5 = 0LL;
  if ( a3 == 2 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFC0CE) != 0 )
      goto LABEL_38;
  }
  if ( !*(_WORD *)a1 )
    goto LABEL_36;
  if ( a2 && *(_WORD *)a1 == 1 && *(_WORD *)(a1 + 2) == 6 )
  {
    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 100) & 0x800u) >> 11 != v6 )
        goto LABEL_36;
    }
    else if ( (*(_DWORD *)(a2 + 100) & 0x800) != 0 )
    {
      goto LABEL_36;
    }
  }
  if ( a3 != 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
      v5 = ValidateHwnd(v7);
  }
  v8 = *(_DWORD *)(a1 + 4);
  if ( (v8 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_38;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      v12 = (unsigned __int8)v8 & 0xF0;
      if ( (_BYTE)v12 != 48 || !v5 || *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v12) )
        goto LABEL_38;
    }
    else if ( *(_WORD *)(a1 + 2) != 6 )
    {
      goto LABEL_38;
    }
  }
  a2 = *(unsigned int *)(a1 + 4);
  if ( (a2 & 0x400) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_38;
    if ( *(_WORD *)(a1 + 2) != 6 )
      goto LABEL_38;
    v9 = (unsigned __int8)a2 & 0xF0;
    if ( (_DWORD)v9 != 48 )
      goto LABEL_38;
  }
  else
  {
    v9 = (unsigned __int8)a2 & 0xF0;
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_16;
  if ( (((_DWORD)v9 - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_38:
    v11 = 1004LL;
    goto LABEL_37;
  }
  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_36;
LABEL_16:
  switch ( (_DWORD)v9 )
  {
    case 0:
      a2 &= 0x1100u;
LABEL_18:
      if ( !*(_WORD *)(a1 + 2) )
        goto LABEL_36;
      if ( (_DWORD)v9 == 16 )
      {
        if ( !(_DWORD)a2 && !*(_QWORD *)(a1 + 8) )
          return 1LL;
        goto LABEL_36;
      }
      break;
    case 0x20:
      if ( *(_WORD *)(a1 + 2) )
        goto LABEL_36;
      break;
    case 0x10:
      a2 &= 0x1100u;
      if ( (_DWORD)a2 )
        goto LABEL_36;
      goto LABEL_18;
    default:
      if ( (_DWORD)v9 != 48 || !(unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) )
        goto LABEL_36;
      break;
  }
  if ( a3 == 1 || !*(_QWORD *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_24;
  }
  else if ( !v5 )
  {
    goto LABEL_36;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v9) )
  {
LABEL_24:
    if ( (*(_DWORD *)(a1 + 4) & 0x1100) == 0 || v5 || a3 == 1 && *(_QWORD *)(a1 + 8) )
      return 1LL;
  }
LABEL_36:
  v11 = 87LL;
LABEL_37:
  UserSetLastError(v11, a2);
  return 0LL;
}
