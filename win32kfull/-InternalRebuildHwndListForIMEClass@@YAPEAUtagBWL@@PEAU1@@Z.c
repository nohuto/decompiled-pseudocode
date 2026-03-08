/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C00400D0
 * Callers:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // r15
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = (_QWORD *)Win32AllocPoolZInit(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v3 = v2;
  if ( !v2 )
    return v1;
  v4 = (_QWORD *)((char *)v1 + 32);
  v5 = (__int64 *)((char *)v1 + 32);
  v6 = *((_QWORD *)v1 + 4);
  if ( v6 == 1 )
    goto LABEL_15;
  do
  {
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v6 >= *(_QWORD *)(gpsi + 8LL)
      || (v7 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v6,
          v9 = (__int64 *)HMPkheFromPhe(v7),
          LOWORD(v6) = WORD1(v6) & 0x7FFF,
          (WORD1(v6) & 0x7FFF) != *(_WORD *)(v7 + 26))
      && (_WORD)v6 != 0x7FFF
      && ((_WORD)v6 || !PsGetCurrentProcessWow64Process(v8))
      || (*(_BYTE *)(v7 + 25) & 1) != 0
      || *(_BYTE *)(v7 + 24) != 1
      || (v10 = *v9) == 0 )
    {
LABEL_11:
      v12 = *v5;
LABEL_12:
      *v4++ = v12;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 136) + 8LL);
      if ( (*(_BYTE *)(v11 + 10) & 1) != 0 || *(_WORD *)v11 == *(_WORD *)(gpsi + 898LL) )
        break;
      v10 = *(_QWORD *)(v10 + 120);
      if ( !v10 )
        goto LABEL_11;
    }
    v12 = *v5;
    if ( !v10 )
      goto LABEL_12;
    *v3++ = v12;
LABEL_13:
    v6 = v5[1];
    ++v5;
  }
  while ( v6 != 1 );
  v1 = a1;
LABEL_15:
  v13 = v2;
  *v3 = 0LL;
  for ( i = *v2; *v13; ++v4 )
  {
    *v4 = i;
    i = *++v13;
  }
  Win32FreePool(v2);
  return v1;
}
