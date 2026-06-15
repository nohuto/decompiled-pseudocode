/*
 * XREFs of sub_180034380 @ 0x180034380
 * Callers:
 *     sub_1800340B0 @ 0x1800340B0 (sub_1800340B0.c)
 *     sub_18003418C @ 0x18003418C (sub_18003418C.c)
 *     sub_180063E28 @ 0x180063E28 (sub_180063E28.c)
 *     sub_180063FC0 @ 0x180063FC0 (sub_180063FC0.c)
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_180135010 @ 0x180135010 (sub_180135010.c)
 * Callees:
 *     sub_180034268 @ 0x180034268 (sub_180034268.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 */

void __fastcall sub_180034380(__int64 a1, volatile signed __int32 *a2, int a3, int a4)
{
  RTL_SRWLOCK *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( !a4 || a4 != *(_DWORD *)(a1 + 28) )
      goto LABEL_12;
    v9 = *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80) + 16LL;
    v10 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 80);
    v12 = a3;
    v13 = a2;
    if ( v9 < v10 )
      goto LABEL_5;
    v11 = 16LL;
    if ( 2 * v10 > 0x10 )
      v11 = 2 * v10;
    if ( sub_180034268((_QWORD *)(a1 + 80), v11) )
    {
LABEL_5:
      sub_18003447C(
        *(_QWORD *)(a1 + 88),
        (*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) & -(__int64)(*(_QWORD *)(a1 + 88) < *(_QWORD *)(a1 + 96)),
        &v12,
        16LL);
      *(_QWORD *)(a1 + 88) += 16LL;
    }
    else
    {
LABEL_12:
      _InterlockedAnd(a2, a3 != 0 ? -5 : -2111);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
