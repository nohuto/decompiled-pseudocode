/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x140982948
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x140981810 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopPluginRegisterComponentPerfStates @ 0x14058A450 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x14059D77C (PopPepRegisterComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x1409826C4 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x140982744 (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x14098F3C0 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        ULONGLONG *a6)
{
  __int64 v7; // r9
  char v8; // bl
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  NTSTATUS v12; // ebx
  ULONGLONG v14; // r14
  ULONGLONG v15; // r15
  ULONGLONG v16; // rcx
  ULONGLONG v17; // r10
  unsigned int v18; // r11d
  ULONGLONG i; // r13
  ULONGLONG v20; // r10
  unsigned int v21; // r8d
  unsigned __int64 v22; // r10
  unsigned __int16 *v23; // rdx
  __int64 v24; // rax
  ULONGLONG v25; // r10
  __int64 Pool2; // rax
  __int64 v27; // rsi
  ULONGLONG *v28; // rcx
  UNICODE_STRING *v29; // r12
  unsigned int v30; // r8d
  int v31; // eax
  ULONGLONG v32; // rdx
  wchar_t *v33; // r13
  unsigned int v34; // r15d
  UNICODE_STRING *v35; // r14
  unsigned int v36; // eax
  unsigned int v37; // r15d
  wchar_t *v38; // r13
  _QWORD *v39; // r14
  char v40; // [rsp+20h] [rbp-30h]
  ULONGLONG pullResult; // [rsp+28h] [rbp-28h] BYREF
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-18h]
  unsigned __int64 v44; // [rsp+40h] [rbp-10h]
  ULONGLONG v45; // [rsp+48h] [rbp-8h]

  v7 = BugCheckParameter3;
  pullResult = 0LL;
  v8 = a3;
  P = 0LL;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      P = a5;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), (unsigned int **)&P);
  v11 = P;
  v12 = v10;
  if ( v10 < 0 )
  {
LABEL_52:
    PopFxPepPerfInfoFree(v11);
    return (unsigned int)v12;
  }
  v9 = a2;
  v7 = BugCheckParameter3;
  v8 = a3;
