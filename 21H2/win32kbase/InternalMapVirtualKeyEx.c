/*
 * XREFs of InternalMapVirtualKeyEx @ 0x1C003F3A0
 * Callers:
 *     NtUserMapVirtualKeyEx @ 0x1C003F300 (NtUserMapVirtualKeyEx.c)
 *     _GetKeyNameText @ 0x1C0051280 (_GetKeyNameText.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01E426C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01E9B0C (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // r10
  int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 v7; // dx
  unsigned __int8 *v8; // rcx
  unsigned __int8 v9; // dl
  char *v10; // rcx
  unsigned int result; // eax
  _BYTE *v12; // rax
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rcx

  v3 = 0;
  v4 = a1;
  v5 = a2;
  v6 = 0;
  if ( !(_DWORD)a2 )
    goto LABEL_2;
  if ( (_DWORD)a2 == 1 )
    goto LABEL_26;
  if ( (_DWORD)a2 != 2 )
  {
    if ( (_DWORD)a2 != 3 )
    {
      if ( (_DWORD)a2 == 4 )
      {
LABEL_2:
        if ( (unsigned int)v4 <= 0x12 && (unsigned int)v4 >= 0x10 )
          LODWORD(v4) = 2 * v4 + 128;
        v7 = 0;
        if ( *(_BYTE *)(a3 + 56) )
        {
          while ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * v7) != (_DWORD)v4 )
          {
            if ( ++v7 >= *(unsigned __int8 *)(a3 + 56) )
              goto LABEL_6;
          }
          return (unsigned __int8)v7;
        }
LABEL_6:
        v8 = *(unsigned __int8 **)(a3 + 64);
        if ( v8 )
        {
          while ( *((_WORD *)v8 + 1) )
          {
            if ( v8[2] == (_DWORD)v4 )
            {
              result = *v8;
              if ( v5 == 4 )
                result |= 0xE000u;
              return result;
            }
            v8 += 4;
          }
        }
        if ( v5 == 4 )
        {
          v13 = *(unsigned __int8 **)(a3 + 72);
          if ( v13 )
          {
            while ( *((_WORD *)v13 + 1) )
            {
              if ( v13[2] == (_DWORD)v4 )
                return *v13 | 0xE100;
              v13 += 4;
              if ( !v13 )
                break;
            }
          }
        }
        v9 = aVkNumpad;
        v10 = &aVkNumpad;
        if ( aVkNumpad )
        {
          while ( v9 != (_DWORD)v4 )
          {
            v9 = *++v10;
            if ( !*v10 )
              return 0;
          }
          return (_DWORD)v10 - (unsigned int)&aVkNumpad + 71;
        }
        return 0;
      }
      goto LABEL_50;
    }
LABEL_26:
    if ( (unsigned int)v4 < *(unsigned __int8 *)(a3 + 56) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2 * v4);
    }
    else
    {
      if ( (v4 & 0xFFFFFF00) == 0xE000 )
      {
        v12 = *(_BYTE **)(a3 + 64);
        goto LABEL_29;
      }
      if ( (v4 & 0xFFFFFF00) == 0xE100 )
      {
        v12 = *(_BYTE **)(a3 + 72);
LABEL_29:
        if ( v12 )
        {
          while ( *((_WORD *)v12 + 1) )
          {
            if ( *v12 == (_BYTE)v4 )
            {
              v6 = (unsigned __int8)v12[2];
              break;
            }
            v12 += 4;
          }
        }
      }
    }
    if ( (_DWORD)a2 == 1 && v6 - 160 <= 5 )
      v6 = ((v6 - 160) >> 1) + 16;
    if ( v6 != 255 )
      return v6;
    return v3;
  }
  if ( (unsigned int)v4 >= 0x41 && (unsigned int)v4 <= 0x5A )
    return v4;
  a2 = *(_QWORD *)(a3 + 8);
  if ( !a2 )
    goto LABEL_50;
LABEL_55:
  v14 = *(unsigned __int8 **)a2;
  if ( !*(_QWORD *)a2 )
  {
LABEL_50:
    UserSetLastError(87LL, a2, a3, 0LL);
    return 0;
  }
  while ( 1 )
  {
    if ( !*v14 )
    {
      a2 += 16LL;
      goto LABEL_55;
    }
    if ( *v14 == (_DWORD)v4 )
      break;
    v14 += *(unsigned __int8 *)(a2 + 9);
  }
  result = *((unsigned __int16 *)v14 + 1);
  if ( (_WORD)result == 0xF001 )
    return *(unsigned __int16 *)&v14[*(unsigned __int8 *)(a2 + 9) + 2] | 0x80000000;
  if ( (_WORD)result == 0xF000 )
    return 0;
  return result;
}
