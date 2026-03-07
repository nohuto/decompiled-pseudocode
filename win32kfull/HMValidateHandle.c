__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v13; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rdx
  __int16 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_19;
  v5 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)a1;
  v6 = (__int64 *)HMPkheFromPhe(v5);
  v7 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v5 + 26) && v7 != 0x7FFF && (v7 || !PsGetCurrentProcessWow64Process(0x7FFFLL)) )
    goto LABEL_19;
  if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
  {
    v8 = *(_BYTE *)(v5 + 24);
    if ( v8 == (_BYTE)v3 || (_BYTE)v3 == 0xFF && v8 )
      v4 = *v6;
  }
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
    v4 &= v11;
  }
  if ( *(char *)(v5 + 25) < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v16 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
        if ( (v16 & 2) != 0 )
        {
          v17 = (_QWORD *)v6[1];
LABEL_42:
          if ( v17 && v17 != v15 )
            goto LABEL_19;
          goto LABEL_11;
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = v6[1];
          if ( v18 )
          {
            v17 = *(_QWORD **)(v18 + 424);
            goto LABEL_42;
          }
        }
      }
    }
  }
LABEL_11:
  if ( v4 )
    return v4;
LABEL_19:
  switch ( v3 )
  {
    case 1:
      v13 = 1400;
      break;
    case 2:
      v13 = 1401;
      break;
    case 3:
      v13 = 1402;
      break;
    case 4:
      v13 = 1405;
      break;
    case 5:
      v13 = 1404;
      break;
    case 8:
      v13 = 1403;
      break;
    default:
      v13 = 6;
      break;
  }
  UserSetLastError(v13);
  return 0LL;
}
