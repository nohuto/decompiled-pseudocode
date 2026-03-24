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
  __int64 v8; // rdx
  unsigned __int8 v9; // r15
  int v11; // r14d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rdi
  bool v17; // r8
  int v18; // r9d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // cl
  unsigned __int64 *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  bool v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  bool v32; // dl
  signed __int32 *v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  signed __int32 v36[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 0x140000000uLL;
  v9 = 1;
  v11 = 0;
  *a3 = 0;
  v12 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v6 & 0xEF;
    v13 = 3LL * (v6 & 7);
    v14 = KiTimer2Collections[v13 + 1];
    v15 = KiTimer2Collections[v13];
    v16 = &KiTimer2Collections[v13];
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
        v15 ^= (unsigned __int64)v16;
      else
        v15 = 0LL;
    }
    v17 = 0;
    v18 = v14 & 1;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v15 + 48) )
        {
          v19 = *(_QWORD *)v15;
          if ( v18 )
          {
            if ( !v19 )
              break;
            v19 ^= v15;
          }
          if ( !v19 )
            break;
        }
        else
        {
          v19 = *(_QWORD *)(v15 + 8);
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_20;
            v19 ^= v15;
          }
          if ( !v19 )
          {
LABEL_20:
            v17 = 1;
            break;
          }
        }
        v15 = v19;
      }
    }
    RtlRbInsertNodeEx(v16, v15, v17, a1 + 24);
    v20 = v16[1];
    if ( (v20 & 1) != 0 )
    {
      if ( v20 == 1 )
        v21 = 0LL;
      else
        v21 = v20 ^ ((unsigned __int64)v16 | 1);
    }
    else
    {
      v21 = v16[1];
    }
    if ( v21 == a1 + 24 )
    {
      v16[2] = *(_QWORD *)(a1 + 72);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    v8 = 0x140000000uLL;
  }
  v22 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v22 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v22 & 0xEF;
    v23 = (unsigned __int64 *)(0x140000000LL + 24LL * (v22 & 7) + 12786912);
    v24 = *(_QWORD *)(0x140000008LL + 24LL * (v22 & 7) + 12786912);
    v25 = *v23;
    if ( (v24 & 1) != 0 )
    {
      if ( v25 )
        v25 ^= (unsigned __int64)v23;
      else
        v25 = 0LL;
    }
    v26 = 0;
    v27 = v24 & 1;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(v25 + 32) )
        {
          v28 = *(_QWORD *)v25;
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_41;
            v28 ^= v25;
          }
          if ( !v28 )
          {
LABEL_41:
            v26 = 0;
            break;
          }
        }
        else
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_64;
            v28 ^= v25;
          }
          if ( !v28 )
          {
LABEL_64:
            v26 = 1;
            break;
          }
        }
        v25 = v28;
      }
    }
    RtlRbInsertNodeEx(v23, v25, v26, a1 + 48);
    v29 = v23[1];
    if ( (v29 & 1) != 0 )
    {
      if ( v29 == 1 )
        v30 = 0LL;
      else
        v30 = v29 ^ ((unsigned __int64)v23 | 1);
    }
    else
    {
      v30 = v23[1];
    }
    if ( v30 == a1 + 48 )
    {
      v11 = 1;
      v23[2] = *(_QWORD *)(a1 + 80);
    }
    v7 = a2;
    v12 |= v11;
  }
  if ( v12 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v36, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1, v8, (__int64)a3);
        v9 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v32 = 0;
    v33 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33976);
    if ( v33 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v33);
      v34 = *v33;
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange(v33, v34 | 0x80000, v34);
      }
      while ( v35 != v34 );
      v32 = (v34 & 0x80000) == 0;
    }
    *a4 = v32;
  }
  return v9;
}
