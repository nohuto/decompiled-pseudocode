/*
 * XREFs of RtlRbInsertNodeEx @ 0x180027DC0
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x180005E4C (RtlpHpVaMgrFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180014744 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     EtwpInsertRegistration @ 0x180043464 (EtwpInsertRegistration.c)
 *     EtwpInsertGuidEntry @ 0x180048114 (EtwpInsertGuidEntry.c)
 *     LdrpCheckForRetryLoading @ 0x1800612A8 (LdrpCheckForRetryLoading.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800662D8 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B24 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r11
  char v5; // bl
  $7D93978C745EB1C2D28075BAF55422B4 v7; // cl
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rax
  _RTL_BALANCED_NODE *v12; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v13; // si
  _RTL_BALANCED_NODE *v14; // r8
  char v15; // cl
  unsigned __int64 v16; // rdi
  _BOOL8 v17; // rbp
  _BOOL8 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // ebx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  $FBE9DFC73C710CED4CE990514FEA3AEC *v23; // r14
  unsigned __int64 v24; // rax
  _RTL_BALANCED_NODE **v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 Root; // r15
  $FBE9DFC73C710CED4CE990514FEA3AEC *v32; // rbx
  BOOL v33; // edi
  unsigned __int64 v34; // rax
  int v35; // r9d
  _BOOL8 v36; // rbp
  _RTL_BALANCED_NODE **v37; // r14
  unsigned __int64 v38; // rax
  $FBE9DFC73C710CED4CE990514FEA3AEC *v39; // rsi
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx

  v4 = 0LL;
  v5 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = Tree->0;
  LOBYTE(Min) = *(_BYTE *)&v7 & 1;
  if ( !Parent )
  {
    v44 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)Min )
      Tree->Root = (_RTL_BALANCED_NODE *)v44;
    else
      Tree->Root = Node;
    if ( (*(_BYTE *)&v7 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v44;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v44 | 1);
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v9 = Node;
  v10 = (_BYTE)Min == 0;
  v11 = (unsigned __int64)Parent;
  if ( !v10 )
    v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
  Parent->Children[Right] = v9;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v11 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
  Min = v11 | 1;
  Node->ParentValue = Min;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
      v12 = Min == 1 ? 0LL : (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    else
      v12 = Tree->Min;
    if ( Parent == v12 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v13 = Tree->0;
    while ( 1 )
    {
      v14 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v15 = *(_BYTE *)&v13 & 1;
      if ( (*(_BYTE *)&v13 & 1) != 0 && v14 )
        v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v14);
      v16 = (unsigned __int64)v14->Children[0];
      if ( v15 && v16 )
        v16 ^= (unsigned __int64)v14;
      v17 = v16 == (_QWORD)Parent;
      v18 = v16 != (_QWORD)Parent;
      Min = (unsigned __int64)v14->Children[v17];
      if ( v15 )
      {
        if ( !Min )
          break;
        Min ^= (unsigned __int64)v14;
      }
      if ( !Min || (*(_BYTE *)(Min + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v14;
      *(_BYTE *)(Min + 16) &= ~1u;
      LOBYTE(Min) = v14->ParentValue;
      Parent = (PRTL_BALANCED_NODE)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return Min;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v14 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        v14->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(Min | 1);
        v13 = Tree->0;
        Min = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v13 & 1) != 0 && Min )
          Min ^= (unsigned __int64)Parent;
        v5 = v14 != (_RTL_BALANCED_NODE *)Min;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return Min;
    }
    if ( v5 == v18 )
    {
LABEL_38:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v32 = &Parent->16;
      v33 = !v18;
      v34 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v35 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v34 )
        v34 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v34 != v14 )
        goto LABEL_90;
      v36 = v33;
      v37 = &v14->Children[!v33];
      v38 = (unsigned __int64)*v37;
      if ( ((__int64)Tree->Min & 1) != 0 && v38 )
        v38 ^= (unsigned __int64)v14;
      if ( (PRTL_BALANCED_NODE)v38 != Parent )
        goto LABEL_90;
      v39 = &v14->16;
      v40 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_78;
        v40 ^= (unsigned __int64)v14;
      }
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v41 )
          v41 ^= v40;
        if ( (_RTL_BALANCED_NODE *)v41 == v14 )
        {
          v42 = (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) != 0 )
            v42 = (unsigned __int64)Parent ^ v40;
          *(_QWORD *)(v40 + 8) = v42;
        }
        else
        {
          v45 = *(_QWORD *)v40;
          if ( ((__int64)Tree->Min & 1) != 0 && v45 )
            v45 ^= v40;
          if ( (_RTL_BALANCED_NODE *)v45 != v14 )
            goto LABEL_90;
          v46 = (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) != 0 )
            v46 = (unsigned __int64)Parent ^ v40;
          *(_QWORD *)v40 = v46;
        }
        goto LABEL_50;
      }
LABEL_78:
      if ( (_RTL_BALANCED_NODE *)Root != v14 )
        goto LABEL_90;
      Root = (unsigned __int64)Parent;
LABEL_50:
      if ( v35 && v40 )
        v40 ^= (unsigned __int64)Parent;
      v32->ParentValue &= 3uLL;
      v32->ParentValue |= v40;
      v43 = (unsigned __int64)Parent->Children[v36];
      if ( v35 )
      {
        if ( !v43 )
        {
LABEL_53:
          if ( v35 && v43 )
            v43 ^= (unsigned __int64)v14;
          *v37 = (_RTL_BALANCED_NODE *)v43;
          Min = (unsigned __int64)v14 ^ (unsigned __int64)Parent;
          if ( v35 )
            v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ (unsigned __int64)Parent);
          Parent->Children[v36] = v14;
          if ( v35 )
            Parent = (PRTL_BALANCED_NODE)Min;
          v39->ParentValue &= 3uLL;
          v39->ParentValue |= (unsigned __int64)Parent;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          {
            LOBYTE(Min) = Root ^ (unsigned __int8)Tree;
            if ( Root )
              v4 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)Tree);
          }
          else
          {
            v4 = (_RTL_BALANCED_NODE *)Root;
          }
          Tree->Root = v4;
          *(_BYTE *)&v39->0 |= 1u;
          *(_BYTE *)&v32->0 &= ~1u;
          return Min;
        }
        v43 ^= (unsigned __int64)Parent;
      }
      if ( !v43 )
        goto LABEL_53;
      v47 = *(_QWORD *)(v43 + 16);
      v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v35 && v48 )
        v48 ^= v43;
      if ( (PRTL_BALANCED_NODE)v48 == Parent )
      {
        v49 = (unsigned __int64)v14;
        if ( v35 )
          v49 = (unsigned __int64)v14 ^ v43;
        *(_QWORD *)(v43 + 16) = v49 | v47 & 3;
        goto LABEL_53;
      }
LABEL_90:
      __fastfail(0x1Du);
    }
    v19 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v20 = *(_BYTE *)&v13 & 1;
    if ( (*(_BYTE *)&v13 & 1) != 0 && v19 )
      v19 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v19 != Parent )
      goto LABEL_90;
    v21 = (unsigned __int64)Parent->Children[v17];
    if ( (*(_BYTE *)&v13 & 1) != 0 && v21 )
      v21 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v21 != Node )
      goto LABEL_90;
    v22 = (unsigned __int64)v14->Children[v18];
    if ( (*(_BYTE *)&v13 & 1) != 0 && v22 )
      v22 ^= (unsigned __int64)v14;
    if ( (PRTL_BALANCED_NODE)v22 != Parent )
      goto LABEL_90;
    v23 = &Parent->16;
    v24 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v13 & 1) != 0 && v24 )
      v24 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v24 != v14 )
      goto LABEL_90;
    v25 = &Node->Children[v18];
    v26 = (unsigned __int64)Node;
    if ( (*(_BYTE *)&v13 & 1) != 0 )
      v26 = (unsigned __int64)Node ^ (unsigned __int64)v14;
    v14->Children[v18] = (_RTL_BALANCED_NODE *)v26;
    v27 = (unsigned __int64)v14;
    if ( (*(_BYTE *)&v13 & 1) != 0 )
      v27 = (unsigned __int64)Node ^ (unsigned __int64)v14;
    Node->ParentValue &= 3uLL;
    Node->ParentValue |= v27;
    v28 = (unsigned __int64)*v25;
    if ( v20 )
    {
      if ( !v28 )
      {
LABEL_34:
        if ( v20 && v28 )
          v28 ^= (unsigned __int64)Parent;
        Parent->Children[v17] = (_RTL_BALANCED_NODE *)v28;
        v29 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
        v30 = (unsigned __int64)Node;
        if ( v20 )
        {
          Parent = (PRTL_BALANCED_NODE)((unsigned __int64)Parent ^ (unsigned __int64)Node);
          v30 = v29;
        }
        *v25 = Parent;
        Parent = Node;
        v23->ParentValue &= 3uLL;
        v23->ParentValue |= v30;
        goto LABEL_38;
      }
      v28 ^= (unsigned __int64)Node;
    }
    if ( v28 )
    {
      v50 = *(_QWORD *)(v28 + 16);
      v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v20 && v51 )
        v51 ^= v28;
      if ( (PRTL_BALANCED_NODE)v51 != Node )
        goto LABEL_90;
      v52 = (unsigned __int64)Parent;
      if ( v20 )
        v52 = (unsigned __int64)Parent ^ v28;
      *(_QWORD *)(v28 + 16) = v52 | v50 & 3;
    }
    goto LABEL_34;
  }
  return Min;
}
