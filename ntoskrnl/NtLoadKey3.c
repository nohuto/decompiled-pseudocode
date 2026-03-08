/*
 * XREFs of NtLoadKey3 @ 0x140799D50
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtLoadKey3(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8)
{
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v11; // r10
  int v13; // ecx
  __int128 v14; // xmm0
  int v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  void *v18; // [rsp+70h] [rbp-28h]
  void *v19; // [rsp+78h] [rbp-20h]

  v19 = 0LL;
  v18 = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0LL;
  v17 = 0LL;
  v13 = 0;
  while ( a5 )
  {
    if ( PreviousMode == 1 )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v16;
      v11 = v17;
    }
    v14 = *(_OWORD *)a4;
    if ( (unsigned __int8)*(_OWORD *)a4 == 1LL )
    {
      if ( (v13 & 2) != 0 )
        return 3221225714LL;
      v11 = *(_QWORD *)(a4 + 8);
      v17 = v11;
      v13 |= 2u;
    }
    else if ( (unsigned __int8)v14 == 2LL )
    {
      if ( (v13 & 4) != 0 )
        return 3221225714LL;
      v19 = *(void **)(a4 + 8);
      v13 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v14 != 3LL )
        return 3221225714LL;
      if ( (v13 & 8) != 0 )
        return 3221225714LL;
      v18 = *(void **)(a4 + 8);
      v13 |= 8u;
    }
    v16 = v13;
    a4 += 16LL;
    --a5;
  }
  return CmLoadDifferencingKey(a1, a2, a3 | 0x8000u, v11, v19, DesiredAccess, a7, a8, 0LL, 0, v18, PreviousMode);
}
