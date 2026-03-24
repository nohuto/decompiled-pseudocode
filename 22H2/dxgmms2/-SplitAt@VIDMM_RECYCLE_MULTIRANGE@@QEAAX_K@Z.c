/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007A160
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0074C60 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007990C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C007A630 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00850D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  struct _SLIST_ENTRY *i; // rsi
  struct _SLIST_ENTRY *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  PSLIST_ENTRY v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  CCHAR LeastSignificantBit; // al
  __int64 v22; // rdx
  __int64 v23; // rax
  struct _SLIST_ENTRY *Next; // r14
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  struct _RTL_BALANCED_NODE *v35; // rdi
  __int64 v36; // r8
  struct _RTL_BALANCED_NODE *v37; // rax
  _QWORD v38[2]; // [rsp+30h] [rbp-58h] BYREF
  char v39; // [rsp+40h] [rbp-48h]
  int v40; // [rsp+90h] [rbp+8h] BYREF
  __int64 v41; // [rsp+98h] [rbp+10h]

  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = (struct _SLIST_ENTRY *)(a2 + *((_QWORD *)this + 4));
        NextRange;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= (unsigned __int64)i && *((_QWORD *)NextRange + 5) > (unsigned __int64)i )
      break;
  }
  v5 = (struct _SLIST_ENTRY *)*((_QWORD *)NextRange + 4);
  if ( v5 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v40) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, (char *)i - (char *)v5, (bool *)&v40);
    if ( !(_BYTE)v40 )
    {
      v8 = WdLogNewEntry5_WdWarning(v7, v6);
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v8);
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v9 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v11 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v9 != v11 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v9 - 120);
  }
  v12 = *((_QWORD *)this + 10);
  v41 = *((_QWORD *)this + 5);
  v13 = *(_QWORD *)(v12 + 32);
  v40 = *((_DWORD *)this + 54);
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(_DWORD *)(v14 + 1612);
  v16 = *(_QWORD *)(v14 + 1320);
  if ( v15 )
  {
    v17 = (unsigned int)(v15 - 1);
    v18 = *(PSLIST_ENTRY *)(v14 + 8 * v17 + 1648);
    *(_QWORD *)(v14 + 8 * v17 + 1648) = 0LL;
    --*(_DWORD *)(v14 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v16 + 20);
    v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
    if ( !v18 )
    {
      ++*(_DWORD *)(v16 + 24);
      v18 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v16 + 48))(
                            *(unsigned int *)(v16 + 36),
                            *(unsigned int *)(v16 + 44),
                            *(unsigned int *)(v16 + 40),
                            v16);
    }
  }
  if ( v18 )
  {
    ++*(_DWORD *)(v14 + 1680);
    v19 = WdLogNewEntry5_WdEvent(v13, v9);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdEvent(v19);
    *((_QWORD *)&v18[2].Next + 1) = v41;
    v20 = v40;
    v18[2].Next = i;
    *((_DWORD *)&v18[13].Next + 2) = v20;
    *((_DWORD *)&v18[1].Next + 2) = 1;
    v18[4].Next = 0LL;
    *((_QWORD *)&v18[4].Next + 1) = 0LL;
    v18[5].Next = (struct _SLIST_ENTRY *)v12;
    v18[3].Next = i;
    LOWORD(v18[8].Next) = 0;
    ++*(_QWORD *)(v12 + 8);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v18[2].Next);
    if ( LeastSignificantBit < 0 )
      v23 = 0LL;
    else
      v23 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v18[3].Next + 1) = v23;
    Next = v18[5].Next;
    *((_QWORD *)&v18[5].Next + 1) = 3LL;
    v18[6].Next = 0LL;
    *((_QWORD *)&v18[6].Next + 1) = 0LL;
    v18[7].Next = 0LL;
    *((_QWORD *)&v18[7].Next + 1) = 0LL;
    BYTE2(v18[8].Next) = 0;
    *((_QWORD *)&v18[8].Next + 1) = 0LL;
    v18[9].Next = 0LL;
    v18[12].Next = 0LL;
    *((_WORD *)&v18[9].Next + 4) = 0;
    v18[10].Next = 0LL;
    *((_QWORD *)&v18[10].Next + 1) = 0LL;
    *((_QWORD *)&v18[11].Next + 1) = 0LL;
    v18[11].Next = 0LL;
    *((_QWORD *)&v18[12].Next + 1) = 0LL;
    v18[13].Next = 0LL;
    *((_BYTE *)&v18[14].Next + 8) = 0;
    v18[14].Next = 0LL;
    v25 = *((_QWORD *)&Next[8].Next + 1);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 24) + 144LL * *(_QWORD *)(v25 + 32);
      *(_DWORD *)v26 = 0;
      *(_QWORD *)(v26 + 8) = v18;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v26 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&Next[8].Next + 1) + 32LL);
      v27 = *((_QWORD *)&Next[8].Next + 1);
      if ( *(_QWORD *)(v27 + 32) == *(_QWORD *)(v27 + 48) )
      {
        *(_QWORD *)(v27 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&Next[8].Next + 1) + 40LL) = 1;
      }
    }
    v18[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v18[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    for ( j = (struct VIDMM_RECYCLE_RANGE *)v18[4].Next; ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v29 = *((unsigned int *)&v18[13].Next + 2);
      if ( (_DWORD)v29 )
      {
        v29 = (unsigned int)(v29 - 1);
        if ( (_DWORD)v29 )
        {
          if ( (_DWORD)v29 == 1 )
          {
            *((_QWORD *)j + 19) = v18;
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v22);
            v30[3] = 270LL;
            v30[4] = 52LL;
            v30[5] = 10LL;
            v30[6] = 0LL;
            v30[7] = 0LL;
            WdLogEvent5_WdCriticalError(v30);
          }
        }
        else
        {
          *((_QWORD *)j + 18) = v18;
        }
      }
      else
      {
        *((_QWORD *)j + 17) = v18;
      }
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)&v18[4].Next + 1) )
        break;
    }
    v31 = *((_DWORD *)this + 54);
    if ( v31 != 1 )
    {
      if ( v31 )
      {
        if ( v31 == 2 )
          VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(*((_QWORD *)this + 10) + 32LL), 0LL, (__int64)v18);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(*((_QWORD *)this + 10) + 32LL), 2LL, (__int64)v18);
      }
      return;
    }
    v32 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v33 = WdLogNewEntry5_WdEvent(v29, v22);
    *(_QWORD *)(v33 + 24) = v18;
    *(_QWORD *)(v33 + 32) = 1LL;
    WdLogEvent5_WdEvent(v33);
    v34 = *((_QWORD *)&v18[3].Next + 1);
    v38[0] = *((_QWORD *)&v18[2].Next + 1) - (unsigned __int64)v18[2].Next;
    v38[1] = v34;
    v39 = 0;
    v35 = *(struct _RTL_BALANCED_NODE **)(v32 + 56);
    LOBYTE(v36) = 0;
    if ( !v35 )
      goto LABEL_48;
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v38, v35) < 0 )
      {
        v37 = v35->Children[0];
        if ( !v35->Children[0] )
        {
          LOBYTE(v36) = 0;
LABEL_48:
          RtlAvlInsertNodeEx(v32 + 56, v35, v36, v18);
          *((_DWORD *)&v18[5].Next + 2) = 1;
          return;
        }
      }
      else
      {
        v37 = v35->Children[1];
        if ( !v37 )
        {
          LOBYTE(v36) = 1;
          goto LABEL_48;
        }
      }
      v35 = v37;
    }
  }
}
