__int64 __fastcall ExAllocatePool2(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  __int64 v3; // rdi
  int v7; // r11d
  char v8; // dl
  char v9; // r8
  int v10; // r9d
  int v11; // ecx
  POOL_TYPE v12; // esi
  int v13; // r9d
  int v15; // ecx
  POOL_TYPE v16; // ecx
  __int64 Process; // r15
  ULONG_PTR PoolWithTagFromNode; // r13
  ULONG_PTR v19; // r8
  ULONG_PTR v20; // rdx
  __int16 v21; // cx
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int64 *v24; // r12
  char v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  bool v29; // zf
  signed __int64 v30; // rax
  __int64 v31; // r10
  char v32; // r9
  signed __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  ULONG_PTR v37; // rbx
  _BYTE *BugCheckParameter4; // rdx
  signed __int64 v39; // rbp
  unsigned __int64 v40; // rax
  ULONG_PTR HeapFromVA; // rax
  int v42; // ecx
  signed __int32 v43[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  __int64 v49; // [rsp+58h] [rbp-50h]
  ULONG_PTR v50; // [rsp+60h] [rbp-48h]
  char v51; // [rsp+C0h] [rbp+18h]
  __int64 v52; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = 0;
  if ( !a3 )
    goto LABEL_90;
  v8 = 0;
  v9 = 0;
  if ( (a1 & 0xFFFFF810) != 0 )
    goto LABEL_90;
  if ( (a1 & 0x1C0) == 0x40 )
  {
    v10 = 512;
    goto LABEL_8;
  }
  if ( (a1 & 0x1C0) == 0x80 )
  {
    v10 = 0;
    goto LABEL_8;
  }
  if ( (a1 & 0x1C0) != 0x100 )
  {
LABEL_90:
    v42 = -1073741811;
    goto LABEL_91;
  }
  v10 = 1;
  if ( (a1 & 0x10) != 0 )
    v10 = -2147483647;
LABEL_8:
  v11 = v10 | 0x20;
  if ( (a1 & 4) == 0 )
    v11 = v10;
  v12 = v11 | 0x400;
  if ( (a1 & 2) != 0 )
    v12 = v11;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v15 = v12 | 4;
    if ( (a1 & 8) == 0 )
      v15 = v12;
    v12 = v15;
    if ( (a1 & 0x200) != 0 )
      v12 = v15 | 0x80;
    if ( (a1 & 0x400) != 0 )
      v12 |= 0x40u;
    v16 = v12;
    if ( (a1 & 1) != 0 )
    {
      v12 |= 8u;
      v8 = 1;
      if ( (a1 & 0x20) != 0 )
        v12 = v16;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v12 |= 0x10u;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      v9 = 1;
  }
  if ( v9 )
    v7 = 1;
  v13 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( v8 )
  {
    LODWORD(v52) = 0;
    v45 = 0LL;
    v44 = v12 & 8;
    if ( (v12 & 8) != 0 )
      v12 &= ~8u;
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    if ( (PEPROCESS)Process != PsInitialSystemProcess )
      v12 += 8;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v12, a2, a3, v13 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
    {
LABEL_81:
      v3 = PoolWithTagFromNode;
      if ( !v44 )
        RtlRaiseStatus(-1073741670);
      v42 = -1073741670;
      goto LABEL_91;
    }
    if ( (v12 & 8) == 0 )
      return PoolWithTagFromNode;
    if ( ExpSpecialAllocations )
    {
      HeapFromVA = ExGetHeapFromVA(PoolWithTagFromNode);
      if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
        return PoolWithTagFromNode;
    }
    v50 = PoolWithTagFromNode & 0xFFF;
    if ( (PoolWithTagFromNode & 0xFFF) != 0 )
    {
      v19 = PoolWithTagFromNode - 16;
      v20 = PoolWithTagFromNode - 16;
      if ( (*(_BYTE *)(PoolWithTagFromNode - 13) & 4) != 0 )
        v20 += -16LL * (unsigned __int8)*(_WORD *)v19;
      v21 = *(_WORD *)(v20 + 2);
      v45 = 16LL * (unsigned __int8)v21;
      LODWORD(v52) = *(_DWORD *)(v20 + 4);
      if ( (v21 & 0x800) != 0 )
        *(_QWORD *)(v20 + 8) = ExpPoolQuotaCookie ^ v20;
    }
    else
    {
      ExpStampBigPoolEntry(PoolWithTagFromNode, (unsigned int)v12, 0LL, &v45, &v52);
      v19 = PoolWithTagFromNode - 16;
    }
    if ( (PEPROCESS)Process != PsInitialSystemProcess )
    {
      v22 = *(_QWORD *)(Process + 1384);
      v23 = v12 & 1;
      v48 = v23;
      v24 = (unsigned __int64 *)(v22 + (v23 << 7));
      v25 = PspResourceFlags[8 * v23];
      v51 = v25;
      v49 = 8 * v23;
      _m_prefetchw(v24);
      v26 = *v24;
      v47 = *v24;
      _InterlockedOr(v43, 0);
LABEL_44:
      v27 = v24[8];
LABEL_45:
      v46 = v27;
      while ( 1 )
      {
        v28 = v26 + v45;
        if ( v26 + v45 < v26 )
          break;
        if ( v28 <= v27 )
        {
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v28, v26);
          v29 = v26 == v30;
          v26 = v30;
          v47 = v30;
          if ( !v29 )
            goto LABEL_44;
          PspInterlockedMaxQuota(v24 + 1, v28);
          if ( (v32 & 4) != 0 )
          {
            v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 8 * v31 + 1136), v45);
            v34 = v45 + v33;
            _m_prefetchw((const void *)(Process + 8 * v31 + 1152));
            v35 = *(_QWORD *)(Process + 8 * v31 + 1152);
            if ( v34 > v35 )
            {
              do
              {
                v36 = v35;
                v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(Process + 8 * v31 + 1152), v34, v35);
              }
              while ( v35 != v36 && v34 > v35 );
            }
          }
          goto LABEL_55;
        }
        if ( (v25 & 1) == 0 || !v24[10] )
          break;
        v40 = _InterlockedExchange64((volatile __int64 *)v24 + 9, 0LL);
        if ( v40 )
        {
          v27 = v40 + _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, v40);
          goto LABEL_45;
        }
        if ( !PspExpandQuota(v23, (__int64)v24, v26, v45, &v46) )
          break;
        v27 = v46;
        v26 = v47;
        LODWORD(v23) = v48;
        v25 = v51;
      }
      if ( *(int *)&PspResourceFlags[v49 + 4] >= 0 )
      {
LABEL_55:
        v19 = PoolWithTagFromNode - 16;
        goto LABEL_56;
      }
      ExFreePoolWithTag((PVOID)PoolWithTagFromNode, a3);
      PoolWithTagFromNode = 0LL;
      goto LABEL_81;
    }
