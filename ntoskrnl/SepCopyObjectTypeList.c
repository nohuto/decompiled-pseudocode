/*
 * XREFs of SepCopyObjectTypeList @ 0x1405B571C
 * Callers:
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCopyObjectTypeList(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // r14
  __int64 Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int128 v11; // xmm0

  *a3 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    Pool2 = ExAllocatePool2(256LL, 48LL * a2, 1951360339LL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( a2 )
    {
      v9 = Pool2 + 2;
      v10 = a1 - Pool2;
      do
      {
        *(_WORD *)(v9 - 2) = *(_WORD *)(v10 + v9 - 2);
        *(_WORD *)v9 = *(_WORD *)(v10 + v9);
        *(_DWORD *)(v9 + 18) = *(_DWORD *)(v10 + v9 + 18);
        v11 = *(_OWORD *)(v10 + v9 + 2);
        *(_DWORD *)(v9 + 22) = 0;
        *(_DWORD *)(v9 + 26) = 0;
        *(_DWORD *)(v9 + 30) = 0;
        *(_QWORD *)(v9 + 38) = 0LL;
        *(_OWORD *)(v9 + 2) = v11;
        v9 += 48LL;
        --v6;
      }
      while ( v6 );
    }
    *a3 = Pool2;
  }
  return 0LL;
}
