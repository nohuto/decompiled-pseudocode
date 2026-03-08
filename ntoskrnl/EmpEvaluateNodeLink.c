/*
 * XREFs of EmpEvaluateNodeLink @ 0x140245FF4
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140245FF4 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateTargetRule @ 0x1402D6300 (EmpEvaluateTargetRule.c)
 * Callees:
 *     EmpFreePool @ 0x140245FC0 (EmpFreePool.c)
 *     EmpEvaluateNodeLink @ 0x140245FF4 (EmpEvaluateNodeLink.c)
 *     EmpAllocatePool @ 0x1402463F4 (EmpAllocatePool.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     EmpEvaluateParseNodeMapping @ 0x1402DE63C (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        ULONGLONG a10,
        int a11)
{
  int v13; // r10d
  unsigned int v14; // eax
  __int64 v15; // rsi
  void *v16; // r15
  unsigned int v17; // ebx
  void *v18; // r14
  void *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rsi
  int v29; // edi
  unsigned int v31; // r10d
  int v32; // eax
  unsigned int ullMultiplicand; // [rsp+78h] [rbp-31h]
  int ullMultiplicand_4; // [rsp+7Ch] [rbp-2Dh] BYREF
  int v36; // [rsp+80h] [rbp-29h]
  int v37; // [rsp+84h] [rbp-25h]
  ULONGLONG pullResult; // [rsp+88h] [rbp-21h] BYREF
  ULONGLONG v39; // [rsp+90h] [rbp-19h] BYREF
  __int64 v40; // [rsp+98h] [rbp-11h]
  int v42; // [rsp+100h] [rbp+57h]
  unsigned int v45; // [rsp+140h] [rbp+97h]

  v42 = a2;
  v39 = a10;
  v13 = a3;
  pullResult = 0LL;
  v14 = *(_DWORD *)a1;
  v15 = 0LL;
  v16 = 0LL;
  ullMultiplicand_4 = a11;
  v17 = 1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( v14 > 1 )
  {
    if ( v14 != 2 )
      return v17;
    v28 = *(_QWORD *)(a1 + 8);
    v29 = EmpEvaluateNodeLink(
            *(_QWORD *)(v28 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v28 + 24),
            *(_DWORD *)(v28 + 16),
            a10,
            a11);
    if ( v29 == 1 )
      return v17;
    if ( *(_BYTE *)v28 == 38 )
    {
      if ( !v29 )
        return 0;
    }
    else if ( v29 == 2 && *(_BYTE *)v28 == 124 )
    {
      return 2;
    }
    v32 = EmpEvaluateNodeLink(
            *(_QWORD *)(v28 + 32),
            v42,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v28 + 48),
            *(_DWORD *)(v28 + 40),
            a10,
            a11);
    if ( v32 == 1 )
      return v17;
    if ( *(_BYTE *)v28 == 38 )
    {
      if ( !v29 || !v32 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v28 != 124 )
        return v17;
      if ( !v29 && !v32 )
        return 0;
    }
    return 2;
  }
  v21 = *(_QWORD *)(a1 + 8);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v21 + 20) )
      return v17;
    v31 = *(_DWORD *)(v21 + 48);
    v23 = *(_DWORD *)(v21 + 40);
    v22 = *(_DWORD *)(v15 + 44);
    v45 = v31;
    v13 = a3;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(v21 + 16) )
      return v17;
    v22 = *(_DWORD *)(v21 + 60);
    v45 = *(_DWORD *)(v21 + 64);
    v23 = *(_DWORD *)(v21 + 56);
  }
  ullMultiplicand = v22;
  v24 = *(_DWORD *)(a1 + 16);
  v36 = v23;
  v37 = v24;
  if ( v24 && (v40 = *(_QWORD *)(a1 + 24)) != 0 || (v40 = a8, v37 = a9, a8) )
  {
    if ( v23 )
    {
      if ( RtlULongLongMult(v23, 8uLL, &pullResult) < 0 )
        return v17;
      v16 = (void *)EmpAllocatePool(pullResult, &v39, &ullMultiplicand_4);
      if ( !v16 )
        return v17;
    }
    if ( ullMultiplicand )
    {
      if ( RtlULongLongMult(ullMultiplicand, 4uLL, &pullResult) < 0 )
        goto LABEL_25;
      v19 = (void *)EmpAllocatePool(pullResult, &v39, &ullMultiplicand_4);
      if ( !v19 )
        goto LABEL_25;
    }
    v25 = v45;
    if ( v45 )
    {
      if ( RtlULongLongMult(v45, 8uLL, &pullResult) < 0
        || (v18 = (void *)EmpAllocatePool(pullResult, &v39, &ullMultiplicand_4)) == 0LL )
      {
        v27 = a11;
LABEL_23:
        if ( v19 )
          EmpFreePool(v19, a10, v27);
LABEL_25:
        if ( v16 )
          EmpFreePool(v16, a10, a11);
        return v17;
      }
      v25 = v45;
    }
    if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                            v40,
                            v37,
                            v42,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            (__int64)v16,
                            v36,
                            (__int64)v19,
                            ullMultiplicand,
                            (__int64)v18,
                            v25) )
    {
      if ( *(_DWORD *)a1 )
        v26 = EmpEvaluateNodeLink(
                *(_QWORD *)(v15 + 96),
                (int)v16,
                v36,
                (int)v19,
                ullMultiplicand,
                (__int64)v18,
                v45,
                0LL,
                0,
                v39,
                ullMultiplicand_4);
      else
        v26 = (*(__int64 (__fastcall **)(void *, _QWORD, void *, _QWORD, void *, unsigned int, _QWORD))(v20 + 16))(
                v18,
                v45,
                v16,
                (unsigned int)v36,
                v19,
                ullMultiplicand,
                *(_QWORD *)(v20 + 32));
      v17 = v26;
    }
    v27 = a11;
    if ( v18 )
      EmpFreePool(v18, a10, a11);
    goto LABEL_23;
  }
  if ( v14 )
    return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v15 + 96), a2, v13, a4, a5, a6, a7, 0LL, 0, a10, a11);
  else
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v20 + 16))(
                           a6,
                           a7,
                           a2,
                           a3,
                           a4,
                           a5,
                           *(_QWORD *)(v20 + 32));
}
