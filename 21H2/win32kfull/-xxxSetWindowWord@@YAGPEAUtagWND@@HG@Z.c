/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C014CF8C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C014CEB0 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     FCallerOk @ 0x1C00E464C (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, int a2, unsigned __int16 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // r9
  bool v11; // sf
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rdx
  _WORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  unsigned int v32; // ecx
  _DWORD *v33; // r9
  __int64 v34; // rcx

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
    goto LABEL_64;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v20 = 1413LL;
LABEL_65:
      UserSetLastError(v20, v7);
      return 0LL;
    }
    if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *(unsigned int *)(v8 + 248) )
        goto LABEL_9;
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v21 == PsGetCurrentProcessWin32Process(v4 + 2) )
        goto LABEL_9;
      v22 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v22 & 0x10) != 0 )
        goto LABEL_9;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v21 + 880)
        || *(int *)(PsGetCurrentProcessWin32Process(v24) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
LABEL_9:
        v11 = (v4 & 0x80000000) != 0LL;
LABEL_10:
        if ( !v11 )
        {
          v12 = *((_QWORD *)a1 + 5);
          v13 = *(unsigned int *)(v12 + 248);
          if ( (unsigned __int64)(unsigned int)v4 + 2 <= (unsigned int)(v13 + *(_DWORD *)(v12 + 200)) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
            if ( _bittest16((const signed __int16 *)(v14 + 6), 8u) )
            {
              v32 = 0;
              v33 = &gDefaultServerClasses;
              while ( *(_WORD *)v14 != *(_WORD *)(gpsi + 2LL * ((*v33 >> 3) & 0x1F) + 868) )
              {
                ++v32;
                v33 += 12;
                if ( v32 >= 8 )
                  goto LABEL_13;
              }
              if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v32 + 6) )
              {
                v7 = *v33 & 0xF8;
                if ( (*(_BYTE *)v33 & 0xF8) != 0xB0 )
                {
                  v28 = 5LL;
LABEL_44:
                  UserSetLastError(v28, v7);
                  if ( v6 )
                    KeDetachProcess();
                  return 0LL;
                }
              }
            }
LABEL_13:
            v15 = v4;
            if ( v4 + 2 <= v13 )
            {
              v34 = *((_QWORD *)a1 + 35);
              LOWORD(v4) = *(_WORD *)(v4 + v34);
              *(_WORD *)(v15 + v34) = v3;
            }
            else
            {
              v16 = v4 - v13;
              v17 = *(_QWORD *)(v12 + 296);
              if ( (*(_DWORD *)(v12 + 232) & 0x10) != 0 )
                v18 = (_WORD *)(v17 + v16 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
              else
                v18 = (_WORD *)(v16 + v17);
              LOWORD(v4) = *v18;
              *v18 = v3;
            }
            goto LABEL_17;
          }
        }
LABEL_43:
        v28 = 1413LL;
        goto LABEL_44;
      }
LABEL_64:
      v20 = 5LL;
      goto LABEL_65;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v8 + 216);
    *(_QWORD *)(v8 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v8 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v8 + 28);
    *(_DWORD *)(v8 + 28) = v3 | *(_DWORD *)(v8 + 28) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_8;
  if ( v4 + 2 <= *(unsigned int *)(v8 + 248) )
    goto LABEL_8;
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v9 == PsGetCurrentProcessWin32Process(v4 + 2) )
    goto LABEL_8;
  v25 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v25 & 0x10) != 0 )
    goto LABEL_8;
  v26 = PsGetCurrentProcessWin32Process(v25);
  if ( !(unsigned __int8)CheckAccess(v26 + 880, v9 + 880) && *(int *)(PsGetCurrentProcessWin32Process(v27) + 12) >= 0 )
    goto LABEL_64;
  KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
  v6 = 1;
LABEL_8:
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v10 + 42) & 0x2FFF) == 0 )
    goto LABEL_9;
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_43;
  v7 = (*(_WORD *)(v10 + 42) & 0x2FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 328 )
    goto LABEL_9;
  if ( (*(_WORD *)(v10 + 42) & 0x2FFF) != 0x2A1 )
  {
    if ( (*(_WORD *)(v10 + 42) & 0x2FFF) != 0x2A7 )
      goto LABEL_43;
    v11 = (v4 & 0x80000000) != 0LL;
    if ( (_DWORD)v4 )
      goto LABEL_43;
    goto LABEL_10;
  }
  if ( (_DWORD)v4 )
    goto LABEL_43;
  v29 = **(_QWORD **)(v10 + 296);
  if ( v29 && v29 != -1 )
  {
    v30 = (_DWORD *)(v29 + 8);
    v31 = v30;
    if ( (unsigned __int64)v30 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    LODWORD(v4) = *v31;
    *v30 = v3;
LABEL_17:
    if ( v6 )
      KeDetachProcess();
    return (unsigned __int16)v4;
  }
  if ( v6 )
    KeDetachProcess();
  return 0LL;
}
