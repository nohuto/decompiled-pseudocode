/*
 * XREFs of PopCaptureReasonContext @ 0x1402BD4D4
 * Callers:
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x1402BD794 (PopSafeCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, __int64 *a4)
{
  unsigned __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  __int64 Pool2; // rax
  void *v16; // rsi
  unsigned __int64 v17; // r14
  const UNICODE_STRING *v18; // rcx
  int v19; // ebx
  unsigned int v20; // r14d
  unsigned __int64 v21; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v25; // [rsp+30h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-18h] BYREF

  *a4 = 0LL;
  v7 = 32LL;
  v26 = 0LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
      goto LABEL_14;
    }
    return 3221225485LL;
  }
  if ( (v10 & 2) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_14;
    return 3221225485LL;
  }
  if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 28);
  v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
  v11 = 16LL * v8;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 && (_DWORD)v11 )
  {
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = v9 + (unsigned int)v11;
    if ( v23 > 0x7FFFFFFF0000LL || v23 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (unsigned __int16 *)v9;
    do
    {
      v14 = *v13;
      if ( v14 + v7 + 2 < v7 )
        return 3221225485LL;
      ++v12;
      v13 += 8;
      v7 += v14 + 2;
    }
    while ( v12 < v8 );
  }
LABEL_14:
  Pool2 = ExAllocatePool2((a2 != 0) + 256LL, v7, 2017677904LL);
  v16 = (void *)Pool2;
  if ( Pool2 )
  {
    *a4 = Pool2;
    if ( v10 < 0 )
    {
      *(_QWORD *)(Pool2 + 24) = 0LL;
      return 0;
    }
    v17 = (Pool2 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = (const UNICODE_STRING *)(a1 + 8);
    *(_QWORD *)(Pool2 + 24) = v7 + Pool2 - v17;
    *(_DWORD *)v17 = v10;
    *(_QWORD *)(v17 + 8) = 32LL;
    if ( (v10 & 1) != 0 )
    {
      v19 = PopSafeCopyUnicodeString(v18);
      if ( v19 >= 0 )
      {
LABEL_22:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v19 = PopSafeCopyUnicodeString(v18);
      if ( v19 >= 0 )
      {
        *(_WORD *)(v17 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v17 + 20) = v8;
        *(_QWORD *)(v17 + 24) = 32LL;
        v20 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v21 = v9 + 16LL * v20;
            if ( a2 )
            {
              DWORD1(v25) = 0;
              if ( v21 >= 0x7FFFFFFF0000LL )
                v21 = 0x7FFFFFFF0000LL;
              LODWORD(v25) = *(_DWORD *)v21;
              v24 = *(_QWORD *)(v21 + 8);
              v21 = (unsigned __int64)&v26;
              *((_QWORD *)&v25 + 1) = v24;
              v26 = v25;
            }
            v19 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v21);
            if ( v19 < 0 )
              goto LABEL_46;
            if ( ++v20 >= v8 )
              goto LABEL_22;
          }
        }
        goto LABEL_22;
      }
    }
LABEL_46:
    ExFreePoolWithTag(v16, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v19;
  }
  return 3221225626LL;
}
