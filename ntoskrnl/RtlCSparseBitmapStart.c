/*
 * XREFs of RtlCSparseBitmapStart @ 0x1403A57A4
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x140375148 (RtlpHpVaMgrCtxStart.c)
 *     RtlHpHeapManagerStart @ 0x1403762C8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140330480 (RtlpHpEnvAllocVA.c)
 *     MmManageFaultRange @ 0x1403A58F8 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  ULONG_PTR *v8; // r14
  __int64 result; // rax
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 49) = a3;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v5 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *(unsigned int *)(a1 + 52);
  v17 = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return 2147483653LL;
  v16 = v6 + v5;
  v8 = (ULONG_PTR *)(a1 + 8);
  result = RtlpHpEnvAllocVA(
             (unsigned __int64 *)(a1 + 8),
             (__int64 *)&v16,
             0LL,
             1056768,
             4,
             v12,
             (unsigned __int8)a4,
             v14,
             0);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v10, v16);
    v11 = *v8;
    *(_BYTE *)(a1 + 51) = v10;
    if ( !(unsigned int)MmManageFaultRange(v11, v5) )
      return 3221225626LL;
    *(_QWORD *)a1 = v5 + *v8;
    if ( v6 <= 0x1000 )
    {
      result = RtlpHpEnvAllocVA(
                 (unsigned __int64 *)a1,
                 (__int64 *)&v17,
                 0LL,
                 1073745920,
                 4,
                 v13,
                 *(unsigned __int8 *)(a1 + 50),
                 v15,
                 0);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 56) = 1LL;
    }
    return 0LL;
  }
  return result;
}
