__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, unsigned int a2, unsigned __int16 a3)
{
  int v3; // r13d
  __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // r8
  __int64 v8; // r15
  int v9; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  bool v28; // sf
  int v29; // ecx
  __int64 v30; // rdx
  _DWORD *v31; // rdx
  _DWORD *v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // r10
  __int64 v35; // rdx
  unsigned int v36; // ecx
  _DWORD *v37; // r9
  int v38; // esi
  __int64 v39; // rdx
  _WORD *v40; // rax
  __int64 v41; // rcx

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !(unsigned int)FCallerOk() )
    goto LABEL_77;
  v7 = *((_QWORD *)a1 + 5);
  v8 = (int)v4;
  if ( (*(_BYTE *)(v7 + 18) & 1) != 0 )
  {
    if ( (unsigned __int64)(int)v4 >= 8 && (int)v4 < 0 || (unsigned __int64)(int)v4 > 0x16 && (int)v4 < 30 )
    {
      v9 = 1413;
LABEL_78:
      UserSetLastError(v9);
      return 0LL;
    }
    if ( (*(_WORD *)(v7 + 42) & 0x2FFF) == 0x2A4 )
    {
      if ( (int)v4 < 0 )
        goto LABEL_45;
      if ( (int)v4 + 2LL <= (unsigned __int64)*(unsigned int *)(v7 + 248) )
        goto LABEL_57;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process((int)v4 + 2LL);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v12 == v11 )
        goto LABEL_57;
      v13 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v13 & 0x10) != 0 )
        goto LABEL_57;
      v14 = v12 + 864;
      v15 = PsGetCurrentProcessWin32Process(v13);
      if ( v15 )
        v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
      if ( (unsigned __int8)CheckAccess(v15 + 864, v14) )
        goto LABEL_21;
      v17 = PsGetCurrentProcessWin32Process(v16);
      if ( v17 )
        v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
      if ( *(int *)(v17 + 12) < 0 )
      {
LABEL_21:
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
LABEL_57:
        v28 = (int)v4 < 0;
LABEL_58:
        if ( !v28 )
        {
          v33 = *((_QWORD *)a1 + 5);
          v34 = *(unsigned int *)(v33 + 248);
          if ( v4 + 2 <= (unsigned __int64)(unsigned int)(v34 + *(_DWORD *)(v33 + 200)) )
          {
            v35 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
            if ( _bittest16((const signed __int16 *)(v35 + 6), 8u) )
            {
              v36 = 0;
              v37 = &gDefaultServerClasses;
              while ( *(_WORD *)v35 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
              {
                ++v36;
                v37 += 12;
                if ( v36 >= 8 )
                  goto LABEL_64;
              }
              if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v36 + 6)
                && ((*v37 & 0xF8) != 0xB0 || (unsigned __int64)((int)v4 + 2LL) > 0xFFFFFFFFFFFFFEE8uLL) )
              {
                v29 = 5;
LABEL_46:
                UserSetLastError(v29);
                if ( v6 )
                  KeDetachProcess();
                return 0LL;
              }
            }
LABEL_64:
            if ( (int)v4 + 2LL <= v34 )
            {
              v41 = *((_QWORD *)a1 + 35);
              LOWORD(v4) = *(_WORD *)((int)v4 + v41);
              *(_WORD *)(v8 + v41) = v3;
            }
            else
            {
              v38 = v4 - v34;
              v39 = *(_QWORD *)(v33 + 296);
              if ( (*(_DWORD *)(v33 + 232) & 0x10) != 0 )
                v40 = (_WORD *)(v38 + v39 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
              else
                v40 = (_WORD *)(v39 + v38);
              LOWORD(v4) = *v40;
              *v40 = v3;
            }
            goto LABEL_74;
          }
        }
LABEL_45:
        v29 = 1413;
        goto LABEL_46;
      }
LABEL_77:
      v9 = 5;
      goto LABEL_78;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v7 + 216);
    *(_QWORD *)(v7 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v7 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v7 + 28);
    *(_DWORD *)(v7 + 28) = v3 | *(_DWORD *)(v7 + 28) & 0xFFFF0000;
    return result;
  }
  if ( (int)v4 >= 0 && (int)v4 + 2LL > (unsigned __int64)*(unsigned int *)(v7 + 248) )
  {
    v19 = PsGetCurrentProcessWin32Process((int)v4 + 2LL);
    v20 = v19;
    if ( v19 )
      v20 = -(__int64)(*(_QWORD *)v19 != 0LL) & v19;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v21 != v20 )
    {
      v22 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v22 & 0x10) == 0 )
      {
        v23 = v21 + 864;
        v24 = PsGetCurrentProcessWin32Process(v22);
        if ( v24 )
          v24 &= -(__int64)(*(_QWORD *)v24 != 0LL);
        if ( !(unsigned __int8)CheckAccess(v24 + 864, v23) )
        {
          v26 = PsGetCurrentProcessWin32Process(v25);
          if ( v26 )
            v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
          if ( *(int *)(v26 + 12) >= 0 )
            goto LABEL_77;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
      }
    }
  }
  v27 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v27 + 42) & 0x2FFF) == 0 )
    goto LABEL_57;
  if ( (int)v4 < 0 )
    goto LABEL_45;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(v27 + 42) & 0x2FFFu) - 666) + 328) - 328 )
    goto LABEL_57;
  if ( (*(_WORD *)(v27 + 42) & 0x2FFF) != 0x2A1 )
  {
    if ( (*(_WORD *)(v27 + 42) & 0x2FFF) != 0x2A7 )
      goto LABEL_45;
    v28 = (int)v4 < 0;
    if ( (_DWORD)v4 )
      goto LABEL_45;
    goto LABEL_58;
  }
  if ( (_DWORD)v4 )
    goto LABEL_45;
  v30 = **(_QWORD **)(v27 + 296);
  if ( v30 && v30 != -1 )
  {
    v31 = (_DWORD *)(v30 + 8);
    v32 = v31;
    if ( (unsigned __int64)v31 >= MmUserProbeAddress )
      v32 = (_DWORD *)MmUserProbeAddress;
    LODWORD(v4) = *v32;
    *v31 = v3;
LABEL_74:
    if ( v6 )
      KeDetachProcess();
    return (unsigned __int16)v4;
  }
  if ( v6 )
    KeDetachProcess();
  return 0LL;
}
