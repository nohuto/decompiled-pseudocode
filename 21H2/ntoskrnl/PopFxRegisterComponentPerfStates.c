/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x1408E54E4
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x1408E44D0 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopPluginRegisterComponentPerfStates @ 0x14056DFB8 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575FE4 (PopPepRegisterComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x1408E524C (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E52CC (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x1408EC19C (PopFxTracePerfRegistration.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        char **a6)
{
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rdi
  NTSTATUS v11; // ebx
  ULONGLONG v13; // r15
  ULONGLONG v14; // r12
  unsigned int v15; // r11d
  ULONGLONG v16; // r10
  ULONGLONG i; // r13
  ULONGLONG v18; // r10
  ULONGLONG v19; // r9
  unsigned __int64 v20; // r10
  unsigned int v21; // r8d
  unsigned __int16 *v22; // rcx
  __int64 v23; // rax
  ULONGLONG v24; // r10
  size_t v25; // r14
  char *PoolWithTag; // rax
  char *v27; // rsi
  UNICODE_STRING **v28; // rcx
  UNICODE_STRING *v29; // r12
  UNICODE_STRING *v30; // rax
  unsigned int j; // edx
  wchar_t *v32; // r13
  unsigned int v33; // r15d
  UNICODE_STRING *v34; // r14
  unsigned int v35; // eax
  unsigned int v36; // r15d
  wchar_t *k; // r13
  _QWORD *v38; // r14
  unsigned __int16 v39; // ax
  char v40; // [rsp+20h] [rbp-38h]
  ULONGLONG pullResult; // [rsp+28h] [rbp-30h] BYREF
  PVOID P; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-20h]
  unsigned __int64 v44; // [rsp+40h] [rbp-18h]
  char *v45; // [rsp+48h] [rbp-10h]

  v6 = BugCheckParameter3;
  v7 = a3;
  pullResult = 0LL;
  v8 = a2;
  P = 0LL;
  if ( a5 )
  {
    if ( !a6 )
    {
      v10 = a5;
      P = a5;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v9 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), &P);
  v10 = P;
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_52:
    PopFxPepPerfInfoFree(v10);
    return (unsigned int)v11;
  }
  v8 = a2;
  v6 = BugCheckParameter3;
  v7 = a3;
LABEL_8:
  if ( !*(_DWORD *)v10 )
  {
    v11 = -1073741811;
    goto LABEL_51;
  }
  v40 = PopPluginRegisterComponentPerfStates(v6, *(_DWORD *)(v8 + 16), (__int64)v10);
  if ( !v40 && (v7 & 1) == 0 )
  {
    v11 = -1073741822;
    goto LABEL_51;
  }
  v11 = RtlULongLongMult(*(unsigned int *)v10, 0x20uLL, &pullResult);
  if ( v11 >= 0 )
  {
    if ( pullResult >= 0xFFFFFFFFFFFFFF60uLL )
      goto LABEL_50;
    v13 = (pullResult + 167) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v13 + 8;
    if ( v13 + 8 < v13 )
      goto LABEL_50;
    v11 = RtlULongLongMult(*(unsigned int *)v10, 0x30uLL, &pullResult);
    if ( v11 < 0 )
      goto LABEL_51;
    if ( v14 + pullResult < v14 )
      goto LABEL_50;
    v15 = 0;
    v16 = (v14 + pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    for ( i = v16; v15 < *(_DWORD *)v10; ++v15 )
    {
      if ( !HIDWORD(v10[6 * v15 + 4]) )
      {
        v11 = RtlULongLongMult(LODWORD(v10[6 * v15 + 5]), 0x10uLL, &pullResult);
        if ( v11 < 0 )
          goto LABEL_51;
        if ( v18 + pullResult < v18 )
          goto LABEL_50;
        v16 = v18 + pullResult;
      }
    }
    v19 = *(unsigned int *)v10;
    v20 = (v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v21 = 0;
    v43 = v20;
    if ( (_DWORD)v19 )
    {
      v22 = (unsigned __int16 *)(v10 + 1);
      do
      {
        v23 = *v22;
        if ( (_WORD)v23 )
        {
          if ( v23 + v20 + 2 < v20 )
            goto LABEL_50;
          v20 += v23 + 2;
        }
        ++v21;
        v22 += 24;
      }
      while ( v21 < (unsigned int)v19 );
    }
    v44 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v11 = RtlULongLongMult(v19, 0x10uLL, &pullResult);
    if ( v11 >= 0 )
    {
      v25 = v24 + pullResult;
      if ( v24 + pullResult >= v24 )
      {
        v11 = 0;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v24 + pullResult, 0x4D584650u);
        v27 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v25);
          *((_QWORD *)v27 + 4) = a4;
          v28 = (UNICODE_STRING **)(v27 + 160);
          v29 = (UNICODE_STRING *)&v27[v14];
          *((_DWORD *)v27 + 36) = *(_DWORD *)v10;
          *((_QWORD *)v27 + 19) = v27 + 160;
          *(_DWORD *)&v27[v13] = *(_DWORD *)v10;
          v30 = v29;
          v45 = &v27[v13];
          for ( j = 0; j < *(_DWORD *)v10; v28 += 4 )
          {
            *v28 = v30;
            ++j;
            v30 += 3;
          }
          v32 = (wchar_t *)&v27[i];
          v33 = 0;
          if ( *(_DWORD *)v10 )
          {
            v34 = v29 + 2;
            do
            {
              *(_QWORD *)&v34[-1].Length = v10[6 * v33 + 3];
              LODWORD(v34[-1].Buffer) = v10[6 * v33 + 4];
              HIDWORD(v34[-1].Buffer) = HIDWORD(v10[6 * v33 + 4]);
              if ( HIDWORD(v10[6 * v33 + 4]) )
              {
                *(_QWORD *)&v34->Length = v10[6 * v33 + 5];
                v34->Buffer = (wchar_t *)v10[6 * v33 + 6];
              }
              else
              {
                v35 = v10[6 * v33 + 5];
                *(_DWORD *)&v34->Length = v35;
                v34->Buffer = v32;
                memmove(v32, (const void *)v10[6 * v33 + 6], 16LL * v35);
                v32 += 8 * *(unsigned int *)&v34->Length;
              }
              v34 += 3;
              ++v33;
            }
            while ( v33 < *(_DWORD *)v10 );
          }
          v36 = 0;
          for ( k = (wchar_t *)&v27[v43]; v36 < *(_DWORD *)v10; k += (v39 >> 1) + 1 )
          {
            v38 = &v10[6 * v36];
            v39 = *((_WORD *)v38 + 4);
            if ( v39 )
            {
              v29->Buffer = k;
              v29->Length = *((_WORD *)v38 + 4);
              v29->MaximumLength = *((_WORD *)v38 + 4) + 2;
              RtlCopyUnicodeString(v29, (PCUNICODE_STRING)(v38 + 1));
              v39 = *((_WORD *)v38 + 4);
            }
            v29 += 3;
            ++v36;
          }
          *((_QWORD *)v27 + 6) = &v27[v44];
          *(_QWORD *)v27 = a2;
          KeInitializeEvent((PRKEVENT)(v27 + 8), NotificationEvent, 1u);
          if ( (a3 & 6) != 0 )
            v27[74] = 1;
          v27[73] = v40;
          *((_QWORD *)v27 + 14) = v27;
          *((_QWORD *)v27 + 13) = PopFxComponentPerfWork;
          *((_QWORD *)v27 + 11) = 0LL;
          PopFxTracePerfRegistration(v27, 0LL);
          PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
          *(_QWORD *)(a2 + 424) = v27;
          if ( a6 )
            *a6 = v45;
        }
        else
        {
          v11 = -1073741670;
        }
        goto LABEL_51;
      }
LABEL_50:
      v11 = -1073741675;
    }
  }
LABEL_51:
  if ( !a5 )
    goto LABEL_52;
  return (unsigned int)v11;
}