LABEL_56:
    v37 = 0LL;
    if ( v50 )
    {
      v37 = v19;
      if ( (*(_BYTE *)(v19 + 3) & 4) != 0 )
        v37 = -16LL * (unsigned __int8)*(_WORD *)v19 + v19;
      if ( (*(_BYTE *)(v37 + 3) & 8) == 0 )
        goto LABEL_62;
      BugCheckParameter4 = (_BYTE *)(ExpPoolQuotaCookie ^ *(_QWORD *)(v37 + 8) ^ v37);
      *(_QWORD *)(v37 + 8) = Process ^ ExpPoolQuotaCookie ^ v37;
    }
    else
    {
      BugCheckParameter4 = (_BYTE *)ExpStampBigPoolEntry(PoolWithTagFromNode, (unsigned int)v12, Process, &v45, &v52);
    }
    if ( (unsigned __int64)(BugCheckParameter4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && ((unsigned __int64)BugCheckParameter4 < 0xFFFF800000000000uLL || (*BugCheckParameter4 & 0x7F) != 3) )
    {
      if ( v37 )
        LODWORD(v3) = *(_DWORD *)(v37 + 4);
      KeBugCheckEx(0xC2u, 0xDuLL, PoolWithTagFromNode, (unsigned int)v3, (ULONG_PTR)BugCheckParameter4);
    }
LABEL_62:
    if ( ObpTraceFlags )
      ObpPushStackInfo(Process - 48, 1, 1u, a3);
    v39 = _InterlockedIncrement64((volatile signed __int64 *)(Process - 48));
    if ( v39 <= 1 )
      KeBugCheckEx(0x18u, 0LL, Process, 0x10uLL, v39);
    return PoolWithTagFromNode;
  }
  v3 = ExpAllocatePoolWithTagFromNode(v12, a2, a3, v13 | 0x80000000, v7);
  if ( v3 )
    return v3;
  v42 = -1073741670;
LABEL_91:
  if ( (a1 & 0x20) != 0 )
    RtlRaiseStatus(v42);
  return v3;
}
