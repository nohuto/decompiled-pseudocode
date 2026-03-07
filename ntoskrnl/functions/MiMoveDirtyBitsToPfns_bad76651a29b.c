__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // r15
  int v10; // r14d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  _KPROCESS *Process; // rcx
  __int64 v14; // rbx
  int v15; // r13d
  unsigned __int8 v16; // al
  int v17; // esi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  unsigned __int64 LeafVa; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  bool v33; // zf
  unsigned __int64 v34; // rax
  unsigned __int64 v36; // r14
  __int64 v37; // rcx
  unsigned __int64 i; // rsi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int8 v44; // [rsp+30h] [rbp-148h]
  int v45; // [rsp+34h] [rbp-144h]
  int v46; // [rsp+38h] [rbp-140h]
  unsigned int v47; // [rsp+3Ch] [rbp-13Ch] BYREF
  unsigned __int64 *v48; // [rsp+40h] [rbp-138h]
  __int64 v49; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v50; // [rsp+50h] [rbp-128h]
  unsigned __int64 v51; // [rsp+58h] [rbp-120h]
  unsigned __int64 v52; // [rsp+60h] [rbp-118h]
  int v53; // [rsp+70h] [rbp-108h] BYREF
  __int16 v54; // [rsp+74h] [rbp-104h]
  __int16 v55; // [rsp+76h] [rbp-102h]
  __int64 v56; // [rsp+78h] [rbp-100h]
  __int64 v57; // [rsp+80h] [rbp-F8h]
  __int64 v58; // [rsp+88h] [rbp-F0h]
  _BYTE v59[152]; // [rsp+90h] [rbp-E8h] BYREF

  v4 = a3;
  v49 = a3;
  v47 = 0;
  v55 = 0;
  memset(v59, 0, sizeof(v59));
  v8 = 0LL;
  v45 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v51 = Process[1].ActiveProcessors.StaticBitmap[28];
  v50 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v15 = a4 & 1;
  if ( (a4 & 1) != 0 )
    v48 = (unsigned __int64 *)(MiLocateLockedVadEvent(v4, 4) + 8);
  else
    v48 = 0LL;
  v56 = 20LL;
  v53 = 1;
  v54 = v8;
  v57 = v8;
  v58 = v8;
  v16 = MiLockWorkingSetShared(v14);
  v44 = v16;
  if ( v11 <= v12 )
  {
    v17 = a4 & 2;
    v46 = v17;
    while ( 1 )
    {
      if ( v9 )
      {
        MiFlushTbList(&v53);
        MiUnlockPageTableInternal(v14, v9);
        v9 = 0LL;
        if ( (unsigned int)MiWorkingSetIsContended(v14) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v14, v44);
          MiLockWorkingSetShared(v14);
        }
        v16 = v44;
      }
      if ( v17 )
        _InterlockedIncrement64((volatile signed __int64 *)(v51 + 632));
      NextPageTable = MiGetNextPageTable(v11, v12, 0, v16, 1, (__int64)&v47);
      v19 = NextPageTable;
      v20 = NextPageTable;
      if ( NextPageTable )
      {
        v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v47 )
        {
          v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v36 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v47 > 1 )
          {
            v37 = v47 - 1;
            do
            {
              v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v36 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v37;
            }
            while ( v37 );
          }
          v9 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          for ( i = v20 + 8; (i & 0xFFF) != 0; i += 8LL )
          {
            if ( i > v36 )
              break;
            if ( (MI_READ_PTE_LOCK_FREE(i) & 0x81) != 0x81 )
              break;
          }
          v10 = v45;
          v21 = i - 8;
        }
        else
        {
          v21 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v21 > v12 )
            v21 = v12;
        }
      }
      else
      {
        v21 = v12;
      }
      if ( v15 )
      {
        v45 = 1;
        MiGetVadMandatoryPageSize(v49);
        LeafVa = MiGetLeafVa(v11);
        v25 = ((LeafVa >> 12) - v23) / v24;
        v26 = MiGetLeafVa(v21 + 8);
        v30 = ((*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) << 12) | 0xFFF;
        if ( v26 > v30 )
        {
          v31 = *v48;
        }
        else
        {
          v30 = ((v26 >> 12) - v27) % v28;
          v31 = ((v26 >> 12) - v27) / v28;
        }
        MiLockVadCore(v29, v30);
        RtlClearBitsEx((__int64)v48, v25, v31 - v25);
        v10 = 1;
      }
      if ( !v19 )
        goto LABEL_28;
      if ( v20 > v21 )
        goto LABEL_25;
      do
      {
        v32 = *(_QWORD *)v20;
        if ( v20 >= 0xFFFFF6FB7DBED000uLL
          && v20 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v32 & 1) != 0 )
        {
          if ( (v32 & 0x20) != 0 )
          {
            v33 = (v32 & 0x42) == 0;
            if ( (v32 & 0x42) != 0 )
              goto LABEL_20;
          }
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v40 = *((_QWORD *)&Flink->Flink + ((v20 >> 3) & 0x1FF));
            v41 = v32 | 0x20;
            if ( (v40 & 0x20) == 0 )
              v41 = *(_QWORD *)v20;
            v32 = v41;
            if ( (v40 & 0x42) != 0 )
              v32 = v41 | 0x42;
          }
        }
        v33 = (v32 & 0x42) == 0;
LABEL_20:
        if ( !v33 && (v32 & 1) != 0 )
        {
          if ( v15 || (!v46 || v32 >= 0) && (v42 = MiGetLeafVa(v20), (MiGetWsleContents(v43, v42) & 0xF) != 9) )
            MiMakePteClean(v20, (__int64)&v53);
        }
        v20 += 8LL;
      }
      while ( v20 <= v21 );
      v12 = v52;
      v10 = v45;
LABEL_25:
      if ( v10 )
      {
        MiUnlockVadCore(v49, 2u);
        v10 = 0;
        v45 = 0;
      }
      v34 = MiGetLeafVa(v20);
      v14 = (__int64)v50;
      v11 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = v46;
      v16 = v44;
      if ( v11 > v12 )
      {
LABEL_28:
        v14 = (__int64)v50;
        v4 = v49;
        break;
      }
    }
  }
  MiFlushTbList(&v53);
  if ( v10 )
    MiUnlockVadCore(v4, 2u);
  if ( v9 )
    MiUnlockPageTableInternal(v14, v9);
  return MiUnlockWorkingSetShared(v14, v44);
}
