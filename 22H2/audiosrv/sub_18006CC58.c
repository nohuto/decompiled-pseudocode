/*
 * XREFs of sub_18006CC58 @ 0x18006CC58
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_1800474E0 @ 0x1800474E0 (sub_1800474E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABF4 @ 0x1800BABF4 (sub_1800BABF4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006CC58(__int64 a1)
{
  char v2; // si
  HRESULT Instance; // eax
  unsigned int v4; // edi
  int v5; // edx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 1;
  sub_1800474E0((__int64 *)(a1 + 8), 0LL);
  Instance = CoIncrementMTAUsage(a1 + 8);
  v4 = Instance;
  *(_DWORD *)(a1 + 16) = Instance;
  if ( Instance < 0 )
  {
    v5 = 99;
LABEL_11:
    sub_18004BD84((int)retaddr, v5, (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h", Instance);
    goto LABEL_13;
  }
  Instance = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 123;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  *(_BYTE *)(a1 + 20) = 1;
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(&stru_18015D5E0, 0LL, 1u, &stru_18015DD30, (LPVOID *)(a1 + 24));
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 141;
    goto LABEL_11;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD)), __int64, void *, int, _QWORD))(*(_QWORD *)*v6 + 24LL))(
               *v6,
               sub_1800690E0,
               a1,
               &unk_18015D5C0,
               5,
               0LL);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 144;
    goto LABEL_11;
  }
  v2 = 0;
  v4 = 0;
LABEL_13:
  if ( v2 )
    sub_1800BABF4(a1);
  return v4;
}
