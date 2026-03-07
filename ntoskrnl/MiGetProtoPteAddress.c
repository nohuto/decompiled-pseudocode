__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 **v4; // r11
  unsigned __int64 v6; // r10
  unsigned int v8; // esi
  __int64 *v9; // r8
  __int64 v10; // rbp
  unsigned __int64 v11; // r9
  _DWORD *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 SubsectionNode; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 **)(a1 + 72);
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( ((*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (*(_DWORD *)(**v4 + 56) & 0x8000000) == 0)
    && (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= a2 - v6
    && (a3 & 4) == 0 )
  {
    *a4 = *v4;
    return *(_QWORD *)(a1 + 80) + 8 * (a2 - v6);
  }
  v8 = 0;
  *a4 = 0LL;
  v9 = *v4;
  v10 = **v4;
  v11 = a2 + ((*(_QWORD *)(a1 + 80) - (*v4)[1]) >> 3) - v6;
  v25 = v11;
  if ( !*(_QWORD *)(v10 + 64) )
  {
    v21 = MiLocatePagefileSubsection(v9, &v25);
    v14 = v21;
    if ( v21 )
    {
      *a4 = v21;
      v19 = *(_QWORD *)(v21 + 8);
      if ( v19 )
      {
        v12 = (_DWORD *)(v10 + 56);
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  v12 = (_DWORD *)(v10 + 56);
  v13 = 0LL;
  v14 = (__int64)v9;
  v15 = v11;
  if ( v11 >= *((unsigned int *)v9 + 11) )
  {
    while ( 1 )
    {
      v16 = *(unsigned int *)(v14 + 44);
      ++v13;
      v14 = *(_QWORD *)(v14 + 16);
      v15 -= v16;
      if ( v13 == 3 && (*v12 & 0x20) == 0 )
        break;
      if ( !v14 )
      {
        if ( (*v12 & 0x20) != 0 )
          return 0LL;
        break;
      }
      if ( v15 < *(unsigned int *)(v14 + 44) )
        goto LABEL_10;
    }
    v22 = (v11 + (*((unsigned int *)v9 + 9) | ((unsigned __int64)((_WORD)v9[4] & 0xFFC0) << 26))) << 12;
    if ( (a3 & 1) != 0 )
      v8 = 1;
    SubsectionNode = MiLocateSubsectionNode(v10, v22, v8);
    v14 = SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v15 = (v22 >> 12)
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  }
LABEL_10:
  v17 = *(_DWORD *)(v14 + 44);
  v18 = *(_DWORD *)(v14 + 52) & 0x3FFFFFFF;
  v25 = v15;
  if ( v15 >= (unsigned int)(v17 - v18) )
    return 0LL;
  v19 = *(_QWORD *)(v14 + 8);
  *a4 = v14;
LABEL_12:
  if ( (*(_BYTE *)(v14 + 34) & 2) != 0 && (*v12 & 0x8000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v19 = *(_QWORD *)(MiGetSharedProtos(v10, SessionId, v14) + 72);
  }
  return v19 + 8 * v25;
}
