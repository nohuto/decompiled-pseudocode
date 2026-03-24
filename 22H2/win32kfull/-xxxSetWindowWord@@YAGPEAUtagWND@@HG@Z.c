/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C015B99C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C015B8C0 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     FCallerOk @ 0x1C00FB0AC (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, int a2, unsigned __int16 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r9
  bool v13; // sf
  unsigned __int64 v14; // r9
  _WORD *v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rdx
  unsigned __int16 *v19; // rax
  unsigned __int16 v20; // si
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rdx
  int *v32; // rax
  int v33; // ebx
  unsigned int v34; // ecx
  _DWORD *v35; // r10
  __int64 v36; // rcx
  char v37; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v37 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
  {
LABEL_68:
    v22 = 5LL;
    goto LABEL_69;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v22 = 1413LL;
LABEL_69:
      UserSetLastError(v22, v7, v8);
      return 0LL;
    }
    if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *(unsigned int *)(v9 + 252) )
        goto LABEL_9;
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v23 == PsGetCurrentProcessWin32Process(v4 + 2) || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
        goto LABEL_9;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v23 + 880)
        || *(int *)(PsGetCurrentProcessWin32Process(v26) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
        goto LABEL_9;
      }
      goto LABEL_68;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v9 + 216);
    *(_QWORD *)(v9 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v9 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v9 + 28);
    *(_DWORD *)(v9 + 28) = v3 | *(_DWORD *)(v9 + 28) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *(unsigned int *)(v9 + 252) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v10 != PsGetCurrentProcessWin32Process(v4 + 2) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
    {
      v27 = PsGetCurrentProcessWin32Process(v11);
      if ( (unsigned __int8)CheckAccess(v27 + 880, v10 + 880) || *(int *)(PsGetCurrentProcessWin32Process(v28) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
        v37 = 1;
        goto LABEL_8;
      }
      goto LABEL_68;
    }
  }
LABEL_8:
  v12 = *((_QWORD *)a1 + 5);
  v8 = *(_WORD *)(v12 + 42) & 0x2FFF;
  if ( (*(_WORD *)(v12 + 42) & 0x2FFF) == 0 )
  {
LABEL_9:
    v13 = (v4 & 0x80000000) != 0LL;
    goto LABEL_10;
  }
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_43:
    v29 = 1413LL;
    goto LABEL_44;
  }
  v7 = (*(_WORD *)(v12 + 42) & 0x2FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 320 )
    goto LABEL_9;
  v8 = (unsigned int)(v8 - 673);
  if ( !(_DWORD)v8 )
  {
    if ( !(_DWORD)v4 )
    {
      v30 = **(_QWORD **)(v12 + 296);
      if ( !v30 || v30 == -1 )
      {
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
      else
      {
        v31 = (int *)(v30 + 8);
        v32 = v31;
        if ( (unsigned __int64)v31 >= MmUserProbeAddress )
          v32 = (int *)MmUserProbeAddress;
        v33 = *v32;
        *v31 = v3;
        if ( v37 )
          KeDetachProcess();
        return (unsigned __int16)v33;
      }
    }
    goto LABEL_43;
  }
  if ( (_DWORD)v8 != 6 )
    goto LABEL_43;
  v13 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_43;
LABEL_10:
  if ( v13 )
    goto LABEL_43;
  v8 = *((_QWORD *)a1 + 5);
  v14 = *(unsigned int *)(v8 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v14 + *(_DWORD *)(v8 + 200)) )
    goto LABEL_43;
  v15 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v15[3] & 0x100) != 0 )
  {
    v34 = 0;
    v35 = &gDefaultServerClasses;
    while ( *v15 != *(_WORD *)(gpsi + 2LL * ((*v35 >> 3) & 0x1F) + 868) )
    {
      ++v34;
      v35 += 12;
      if ( v34 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v34 + 6) )
    {
      v7 = *v35 & 0xF8;
      if ( (*(_BYTE *)v35 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFEE0uLL )
      {
        v29 = 5LL;
LABEL_44:
        UserSetLastError(v29, v7, v8);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_13:
  v16 = v4;
  if ( v4 + 2 <= v14 )
  {
    v36 = *((_QWORD *)a1 + 35);
    v20 = *(_WORD *)(v4 + v36);
    *(_WORD *)(v16 + v36) = v3;
  }
  else
  {
    v17 = v4 - v14;
    v18 = *(_QWORD *)(v8 + 296);
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
      v19 = (unsigned __int16 *)(v18 + v17 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v19 = (unsigned __int16 *)(v17 + v18);
    v20 = *v19;
    *v19 = v3;
  }
  if ( v6 )
    KeDetachProcess();
  return v20;
}