LABEL_8:
  if ( !*(_DWORD *)v11 )
  {
    v12 = -1073741811;
    goto LABEL_51;
  }
  v40 = PopPluginRegisterComponentPerfStates(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
  if ( !v40 && (v8 & 1) == 0 )
  {
    v12 = -1073741822;
    goto LABEL_51;
  }
  v12 = RtlULongLongMult(*(unsigned int *)v11, 0x20uLL, &pullResult);
  if ( v12 >= 0 )
  {
    if ( pullResult >= 0xFFFFFFFFFFFFFF60uLL )
      goto LABEL_50;
    v14 = (pullResult + 167) & 0xFFFFFFFFFFFFFFF8uLL;
    v15 = v14 + 8;
    if ( v14 + 8 < v14 )
      goto LABEL_50;
    v12 = RtlULongLongMult(*(unsigned int *)v11, 0x30uLL, &pullResult);
    if ( v12 < 0 )
      goto LABEL_51;
    if ( v15 + pullResult < v15 )
      goto LABEL_50;
    v16 = *(unsigned int *)v11;
    v17 = (v15 + pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = 0;
    for ( i = v17; v18 < (unsigned int)v16; ++v18 )
    {
      if ( !HIDWORD(v11[6 * v18 + 4]) )
      {
        v12 = RtlULongLongMult(LODWORD(v11[6 * v18 + 5]), 0x10uLL, &pullResult);
        if ( v12 < 0 )
          goto LABEL_51;
        if ( v20 + pullResult < v20 )
          goto LABEL_50;
        v17 = v20 + pullResult;
      }
      v16 = *(unsigned int *)v11;
    }
    v21 = 0;
    v22 = (v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v43 = v22;
    if ( (_DWORD)v16 )
    {
      v23 = (unsigned __int16 *)(v11 + 1);
      do
      {
        v24 = *v23;
        if ( (_WORD)v24 )
        {
          if ( v24 + v22 + 2 < v22 )
            goto LABEL_50;
          v22 += v24 + 2;
        }
        ++v21;
        v23 += 24;
      }
      while ( v21 < (unsigned int)v16 );
    }
    v44 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = RtlULongLongMult(v16, 0x10uLL, &pullResult);
    if ( v12 >= 0 )
    {
      if ( v25 + pullResult >= v25 )
      {
        v12 = 0;
        Pool2 = ExAllocatePool2(64LL, v25 + pullResult, 1297630800LL);
        v27 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 32) = a4;
          v28 = (ULONGLONG *)(Pool2 + 160);
          *(_DWORD *)(Pool2 + 144) = *(_DWORD *)v11;
          v29 = (UNICODE_STRING *)(v15 + Pool2);
          *(_QWORD *)(Pool2 + 152) = Pool2 + 160;
          v30 = 0;
          *(_DWORD *)(v14 + Pool2) = *(_DWORD *)v11;
          v31 = *(_DWORD *)v11;
          v45 = v14 + v27;
          v32 = v15 + v27;
          if ( v31 )
          {
            do
            {
              *v28 = v32;
              ++v30;
              v31 = *(_DWORD *)v11;
              v28 += 4;
              v32 += 48LL;
            }
            while ( v30 < *(_DWORD *)v11 );
          }
          v33 = (wchar_t *)(v27 + i);
          v34 = 0;
          if ( v31 )
          {
            v35 = v29 + 2;
            do
            {
              *(_QWORD *)&v35[-1].Length = v11[6 * v34 + 3];
              LODWORD(v35[-1].Buffer) = v11[6 * v34 + 4];
              HIDWORD(v35[-1].Buffer) = HIDWORD(v11[6 * v34 + 4]);
              if ( HIDWORD(v11[6 * v34 + 4]) )
              {
                *(_QWORD *)&v35->Length = v11[6 * v34 + 5];
                v35->Buffer = (wchar_t *)v11[6 * v34 + 6];
              }
              else
              {
                v36 = v11[6 * v34 + 5];
                *(_DWORD *)&v35->Length = v36;
                v35->Buffer = v33;
                memmove(v33, (const void *)v11[6 * v34 + 6], 16LL * v36);
                v33 += 8 * *(unsigned int *)&v35->Length;
              }
              v31 = *(_DWORD *)v11;
              v35 += 3;
              ++v34;
            }
            while ( v34 < *(_DWORD *)v11 );
          }
          v37 = 0;
          v38 = (wchar_t *)(v27 + v43);
          if ( v31 )
          {
            do
            {
              v39 = &v11[6 * v37];
              if ( *((_WORD *)v39 + 4) )
              {
                v29->Buffer = v38;
                v29->Length = *((_WORD *)v39 + 4);
                v29->MaximumLength = *((_WORD *)v39 + 4) + 2;
                RtlCopyUnicodeString(v29, (PCUNICODE_STRING)(v39 + 1));
              }
              v29 += 3;
              ++v37;
              v38 += (*((unsigned __int16 *)v39 + 4) >> 1) + 1;
            }
            while ( v37 < *(_DWORD *)v11 );
          }
          *(_QWORD *)(v27 + 48) = v27 + v44;
          *(_QWORD *)v27 = a2;
          KeInitializeEvent((PRKEVENT)(v27 + 8), NotificationEvent, 1u);
          if ( (a3 & 6) != 0 )
            *(_BYTE *)(v27 + 74) = 1;
          *(_BYTE *)(v27 + 73) = v40;
          *(_QWORD *)(v27 + 88) = 0LL;
          *(_QWORD *)(v27 + 104) = PopFxComponentPerfWork;
          *(_QWORD *)(v27 + 112) = v27;
          PopFxTracePerfRegistration(v27, 0LL);
          PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
          *(_QWORD *)(a2 + 424) = v27;
          if ( a6 )
            *a6 = v45;
        }
        else
        {
          v12 = -1073741670;
        }
        goto LABEL_51;
      }
LABEL_50:
      v12 = -1073741675;
    }
  }
LABEL_51:
  if ( !a5 )
    goto LABEL_52;
  return (unsigned int)v12;
}
