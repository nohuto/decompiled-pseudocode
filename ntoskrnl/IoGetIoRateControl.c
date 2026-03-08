/*
 * XREFs of IoGetIoRateControl @ 0x140294410
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402945B0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     PsIoRateControlReference @ 0x140294624 (PsIoRateControlReference.c)
 *     IoDiskIoAttributionQuery @ 0x1402946F0 (IoDiskIoAttributionQuery.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 */

__int64 __fastcall IoGetIoRateControl(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _DWORD *a8)
{
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int128 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rbx
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // rax
  __int128 v22; // xmm1
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v24; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+40h] [rbp-41h] BYREF
  __int128 v26; // [rsp+48h] [rbp-39h] BYREF
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  __int128 v28; // [rsp+68h] [rbp-19h]
  __int128 v29; // [rsp+78h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp+7h]

  v25 = 0LL;
  v24 = 0LL;
  *a7 = 0LL;
  v26 = 0LL;
  v11 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (int)IopAcquireReferencesFromIoAttributionHandle(a1, &v24, &v25) < 0 )
  {
LABEL_10:
    v16 = v24;
    goto LABEL_11;
  }
  PsIoRateControlReference(v25, a2, a4, (unsigned int)&v26, a5);
  v12 = a6 + 16;
  v13 = &v26;
  v14 = a4 - (_QWORD)&v26;
  v15 = 2LL;
  do
  {
    if ( *(_QWORD *)((char *)v13 + v14) )
    {
      IoDiskIoAttributionQuery(*(_QWORD *)v13, &v29, &v27);
      v21 = *((_QWORD *)&v28 + 1);
      v22 = v30;
      *(_OWORD *)(v12 - 16) = v29;
      *(_OWORD *)v12 = v22;
      *(_QWORD *)(v12 + 8) += v21;
      *(_QWORD *)v12 += v28;
      *(_QWORD *)(v12 - 16) += v27;
      *(_QWORD *)(v12 - 8) += *((_QWORD *)&v27 + 1);
      ++v11;
    }
    v13 = (__int128 *)((char *)v13 + 8);
    v12 += 32LL;
    --v15;
  }
  while ( v15 );
  v16 = v24;
  v17 = v24;
  if ( v24[22].Count )
  {
    Count = v24[22].Count;
    do
    {
      v17 = (struct _EX_RUNDOWN_REF *)Count;
      Count = *(_QWORD *)(Count + 176);
    }
    while ( Count );
  }
  *a7 = v17[3].Count;
  if ( a8 )
  {
    *a8 = 0;
    v18 = *(_QWORD *)(a3 + 544);
    if ( *(_QWORD *)(v18 + 1296) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 1296) + 1784LL);
      if ( v19 )
      {
        if ( v19 == v25 || *(_QWORD *)(v19 + 1568) == v25 )
          *a8 |= 1u;
      }
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( v16 )
  {
    ExReleaseRundownProtection_0(v16 + 21);
    IoDiskIoAttributionDereference(v16);
  }
  return v11;
}
