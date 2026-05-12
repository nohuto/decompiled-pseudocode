/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C000ACCC
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0007998 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C000ABC0 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000ADB8 (RiPeekDeviceQueue.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0034B9C (RaidGetQosEntryForDeviceEntry.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00596DC (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rcx
  int v11; // eax
  char v12; // al
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rbp
  char v17; // r11
  unsigned int v18; // esi
  __int64 v19; // r10
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // r11
  char v28; // si
  unsigned int v29; // r14d
  __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rcx
  __int64 LbaFromCdb; // rax
  __int64 v38; // r9
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx

  LOBYTE(a3) = a2;
  v4 = RiPeekDeviceQueue(a1, a2, a3);
  v6 = v4;
  if ( !v4 )
    return v6;
  *(_BYTE *)(v4 + 22) ^= (*(_BYTE *)(v4 + 22) ^ (16 * v5)) & 0x10;
  if ( (*(_BYTE *)(v4 + 22) & 0x40) == 0 )
    goto LABEL_3;
  v14 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8LL);
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 10);
    v16 = v14 + 72;
    goto LABEL_54;
  }
  v15 = *(_DWORD *)(v14 + 20);
  v16 = 0LL;
  v17 = 0;
  if ( v15 )
    goto LABEL_37;
  v18 = *(_DWORD *)(v14 + 56);
  v19 = 0LL;
  if ( !v18 )
    goto LABEL_37;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v14 + 4 * v19 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_36:
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v18 )
      goto LABEL_37;
  }
  v22 = (unsigned int)v20;
  v23 = *(_DWORD *)(v20 + v14) - 64;
  if ( !v23 )
  {
    v26 = v22 + 40;
LABEL_32:
    if ( v26 <= v21 )
    {
      v17 = 1;
      if ( !*(_BYTE *)(v22 + v14 + 10) )
        goto LABEL_37;
      v16 = v22 + v14 + 24;
    }
LABEL_35:
    if ( v17 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v26 = v22 + 56;
    goto LABEL_32;
  }
  if ( v24 != 1 || v22 + 40 > v21 )
    goto LABEL_35;
  v25 = v22 + v14 + 32;
  if ( !*(_DWORD *)(v22 + v14 + 12) )
    v25 = v16;
  v16 = v25;
LABEL_37:
  v27 = 0;
  v28 = 0;
  if ( !v15 )
  {
    v29 = *(_DWORD *)(v14 + 56);
    v30 = 0LL;
    if ( v29 )
    {
      while ( 2 )
      {
        v31 = *(unsigned int *)(v14 + 4 * v30 + 120);
        if ( (unsigned int)v31 < 0x80 )
          goto LABEL_51;
        v32 = *(unsigned int *)(v14 + 16);
        if ( (unsigned int)v31 >= (unsigned int)v32 )
          goto LABEL_51;
        v33 = (unsigned int)v31;
        v34 = *(_DWORD *)(v31 + v14) - 64;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 == 1 && v33 + 40 <= v32 )
              goto LABEL_54;
LABEL_50:
            if ( v28 )
              goto LABEL_54;
LABEL_51:
            v30 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v30 >= v29 )
              goto LABEL_54;
            continue;
          }
          v36 = v33 + 56;
        }
        else
        {
          v36 = v33 + 40;
        }
        break;
      }
      if ( v36 <= v32 )
      {
        v27 = *(_BYTE *)(v33 + v14 + 10);
        v28 = 1;
      }
      goto LABEL_50;
    }
  }
LABEL_54:
  LbaFromCdb = PortSrbGetLbaFromCdb(v16, v27);
  if ( (unsigned int)RtlInterlockedSetClearRun(
                       v38 + 3296,
                       (unsigned int)((unsigned __int64)*(unsigned int *)(v38 + 812)
                                    * LbaFromCdb
                                    / *(_QWORD *)(v38 + 3264)),
                       1LL) == 1 )
    *(_BYTE *)(v6 + 22) &= ~0x40u;
LABEL_3:
  if ( (unsigned int)RiGetEnqueueReason(a1, v6, 0LL) )
    return 0LL;
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v10 = *(_QWORD **)(v6 + 8), *v10 != v6) )
LABEL_59:
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  ++*(_DWORD *)(a1 + 76);
  if ( (*(_BYTE *)(v6 + 22) & 6) != 0 )
    --*(_DWORD *)(a1 + 20);
  else
    --*(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v6 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 24);
  *(_BYTE *)(v6 + 20) = 0;
  v11 = *(_DWORD *)(a1 + 76);
  if ( v11 > *(_DWORD *)(a1 + 136) )
    *(_DWORD *)(a1 + 136) = v11;
  v12 = *(_BYTE *)(v6 + 22);
  if ( (v12 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 38) = 1;
    v12 = *(_BYTE *)(v6 + 22);
  }
  if ( (v12 & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v6, v7, v8);
    v40 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v41 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v41 == QosEntryForDeviceEntry )
      {
        *v41 = v40;
        *(_QWORD *)(v40 + 8) = v41;
        return v6;
      }
    }
    goto LABEL_59;
  }
  return v6;
}
