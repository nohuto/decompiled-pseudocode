/*
 * XREFs of KiSelectIdealProcessorSetForGroup @ 0x140296BAC
 * Callers:
 *     KiSelectIdealProcessorSetForProcessGroup @ 0x140296B48 (KiSelectIdealProcessorSetForProcessGroup.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KiSelectIdealProcessorSetForNode @ 0x140296D74 (KiSelectIdealProcessorSetForNode.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     KiFindBiasedSetMember @ 0x14045780C (KiFindBiasedSetMember.c)
 */

__int64 __fastcall KiSelectIdealProcessorSetForGroup(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 Prcb; // rax
  char v11; // r8
  unsigned int v12; // r14d
  int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r14
  int v19; // r8d
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 result; // rax
  unsigned int NextNode; // eax
  int BiasedSetMember; // eax
  unsigned int v25; // [rsp+40h] [rbp-68h]
  int v26; // [rsp+44h] [rbp-64h] BYREF
  int v27; // [rsp+48h] [rbp-60h] BYREF
  int v28; // [rsp+4Ch] [rbp-5Ch] BYREF
  _QWORD v29[11]; // [rsp+50h] [rbp-58h] BYREF
  char v30; // [rsp+B0h] [rbp+8h]

  v6 = 0;
  v26 = 0;
  if ( !*(_QWORD *)a1 )
  {
    *a5 = 0LL;
    v20 = (_DWORD *)(a6 + 4);
    *(_QWORD *)a6 = 0LL;
    v21 = *(_DWORD *)(a6 + 4) & 0xFFFFF | 0x80100000;
    goto LABEL_19;
  }
  v8 = 0;
  v9 = 0LL;
  Prcb = KeGetPrcb(a2);
  v11 = 0;
  v30 = 0;
  v12 = 0;
  v25 = 0;
  v13 = 2048;
  v14 = *(unsigned __int16 *)(*(_QWORD *)(Prcb + 192) + 138LL);
LABEL_3:
  v28 = 0;
  v15 = v14;
  while ( 1 )
  {
    v16 = KeNodeBlock[v15];
    if ( !v11 && (*(_BYTE *)(v16 + 10) & 1) != 0 )
      goto LABEL_20;
    v29[0] = *(unsigned __int16 *)(a1 + 8);
    v17 = *(_QWORD *)(v16 + 8LL * v29[0] + 24);
    if ( !v17 )
      goto LABEL_20;
    v18 = *(_QWORD *)a1 & *(_QWORD *)(v17 + 128);
    if ( v18 )
      break;
    v12 = v25;
LABEL_20:
    NextNode = MmGetNextNode(v14, &v28);
    v11 = v30;
    v15 = NextNode;
    if ( NextNode == -1 )
    {
      if ( v8 )
        goto LABEL_16;
      v11 = 1;
      v30 = 1;
      goto LABEL_3;
    }
  }
  if ( v15 == v14 )
  {
    v19 = a2;
  }
  else
  {
    BiasedSetMember = KiFindBiasedSetMember(*(_QWORD *)a1 & *(_QWORD *)(v17 + 128), a4);
    v19 = LOWORD(KiProcessorNumberToIndexMappingTable[64 * LOWORD(v29[0]) + BiasedSetMember]);
  }
  v29[0] = 0LL;
  v27 = 0;
  KiSelectIdealProcessorSetForNode(v17, v18, v19, a3 - v8, a4, (__int64)v29, (__int64)&v27, (__int64)&v26);
  if ( v29[0] )
  {
    v12 = v8 + v26;
    v25 = v8 + v26;
  }
  else
  {
    v12 = v25;
  }
  v8 += v27;
  v9 |= v29[0];
  if ( v8 < a3 )
    goto LABEL_20;
  if ( v9 == *(_QWORD *)a1 )
    v8 = 2048;
  v13 = v8;
LABEL_16:
  if ( v12 > 2 )
    v6 = v12;
  *a5 = v9;
  *(_QWORD *)a6 = 0LL;
  v20 = (_DWORD *)(a6 + 4);
  *(_DWORD *)a6 = v6 << 20;
  v21 = ((v13 + 1) << 20) | *(_DWORD *)(a6 + 4) & 0xFFFFF;
LABEL_19:
  result = v21 - 1;
  *v20 = result;
  return result;
}
