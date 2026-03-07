__int64 __fastcall HMValidateHandle(unsigned __int64 a1, unsigned __int8 a2)
{
  int v3; // r12d
  __int64 v4; // rbx
  _QWORD *v5; // r15
  char *v6; // rdi
  __int64 v7; // r14
  __int16 v8; // ax
  __int64 v9; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // r8
  __int16 v16; // ax
  _QWORD *v17; // rax
  __int64 v18; // rax
  int v19; // ecx

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_28;
  v5 = gpKernelHandleTable;
  v6 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
  v7 = 3 * ((__int64)(dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1) >> 5);
  v8 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v6 + 13) && v8 != 0x7FFF && (v8 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_28;
  if ( (v6[25] & 1) == 0 && v6[24] == (_BYTE)v3 )
    v4 = v5[v7];
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL, v11) )
      v4 = 0LL;
  }
  else
  {
    v12 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL, v11) != 0);
    v4 &= v12;
  }
  if ( v6[25] < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v12);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v16 = *((_WORD *)&unk_1C028159C + 12 * (unsigned __int8)v6[24]);
        if ( (v16 & 2) != 0 )
        {
          v17 = (_QWORD *)v5[v7 + 1];
LABEL_26:
          if ( v17 && v17 != v15 )
            goto LABEL_28;
          goto LABEL_11;
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = v5[v7 + 1];
          if ( v18 )
          {
            v17 = *(_QWORD **)(v18 + 424);
            goto LABEL_26;
          }
        }
      }
    }
  }
LABEL_11:
  if ( v4 )
    return v4;
LABEL_28:
  switch ( v3 )
  {
    case 1:
      v19 = 1400;
      break;
    case 2:
      v19 = 1401;
      break;
    case 3:
      v19 = 1402;
      break;
    case 4:
      v19 = 1405;
      break;
    case 5:
      v19 = 1404;
      break;
    case 8:
      v19 = 1403;
      break;
    default:
      v19 = 6;
      break;
  }
  UserSetLastError(v19);
  return 0LL;
}
