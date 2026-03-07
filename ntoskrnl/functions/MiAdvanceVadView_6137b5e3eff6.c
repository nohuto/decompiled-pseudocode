__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  bool v10; // zf
  __int64 SubsectionNode; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v5 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v6 = *(__int64 **)(a1 + 72);
    v7 = *v6;
    v8 = (a2 << 12) + MiStartingOffset(v6, *(_QWORD *)(a1 + 80), 0xFFFFFFFF);
    v9 = v8 >> 12;
    v10 = *(_QWORD *)(v7 + 64) == 0LL;
    v17 = v8 >> 12;
    if ( v10 )
    {
      SubsectionNode = MiLocatePagefileSubsection(v7 + 128, &v17);
      v9 = v17;
    }
    else
    {
      SubsectionNode = MiLocateSubsectionNode(v7, v8, 0LL);
    }
    v12 = SubsectionNode;
    v13 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
    v14 = v9
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
    *(_QWORD *)(a1 + 72) = SubsectionNode;
    v15 = *(_QWORD *)(SubsectionNode + 8) + 8 * v14;
    v16 = *(unsigned int *)(a1 + 28);
    *(_QWORD *)(a1 + 80) = v15;
    result = MiComputeContiguousSubsectionPte(v12, v14 + (v16 | v13) - v5);
    *(_QWORD *)(a1 + 88) = result;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 24) = v5;
    *(_BYTE *)(a1 + 32) = BYTE4(v5);
  }
  return result;
}
