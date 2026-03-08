/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x14024E320
 * Callers:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1402DFF54 (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x140248860 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v5; // cl
  unsigned __int8 v7; // r14
  int v9; // r15d
  int v10; // edi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // rdi
  bool v14; // al
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // cl
  unsigned __int64 *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // r8
  int v22; // r9d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v27; // rax
  signed __int32 *v28; // rdx
  bool v29; // al
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_BYTE *)(a1 + 130);
  v7 = 1;
  v9 = 0;
  *a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v5 == 21 || (v5 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v5 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v5 & 0xEF;
    v11 = 3LL * (v5 & 7);
    v12 = KiTimer2Collections[v11];
    v13 = &KiTimer2Collections[v11];
    if ( (v13[1] & 1) == 0 )
      goto LABEL_7;
    if ( v12 )
    {
      v12 ^= (unsigned __int64)v13;
LABEL_7:
      v14 = 0;
      if ( !v12 )
        goto LABEL_51;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v12 + 48) )
        {
          v15 = *(_QWORD *)(v12 + 8);
          if ( (KiTimer2Collections[v11 + 1] & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_49;
            v15 ^= v12;
          }
          if ( !v15 )
          {
LABEL_49:
            v14 = 1;
            goto LABEL_51;
          }
        }
        else
        {
          v15 = *(_QWORD *)v12;
          if ( (KiTimer2Collections[v11 + 1] & 1) != 0 )
          {
            if ( !v15 )
              break;
            v15 ^= v12;
          }
          if ( !v15 )
            break;
        }
        v12 = v15;
      }
    }
    v14 = 0;
LABEL_51:
    RtlRbInsertNodeEx(v13, v12, v14, a1 + 24);
    v27 = v13[1];
    if ( (v27 & 1) != 0 )
    {
      if ( v27 == 1 )
        v16 = 0LL;
      else
        v16 = v27 ^ ((unsigned __int64)v13 | 1);
    }
    else
    {
      v16 = v13[1];
    }
    if ( v16 == a1 + 24 )
    {
      v13[2] = *(_QWORD *)(a1 + 72);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  v17 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v17 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v17 & 0xEF;
    v18 = (unsigned __int64 *)(0x140000000LL + 24LL * (v17 & 7) + 12853056);
    v19 = *(_QWORD *)(0x140000008LL + 24LL * (v17 & 7) + 12853056);
    v20 = *v18;
    if ( (v19 & 1) == 0 )
      goto LABEL_22;
    if ( v20 )
    {
      v20 ^= (unsigned __int64)v18;
LABEL_22:
      v21 = 0;
      v22 = v19 & 1;
      if ( !v20 )
        goto LABEL_35;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= *(_QWORD *)(v20 + 32) )
        {
          v23 = *(_QWORD *)(v20 + 8);
          if ( v22 )
          {
            if ( !v23 )
              goto LABEL_33;
            v23 ^= v20;
          }
          if ( !v23 )
          {
LABEL_33:
            v21 = 1;
            goto LABEL_35;
          }
        }
        else
        {
          v23 = *(_QWORD *)v20;
          if ( v22 )
          {
            if ( !v23 )
              goto LABEL_35;
            v23 ^= v20;
          }
          if ( !v23 )
            goto LABEL_35;
        }
        v20 = v23;
      }
    }
    v21 = 0;
LABEL_35:
    RtlRbInsertNodeEx(v18, v20, v21, a1 + 48);
    v24 = v18[1];
    if ( (v24 & 1) != 0 )
    {
      if ( v24 == 1 )
        v25 = 0LL;
      else
        v25 = v24 ^ ((unsigned __int64)v18 | 1);
    }
    else
    {
      v25 = v18[1];
    }
    if ( v25 == a1 + 48 )
    {
      v9 = 1;
      v18[2] = *(_QWORD *)(a1 + 80);
    }
    v10 |= v9;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v32, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v7 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v28 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 35000);
    if ( v28 )
    {
      _m_prefetchw(v28);
      v30 = *v28;
      do
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange(v28, v30 | 0x80000, v30);
      }
      while ( v31 != v30 );
      v29 = (v30 & 0x80000) == 0;
    }
    else
    {
      v29 = 0;
    }
    *a4 = v29;
  }
  return v7;
}
