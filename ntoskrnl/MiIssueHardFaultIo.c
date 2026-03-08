/*
 * XREFs of MiIssueHardFaultIo @ 0x1403435F0
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x1402F6158 (MiPfCoalesceAndIssueIOs.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiPfIssueCoalesceCandidates @ 0x14062F8D4 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     SmPageRead @ 0x1405C76E0 (SmPageRead.c)
 *     MiCopyImageExtentContents @ 0x14063A258 (MiCopyImageExtentContents.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v7; // rdx
  __int64 v8; // rdx
  ULONG_PTR v9; // rdx
  int v10; // esi
  char v11; // bl
  _KPROCESS *Process; // rdx
  signed __int32 v13; // eax
  struct _KEVENT *v14; // rsi
  NTSTATUS *v15; // r14
  NTSTATUS v16; // eax
  unsigned int v17; // ebx
  _QWORD *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _MDL *v23; // rcx
  signed __int32 v24; // ett
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r9

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 0x100) != 0 )
  {
    v25 = a1 + 272;
    v26 = (a1 + 272) | 1;
    if ( (v3 & 8) == 0 )
      v26 = v25;
    v27 = v26;
    if ( (a3 & 1) != 0 )
    {
      v28 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v28 == 1 && (*(_DWORD *)(v28 + 80) & 0x800) != 0 )
        v27 = v26 | 2;
    }
    v14 = (struct _KEVENT *)(a1 + 32);
    v15 = (NTSTATUS *)(a1 + 80);
    v16 = SmPageRead(
            *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(*(_QWORD *)(a1 + 248) + 40LL) >> 43) & 0x3FFLL))
                      + 200LL),
            a1 + 96,
            v27,
            a1 + 32,
            a1 + 80);
LABEL_18:
    v17 = v16;
    if ( v16 < 0 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      *v15 = v16;
      KeSetEvent(v14, 0, 0);
    }
    return v17;
  }
  if ( a2 )
  {
    v19 = *(_QWORD **)(a1 + 208);
    if ( (*(_BYTE *)(*v19 + 62LL) & 0xC) != 8 )
    {
LABEL_9:
      v10 = (v3 >> 1) & 4 | 1;
      if ( (v3 & 0x40000) == 0 )
        v10 = (v3 >> 1) & 4;
      if ( (v3 & 8) != 0 )
      {
        v11 = v10 | 2;
      }
      else
      {
        v11 = v10;
        if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) == 8 )
          v11 = v10 | 2;
        Process = KeGetCurrentThread()->Process;
        v13 = Process[2].Affinity.StaticBitmap[3];
        while ( v13 )
        {
          v24 = v13;
          v13 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&Process[2].Affinity.StaticBitmap[3],
                  v13 - 1,
                  v13);
          if ( v24 == v13 )
          {
            v11 |= 8u;
            break;
          }
        }
      }
      v14 = (struct _KEVENT *)(a1 + 32);
      v15 = (NTSTATUS *)(a1 + 80);
      v16 = IoPageReadEx(
              *(PFILE_OBJECT *)(a1 + 200),
              (struct _MDL *)(a1 + 272),
              (_QWORD *)(a1 + 96),
              (struct _KEVENT *)(a1 + 32),
              (struct _IO_STATUS_BLOCK *)(a1 + 80),
              v11,
              0LL);
      goto LABEL_18;
    }
    v20 = a1 + 272;
    if ( *(_QWORD *)(a1 + 256) )
      v20 = *(_QWORD *)(a1 + 256);
    MiCopyImageExtentContents(a1, v20, *v19, a3);
    v21 = *(unsigned int *)(v20 + 40);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = v21;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 248);
    if ( *(__int64 *)(v7 + 40) >= 0 )
      goto LABEL_9;
    v8 = *(_QWORD *)(v7 + 16);
    if ( (v8 & 0x400) == 0 )
      goto LABEL_9;
    if ( qword_140C657C0 && (v8 & 0x10) == 0 )
      v8 &= ~qword_140C657C0;
    v9 = v8 >> 16;
    if ( (*(_BYTE *)(*(_QWORD *)v9 + 62LL) & 0xC) != 8 )
      goto LABEL_9;
    v22 = *(_QWORD *)(a1 + 256);
    v23 = (struct _MDL *)(a1 + 272);
    if ( v22 )
      v23 = *(struct _MDL **)(a1 + 256);
    MiTransferFileExtent(v23, v9, a1 + 80);
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return *(unsigned int *)(a1 + 80);
  }
}
