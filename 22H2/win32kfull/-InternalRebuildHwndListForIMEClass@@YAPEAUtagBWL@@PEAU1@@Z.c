/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C00D2EE0
 * Callers:
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rcx
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
      || (v7 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v6,
          v11 = (__int64 *)HMPkheFromPhe(v7),
          LOWORD(v6) = WORD1(v6) & 0x7FFF,
          (WORD1(v6) & 0x7FFF) != *(_WORD *)(v7 + 26))
      && (_WORD)v6 != 0x7FFF
      && ((_WORD)v6 || !PsGetCurrentProcessWow64Process(v9, v8, v10))
      || (*(_BYTE *)(v7 + 25) & 1) != 0
      || *(_BYTE *)(v7 + 24) != 1
      || (v12 = *v11) == 0 )
    {
LABEL_11:
      v14 = *v5;
LABEL_12:
      *v4++ = v14;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL);
      if ( (*(_BYTE *)(v13 + 10) & 1) != 0 || *(_WORD *)v13 == *(_WORD *)(gpsi + 898LL) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
      if ( !v12 )
        goto LABEL_11;
    }
    v14 = *v5;
    if ( !v12 )
      goto LABEL_12;
    *v3++ = v14;
LABEL_13:
    v6 = v5[1];
    ++v5;
  }
  while ( v6 != 1 );
  v1 = a1;
LABEL_15:
  v15 = v2;
  *v3 = 0LL;
  for ( i = *v2; *v15; ++v4 )
  {
    *v4 = i;
    i = *++v15;
  }
  Win32FreePool(v2);
  return v1;
}
