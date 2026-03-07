void __fastcall KiAbProcessThreadLocks(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r12d
  int v8; // r13d
  char v9; // al
  __int64 v11; // r14
  unsigned int v12; // ebx
  bool i; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // r12
  int v22; // r10d
  char CpuPriorityKey; // r13
  _DWORD *v24; // rdi
  char v25; // al
  char v26; // cl
  __int64 ExtensionTable; // rax
  int v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = a4;
  v8 = a3;
  v9 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 870);
  v31 = 0;
  v11 = a1;
  if ( v9 != 63 )
  {
    v12 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v12); !i; i = !_BitScanForward((unsigned int *)&a1, v12) )
    {
      v12 &= v12 - 1;
      v14 = 96 * a1;
      v15 = v14 + v11 + 1696;
      v16 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 || (v16 & 2) != 0 || a2 && (v16 & 1) != 0 )
        continue;
      if ( v16 < 0 )
      {
        if ( a2 )
        {
          if ( (*(_BYTE *)(v15 + 19) & 1) != 0 )
            continue;
          if ( *(_BYTE *)(v15 + 17) )
          {
            v26 = *(_BYTE *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1501);
            if ( v26 > 30 )
              v26 = 30;
            if ( v26 == *(_BYTE *)(v15 + 48) )
              continue;
          }
          else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v14 + v11 + 1696) == *(_BYTE *)(v15 + 48) )
          {
            continue;
          }
        }
        else if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            continue;
        }
        else if ( !v7 )
        {
          continue;
        }
      }
      else if ( !a2 )
      {
        continue;
      }
      v30 = 0LL;
      v17 = 0;
      v31 = 0;
      v28 = 0;
      v29 = 0LL;
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v15, a2, &v29);
      v19 = LockedHeadEntry;
      if ( LockedHeadEntry )
      {
        if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            goto LABEL_41;
          if ( v15 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v15, LockedHeadEntry);
          v20 = *(_QWORD *)(v19 + 56);
          if ( v20 )
            v21 = *(_BYTE *)(v20 + 24);
          else
            v21 = 30;
          if ( !*(_BYTE *)(v19 + 17) )
          {
            v25 = KiAbOwnerComputeCpuPriorityKey(v19);
            if ( v25 < v21 )
              v21 = v25;
          }
          KiAbTryIncrementIoWaiterCounts(v15, v19);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15);
          if ( v21 < CpuPriorityKey )
          {
            if ( v22 )
LABEL_52:
              KiAbIoBoostOwners(v19, v22, a5, a6, a7);
            KiAbCpuBoostOwners(v19, (unsigned __int8)CpuPriorityKey, a5, a6, a7);
            v7 = v33;
            v8 = v32;
LABEL_41:
            KxReleaseQueuedSpinLock(&v29);
            if ( v17 )
            {
              v24 = (_DWORD *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1696);
              if ( ObReferenceObjectSafeWithTag((__int64)v24) )
              {
                if ( (v17 & 1) != 0 )
                  IoBoostThreadIoPriority(v24, 2LL, 0x80000000LL);
                if ( (v17 & 2) != 0 && v24[362] )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v24);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v24, 0x746C6644u);
              }
            }
            continue;
          }
          if ( v22 )
            goto LABEL_52;
          v7 = v33;
          v8 = v32;
        }
        else
        {
          if ( !v7 )
            goto LABEL_41;
          if ( v15 != LockedHeadEntry )
            KiAbEntryUpdateOwnerTreePosition(v15, LockedHeadEntry);
          KiAbDetermineMaxWaiterPriority(v19, &v31);
          if ( v31 )
          {
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v15, (unsigned int)&v31, a5, a6, a7, (__int64)&v28)
              && v15 != v19 )
            {
              KiAbEntryUpdateOwnerTreePosition(v15, v19);
            }
            v17 = v28;
            goto LABEL_41;
          }
        }
        KxReleaseQueuedSpinLock(&v29);
      }
    }
  }
}
