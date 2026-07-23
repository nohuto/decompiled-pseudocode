/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406746F0
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x14088D730 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x14088D790 (FsRtlNotifyReportChange.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140298A90 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x140303000 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14031B530 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406758E8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140676004 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x140760510 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r10
  USHORT v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // r12
  _LIST_ENTRY *v16; // rsi
  _LIST_ENTRY *v17; // r11
  char v18; // dl
  char v19; // r15
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v21; // cx
  struct _LIST_ENTRY *v22; // rdx
  PSTRING v23; // r11
  USHORT v24; // cx
  __int16 Flink_low; // ax
  __int16 v26; // ax
  char *v27; // rax
  bool v28; // zf
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  __int16 v31; // r8
  ULONG Flink_high; // r12d
  _LIST_ENTRY *v33; // rcx
  __int16 v34; // r8
  char *v35; // r9
  int v36; // r8d
  int v37; // edx
  unsigned __int16 v38; // ax
  USHORT v39; // cx
  __int16 v40; // ax
  char v41; // r9
  int v42; // edx
  int v43; // r10d
  unsigned int v44; // r8d
  int v45; // ebx
  struct _LIST_ENTRY *v46; // r11
  char *v47; // r8
  int v48; // r14d
  ULONG v49; // r14d
  int v50; // r14d
  ULONG v51; // eax
  ULONG v52; // r15d
  NTSTATUS v53; // eax
  struct _LIST_ENTRY *v54; // rbx
  struct _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY *v56; // rax
  struct _LIST_ENTRY *v57; // rcx
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int64 Blink_low; // rcx
  _LIST_ENTRY *v60; // rbx
  __int16 v61; // ax
  __int16 v62; // ax
  char v63; // [rsp+40h] [rbp-F8h]
  USHORT v64; // [rsp+42h] [rbp-F6h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v67; // [rsp+50h] [rbp-E8h]
  int v68; // [rsp+54h] [rbp-E4h]
  _LIST_ENTRY *v69; // [rsp+70h] [rbp-C8h]
  _LIST_ENTRY *v70; // [rsp+78h] [rbp-C0h]
  OEM_STRING OemString; // [rsp+80h] [rbp-B8h] BYREF
  ULONG pulResult[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+98h] [rbp-A0h]
  char *Buffer; // [rsp+A0h] [rbp-98h]
  OEM_STRING v75; // [rsp+A8h] [rbp-90h] BYREF
  ULONG v76; // [rsp+B8h] [rbp-80h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v78; // [rsp+C8h] [rbp-70h]
  _LIST_ENTRY *v79; // [rsp+D0h] [rbp-68h]
  __int128 v80; // [rsp+D8h] [rbp-60h] BYREF
  NTSTATUS v81; // [rsp+E8h] [rbp-50h]
  _LIST_ENTRY *v82; // [rsp+148h] [rbp+10h]

  v82 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v13 = TargetNameOffset;
  v80 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v75.Length = 0LL;
  OemString = 0LL;
  v63 = 0;
  pulResult[1] = 0;
  pulResult[0] = 0;
  if ( !TargetNameOffset && v11 )
    return;
  Buffer = 0LL;
  v75.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v11 = FullTargetName;
    v13 = v10;
    NotifyList = v82;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v64 = v73;
  Length = v75.Length;
  v67 = OemString.Length;
  while ( 1 )
  {
    v79 = Flink;
    v70 = Flink;
    if ( Flink == NotifyList )
      break;
    v16 = Flink - 2;
    v78 = Flink - 2;
    v17 = Flink - 2;
    v69 = Flink - 2;
    if ( v11 )
    {
      Blink = v16[8].Blink;
      v21 = (unsigned __int16)Blink->Flink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v16[4].Blink) & FilterMatch) != 0 )
      {
        v22 = v16[8].Blink;
        v23 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v80 + 1) = v11->Buffer;
          v24 = v10;
          LOWORD(v80) = v10;
          Flink_low = LOBYTE(v16[9].Flink);
          if ( v13 != Flink_low )
          {
            v24 = v13 - Flink_low;
            LOWORD(v80) = v13 - Flink_low;
          }
          WORD1(v80) = v24;
          v23 = (PSTRING)&v80;
          NormalizedParentName = (PSTRING)&v80;
          Blink = v16[8].Blink;
          v22 = Blink;
          v21 = (unsigned __int16)Blink->Flink;
        }
        if ( v21 > v23->Length )
          goto LABEL_133;
        if ( v21 == v23->Length )
        {
          v19 = 1;
          goto LABEL_27;
        }
        v26 = (__int16)v16[4].Blink;
        if ( (v26 & 1) != 0 )
        {
          if ( (v26 & 0x10) != 0
            || ((v27 = &v23->Buffer[LOWORD(v22->Flink)], LOBYTE(v16[9].Flink) != 1)
              ? (v28 = *(_WORD *)v27 == 92)
              : (v28 = *v27 == 92),
                v28) )
          {
            v19 = 0;
LABEL_27:
            if ( !memcmp(Blink->Blink, v23->Buffer, v21)
              && (v19
               || (v29 = v16[1].Flink) == 0LL
               || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v29)(
                    v16->Blink,
                    TargetContext,
                    v16[1].Blink)) )
            {
              v30 = v16[4].Flink;
              if ( !v30
                || !FilterContext
                || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v30)(v16->Blink, FilterContext) )
              {
                v17 = Flink - 2;
                v11 = FullTargetName;
                v18 = v63;
LABEL_37:
                v31 = (__int16)v16[4].Blink;
                if ( (v31 & 2) != 0 )
                {
                  v60 = Flink - 2;
                }
                else
                {
                  Flink_high = (ULONG)v16[6].Flink;
                  if ( Flink_high )
                  {
                    p_Blink = 0LL;
                    if ( HIDWORD(v16[6].Flink) )
                    {
                      Flink_high = HIDWORD(v16[6].Flink);
                    }
                    else
                    {
                      v33 = v16[3].Flink;
                      if ( v33 != &v16[3] )
                      {
                        p_Blink = &v33[-11].Blink;
                        Flink_high = (ULONG)v33[1].Flink->Blink;
                      }
                    }
                    if ( v19 )
                    {
                      v38 = 0;
                      v67 = 0;
                      OemString.Length = 0;
                    }
                    else if ( v18 )
                    {
                      v38 = v67;
                    }
                    else
                    {
                      v34 = v31 & 0x10;
                      if ( v34 || (v35 = NormalizedParentName->Buffer, v35 != v11->Buffer) )
                      {
                        if ( Buffer )
                        {
                          v39 = v64;
                        }
                        else
                        {
                          Buffer = v11->Buffer;
                          v39 = v10;
                          v64 = v10;
                          LOWORD(v73) = v10;
                          v40 = LOBYTE(v16[9].Flink);
                          if ( TargetNameOffset != v40 )
                          {
                            v39 = TargetNameOffset - v40;
                            v64 = TargetNameOffset - v40;
                            LOWORD(v73) = TargetNameOffset - v40;
                          }
                          WORD1(v73) = v39;
                        }
                        v41 = 0;
                        v42 = 0;
                        if ( v34 )
                        {
                          v47 = Buffer;
                        }
                        else
                        {
                          v43 = 1;
                          v44 = 0;
                          v45 = LOBYTE(v16[9].Flink);
                          v46 = v17[8].Blink;
                          if ( (_BYTE)v45 == 1 )
                          {
                            while ( v44 < LOWORD(v46->Flink) )
                            {
                              if ( *((_BYTE *)&v46->Blink->Flink + v44) == 92 )
                                ++v43;
                              ++v44;
                            }
                            v47 = Buffer;
                            while ( Buffer[v42] != 92 || (unsigned __int8)++v41 != v43 )
                              ++v42;
                          }
                          else
                          {
                            while ( v44 < LOWORD(v46->Flink) >> 1 )
                            {
                              if ( *((_WORD *)&v46->Blink->Flink + v44) == 92 )
                                ++v43;
                              ++v44;
                            }
                            v47 = Buffer;
                            while ( *(_WORD *)&Buffer[2 * v42] != 92 || (unsigned __int8)++v41 != v43 )
                              ++v42;
                            v42 *= v45;
                          }
                          v39 = v64;
                        }
                        v68 = LOBYTE(v16[9].Flink) + v42;
                        OemString.Buffer = &v47[v68];
                        v38 = v39 - v68;
                      }
                      else
                      {
                        v36 = (int)v16[8].Blink->Flink;
                        v37 = LOBYTE(v16[9].Flink);
                        OemString.Buffer = &v35[v37 + v36];
                        v38 = NormalizedParentName->Length - v37 - v36;
                      }
                      v67 = v38;
                      OemString.Length = v38;
                      OemString.MaximumLength = v38;
                    }
                    v48 = 12;
                    if ( v63 )
                    {
                      v49 = StreamName->Length + 12;
                    }
                    else
                    {
                      if ( !v19 )
                      {
                        if ( LOBYTE(v16[9].Flink) == 1 )
                          v50 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                        else
                          v50 = v38 + 12;
                        v48 = v50 + 2;
                      }
                      if ( v75.Buffer )
                      {
                        LOWORD(v51) = Length;
                      }
                      else
                      {
                        v75.Buffer = &FullTargetName->Buffer[TargetNameOffset];
                        LOWORD(v51) = FullTargetName->Length - TargetNameOffset;
                        Length = v51;
                        v75.Length = v51;
                        v75.MaximumLength = v51;
                      }
                      if ( LOBYTE(v16[9].Flink) == 1 )
                        v51 = RtlxOemStringToUnicodeSize(&v75) - 2;
                      else
                        v51 = (unsigned __int16)v51;
                      v49 = v51 + v48;
                      if ( StreamName )
                      {
                        if ( LOBYTE(v16[9].Flink) == 2 )
                          v49 += StreamName->Length + 2;
                        else
                          v49 += RtlxOemStringToUnicodeSize(StreamName);
                      }
                    }
                    v52 = (LODWORD(v16[6].Blink) + 3) & 0xFFFFFFFC;
                    v76 = v52;
                    v53 = RtlULongAdd(v52, v49, pulResult);
                    v81 = v53;
                    if ( v49 > Flink_high || v53 || pulResult[0] > Flink_high )
                    {
                      LOWORD(v16[4].Blink) |= 2u;
                      v61 = (__int16)v16[4].Blink;
                      v60 = v16;
                    }
                    else
                    {
                      v54 = 0LL;
                      v55 = v16[5].Blink;
                      if ( v55 )
                      {
                        *(_DWORD *)((char *)&v55->Flink + HIDWORD(v16[6].Blink)) = v52 - HIDWORD(v16[6].Blink);
                        HIDWORD(v16[6].Blink) = v52;
                        v54 = (struct _LIST_ENTRY *)((char *)v16[5].Blink + v52);
                        goto LABEL_109;
                      }
                      if ( p_Blink )
                      {
                        v56 = p_Blink[3];
                        if ( v56 )
                        {
                          v54 = p_Blink[3];
                          v16[5].Blink = v56;
                          goto LABEL_108;
                        }
                        v57 = p_Blink[1];
                        if ( v57 )
                        {
                          if ( (BYTE2(v57->Blink) & 5) != 0 )
                            v54 = v57[1].Blink;
                          else
                            v54 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                          (PMDL)v57,
                                                          0,
                                                          MmCached,
                                                          0LL,
                                                          0,
                                                          0x40000010u);
                          v16[5].Blink = v54;
LABEL_108:
                          HIDWORD(v16[6].Flink) = Flink_high;
                        }
                      }
LABEL_109:
                      if ( !v16[5].Blink )
                      {
                        PsChargePoolQuota((PEPROCESS)v16[7].Blink, PagedPool, Flink_high);
                        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                                              (POOL_TYPE)17,
                                                              Flink_high,
                                                              0x4E725346u);
                        v16[5].Blink = PoolWithTag;
                        v16[5].Flink = PoolWithTag;
                        HIDWORD(v16[6].Flink) = Flink_high;
                        v54 = v16[5].Blink;
                      }
                      if ( v54 )
                      {
                        Blink_low = LODWORD(v16[6].Blink);
                        if ( v52 > (unsigned int)Blink_low )
                          memset((char *)v16[5].Blink + Blink_low, 0, v52 - (unsigned int)Blink_low);
                        if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                                (_DWORD)v54,
                                                Action,
                                                (unsigned int)&OemString,
                                                (unsigned int)&v75,
                                                (__int64)StreamName,
                                                LOBYTE(v16[9].Flink) == 2,
                                                v49) )
                          LODWORD(v16[6].Blink) = v52 + v49;
                        else
                          LOWORD(v16[4].Blink) |= 2u;
                      }
                      v60 = v69;
                      v61 = (__int16)v69[4].Blink;
                    }
                    if ( (v61 & 2) != 0 && v16[5].Blink )
                    {
                      if ( v16[5].Flink )
                      {
                        PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v16[7].Blink, HIDWORD(v16[6].Flink));
                        ExFreePoolWithTag(v16[5].Flink, 0);
                      }
                      v16[5].Blink = 0LL;
                      v16[5].Flink = 0LL;
                      v16[6].Blink = 0LL;
                      HIDWORD(v16[6].Flink) = 0;
                    }
                    v10 = TargetNameOffset;
                  }
                  else
                  {
                    v60 = v16;
                  }
                  Flink = v70;
                }
                v62 = (__int16)v60[4].Blink;
                if ( Action == 4 )
                {
                  LOWORD(v60[4].Blink) = v62 | 8;
                }
                else
                {
                  LOWORD(v60[4].Blink) = v62 & 0xFFF7;
                  if ( v16[3].Flink != &v16[3] )
                    FsRtlNotifyCompleteIrpList(v16, 0LL);
                }
              }
            }
            v11 = FullTargetName;
          }
        }
LABEL_133:
        NotifyList = v82;
      }
    }
    else if ( TargetContext == v16[1].Blink )
    {
      OemString.Buffer = 0LL;
      v67 = 0;
      OemString.Length = 0;
      v18 = 1;
      v63 = 1;
      v19 = 0;
      goto LABEL_37;
    }
    Flink = Flink->Flink;
    v13 = TargetNameOffset;
  }
  v28 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v28 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
