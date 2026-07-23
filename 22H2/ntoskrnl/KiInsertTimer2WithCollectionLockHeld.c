/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1402F05B0
 * Callers:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1402F0540 (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14024AD50 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  unsigned __int8 v8; // r15
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _RTL_RB_TREE *v15; // rdi
  BOOLEAN v16; // r8
  int v17; // r9d
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *Min; // rax
  __int64 v20; // rcx
  char v21; // cl
  _RTL_RB_TREE *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v25; // r8
  int v26; // ecx
  unsigned __int64 v27; // rax
  _RTL_BALANCED_NODE *v28; // rcx
  __int64 v29; // rax
  bool v31; // dl
  signed __int32 *v32; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  signed __int32 v35[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 1;
  v10 = 0;
  *a3 = 0;
  v11 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v6 & 0xEF;
    v12 = 3LL * (v6 & 7);
    v13 = KiTimer2Collections[v12 + 1];
    v14 = KiTimer2Collections[v12];
    v15 = (_RTL_RB_TREE *)&KiTimer2Collections[v12];
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= (unsigned __int64)v15;
      else
        v14 = 0LL;
    }
    v16 = 0;
    v17 = v13 & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v14 + 48) )
        {
          v18 = *(_QWORD *)v14;
          if ( v17 )
          {
            if ( !v18 )
              break;
            v18 ^= v14;
          }
          if ( !v18 )
            break;
        }
        else
        {
          v18 = *(_QWORD *)(v14 + 8);
          if ( v17 )
          {
            if ( !v18 )
              goto LABEL_20;
            v18 ^= v14;
          }
          if ( !v18 )
          {
LABEL_20:
            v16 = 1;
            break;
          }
        }
        v14 = v18;
      }
    }
    RtlRbInsertNodeEx(v15, (PRTL_BALANCED_NODE)v14, v16, (PRTL_BALANCED_NODE)(a1 + 24));
    Min = v15->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        v20 = 0LL;
      else
        v20 = (unsigned __int64)Min ^ ((unsigned __int64)v15 | 1);
    }
    else
    {
      v20 = (__int64)v15->Min;
    }
    if ( v20 == a1 + 24 )
    {
      v15[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v21 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v21 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v21 & 0xEF;
    v22 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v21 & 7) + 12786912);
    v23 = *(_QWORD *)(0x140000008LL + 24LL * (v21 & 7) + 12786912);
    Root = (unsigned __int64)v22->Root;
    if ( (v23 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v22;
      else
        Root = 0LL;
    }
    v25 = 0;
    v26 = v23 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(Root + 32) )
        {
          v27 = *(_QWORD *)Root;
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_40;
            v27 ^= Root;
          }
          if ( !v27 )
          {
LABEL_40:
            v25 = 0;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)(Root + 8);
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_63;
            v27 ^= Root;
          }
          if ( !v27 )
          {
LABEL_63:
            v25 = 1;
            break;
          }
        }
        Root = v27;
      }
    }
    RtlRbInsertNodeEx(v22, (PRTL_BALANCED_NODE)Root, v25, (PRTL_BALANCED_NODE)(a1 + 48));
    v28 = v22->Min;
    if ( ((unsigned __int8)v28 & 1) != 0 )
    {
      if ( v28 == (_RTL_BALANCED_NODE *)1 )
        v29 = 0LL;
      else
        v29 = (unsigned __int64)v28 ^ ((unsigned __int64)v22 | 1);
    }
    else
    {
      v29 = (__int64)v22->Min;
    }
    if ( v29 == a1 + 48 )
    {
      v10 = 1;
      v22[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
    v7 = a2;
    v11 |= v10;
  }
  if ( v11 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v35, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1);
        v8 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v31 = 0;
    v32 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33976);
    if ( v32 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v32);
      v33 = *v32;
      do
      {
        v34 = v33;
        v33 = _InterlockedCompareExchange(v32, v33 | 0x80000, v33);
      }
      while ( v34 != v33 );
      v31 = (v33 & 0x80000) == 0;
    }
    *a4 = v31;
  }
  return v8;
}
