/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x140A2F604
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiReturnSystemCharges @ 0x1402D8C88 (MiReturnSystemCharges.c)
 *     MiObtainSystemCharges @ 0x140348C90 (MiObtainSystemCharges.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiThreadIdealNode @ 0x1406153C8 (MiThreadIdealNode.c)
 */

__int64 __fastcall MiGetLargePagesForSystemMapping(__int64 a1, unsigned __int64 a2)
{
  int v2; // r15d
  unsigned __int64 v4; // r8
  __int64 PteAddress; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // r9d
  int v14; // r12d
  unsigned __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  int *v19; // r14
  int *v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned int v23[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h]
  unsigned __int64 v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  int v27; // [rsp+40h] [rbp-30h]
  int v28; // [rsp+44h] [rbp-2Ch]
  __int64 v29; // [rsp+48h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-20h]
  unsigned __int64 v31; // [rsp+58h] [rbp-18h]
  __int64 v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp-8h]

  v2 = 0;
  v23[1] = 0;
  v30 = 0LL;
  v32 = 0LL;
  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v4);
  v9 = v8 & (PteAddress + 8);
  if ( v6 >= v9 )
    return 1075380276LL;
  v11 = *(_QWORD *)(a1 + 96);
  v12 = v9 - v6;
  v13 = *(_DWORD *)(a1 + 128);
  v14 = 0;
  v15 = v12 >> 3;
  if ( (v13 & 8) == 0 && *(_QWORD *)(v11 + 17816) )
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 96), v15, *(_DWORD *)(a1 + 120)) )
      return 3221225626LL;
    *(_QWORD *)(a1 + 104) += v15;
    v14 = 1;
    v13 = *(_DWORD *)(a1 + 128);
    v7 = a2;
  }
  v16 = *(_DWORD *)(a1 + 124);
  if ( v16 )
    v17 = v16 - 1;
  else
    v17 = MiThreadIdealNode();
  v18 = (unsigned __int16)KeNumberNodes;
  v23[0] = 16;
  v24 = v11;
  if ( (v13 & 0x400) != 0 )
    v18 = 1LL;
  v25 = v15;
  v29 = -1LL;
  v26 = 512LL;
  v28 = 4;
  v31 = v7;
  v19 = (int *)(qword_140C65718 + 4LL * v17 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v33 = a1;
  v20 = &v19[v18];
  while ( 1 )
  {
    v27 = v17;
    MiAllocateLargeZeroPages(v23);
    if ( v25 == v32 )
      break;
    if ( ++v19 == v20 )
      goto LABEL_18;
    v17 = *v19;
  }
  v2 = 1;
LABEL_18:
  if ( v14 )
  {
    v22 = v25 - v32;
    if ( v25 != v32 )
    {
      MiReturnCommit(v11, v22, v21);
      MiReturnSystemCharges(v11, v22, *(_DWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 104) -= v22;
    }
  }
  return v2 == 0 ? 0xC0000017 : 0;
}
