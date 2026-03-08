/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x140848F70
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140848F10 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x14093D160 (FsRtlNotifyReportChange.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x140294F20 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1407041D4 (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407A39B0 (RtlxOemStringToUnicodeSize.c)
 *     FsRtlNotifyUpdateBuffer @ 0x14093D1A8 (FsRtlNotifyUpdateBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  PSTRING v11; // r12
  PLIST_ENTRY v12; // r8
  USHORT v14; // dx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD **v16; // r15
  _QWORD *p_Flink; // r15
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  char v20; // r8
  char v21; // bl
  PSTRING v22; // r10
  USHORT v23; // cx
  __int16 v24; // ax
  const void **v25; // r9
  size_t v26; // rdx
  __int16 v27; // ax
  char *v28; // rcx
  bool v29; // zf
  unsigned __int8 (__fastcall *v30)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v31)(_QWORD, PVOID); // rax
  _BYTE *v32; // r13
  __int16 v33; // dx
  unsigned int v34; // r15d
  __int64 v35; // rcx
  __int16 v36; // dx
  char **p_Buffer; // rax
  char *Buffer; // r9
  int v39; // r8d
  int v40; // edx
  unsigned __int16 v41; // ax
  __int16 v42; // ax
  char v43; // r11
  int v44; // r8d
  int v45; // r9d
  unsigned int v46; // edx
  unsigned __int16 *v47; // r10
  unsigned __int16 *v48; // r10
  int v49; // r14d
  unsigned int v50; // r14d
  int v51; // r14d
  ULONG v52; // eax
  _DWORD *v53; // rbx
  unsigned int v54; // r12d
  __int64 v55; // rbx
  __int64 *v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // ebx
  __int64 Pool2; // rax
  char updated; // al
  __int16 v64; // ax
  char v65; // [rsp+40h] [rbp-128h]
  USHORT v66; // [rsp+44h] [rbp-124h]
  unsigned int Amount; // [rsp+4Ch] [rbp-11Ch]
  unsigned __int16 Amount_4; // [rsp+50h] [rbp-118h]
  unsigned __int16 Length; // [rsp+54h] [rbp-114h]
  int v71; // [rsp+58h] [rbp-110h]
  _QWORD *v72; // [rsp+70h] [rbp-F8h]
  STRING OemString; // [rsp+78h] [rbp-F0h] BYREF
  int v74; // [rsp+88h] [rbp-E0h]
  unsigned int *v75; // [rsp+90h] [rbp-D8h]
  __int64 v76; // [rsp+98h] [rbp-D0h]
  char *v77; // [rsp+A0h] [rbp-C8h]
  _DWORD *v78; // [rsp+A8h] [rbp-C0h]
  _BYTE *v79; // [rsp+B0h] [rbp-B8h]
  STRING v80; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+C8h] [rbp-A0h]
  unsigned int v82; // [rsp+CCh] [rbp-9Ch]
  __int64 v83; // [rsp+D0h] [rbp-98h]
  _QWORD *v84; // [rsp+D8h] [rbp-90h]
  _QWORD *v85; // [rsp+E0h] [rbp-88h]
  _QWORD *v86; // [rsp+E8h] [rbp-80h]
  __int128 v87; // [rsp+F0h] [rbp-78h] BYREF
  PSTRING v88; // [rsp+108h] [rbp-60h]
  __int64 v89; // [rsp+110h] [rbp-58h]
  _DWORD *v90; // [rsp+118h] [rbp-50h]
  _QWORD *v91; // [rsp+120h] [rbp-48h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v88 = v11;
  v14 = TargetNameOffset;
  v87 = 0LL;
  v76 = 0LL;
  *(_QWORD *)&v80.Length = 0LL;
  OemString = 0LL;
  v65 = 0;
  v74 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v77 = 0LL;
  v80.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = (struct _KTHREAD **)((char *)NotifySync + 56);
  v91 = (_QWORD *)((char *)NotifySync + 56);
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *v16 = CurrentThread;
    v14 = v10;
    v12 = NotifyList;
  }
  v90 = (_DWORD *)((char *)NotifySync + 64);
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v66 = v76;
  Amount_4 = v80.Length;
  Length = OemString.Length;
  while ( 1 )
  {
    v86 = p_Flink;
    v72 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v18 = (__int64)(p_Flink - 4);
    v84 = p_Flink - 4;
    v19 = p_Flink - 4;
    v85 = p_Flink - 4;
    if ( v11 )
    {
      if ( **(_WORD **)(v18 + 136) && (*(_DWORD *)(v18 + 76) & FilterMatch) != 0 )
      {
        v22 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v87 + 1) = v11->Buffer;
          v23 = v10;
          LOWORD(v87) = v10;
          v24 = *(unsigned __int8 *)(v18 + 144);
          if ( v14 != v24 )
          {
            v23 = v14 - v24;
            LOWORD(v87) = v14 - v24;
          }
          WORD1(v87) = v23;
          v22 = (PSTRING)&v87;
          NormalizedParentName = (PSTRING)&v87;
          v19 = p_Flink - 4;
        }
        v25 = *(const void ***)(v18 + 136);
        v26 = *(unsigned __int16 *)v25;
        if ( (unsigned __int16)v26 <= v22->Length )
        {
          if ( (_WORD)v26 == v22->Length )
          {
            v21 = 1;
            goto LABEL_26;
          }
          v27 = *(_WORD *)(v18 + 72);
          if ( (v27 & 1) != 0 )
          {
            if ( (v27 & 0x10) != 0
              || ((v28 = &v22->Buffer[*(unsigned __int16 *)v19[17]], *(_BYTE *)(v18 + 144) != 1)
                ? (v29 = *(_WORD *)v28 == 92)
                : (v29 = *v28 == 92),
                  v29) )
            {
              v21 = 0;
LABEL_26:
              if ( memcmp(v25[1], v22->Buffer, v26) )
                goto LABEL_128;
              if ( !v21 )
              {
                v30 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID, _QWORD))(v18 + 16);
                if ( v30 )
                {
                  if ( !v30(*(_QWORD *)(v18 + 8), TargetContext, *(_QWORD *)(v18 + 24)) )
                    goto LABEL_128;
                }
              }
              v31 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID))(v18 + 64);
              if ( v31 )
              {
                if ( FilterContext && !v31(*(_QWORD *)(v18 + 8), FilterContext) )
                  goto LABEL_128;
              }
              v20 = v65;
LABEL_35:
              v32 = (_BYTE *)(v18 + 72);
              v79 = (_BYTE *)(v18 + 72);
              v33 = *(_WORD *)(v18 + 72);
              if ( (v33 & 2) != 0 )
                goto LABEL_124;
              v34 = *(_DWORD *)(v18 + 96);
              Amount = v34;
              if ( !v34 )
                goto LABEL_123;
              v83 = 0LL;
              v75 = (unsigned int *)(v18 + 100);
              if ( *(_DWORD *)(v18 + 100) )
              {
                v34 = *(_DWORD *)(v18 + 100);
LABEL_41:
                Amount = v34;
              }
              else
              {
                v35 = *(_QWORD *)(v18 + 48);
                if ( v35 != v18 + 48 )
                {
                  v83 = v35 - 168;
                  v34 = *(_DWORD *)(*(_QWORD *)(v35 - 168 + 184) + 8LL);
                  goto LABEL_41;
                }
              }
              if ( v21 )
              {
                v41 = 0;
                Length = 0;
                OemString.Length = 0;
              }
              else if ( v20 )
              {
                v41 = Length;
              }
              else
              {
                v36 = v33 & 0x10;
                if ( v36 )
                {
                  p_Buffer = &v88->Buffer;
                }
                else
                {
                  p_Buffer = &v11->Buffer;
                  Buffer = NormalizedParentName->Buffer;
                  if ( Buffer == v11->Buffer )
                  {
                    v39 = **(unsigned __int16 **)(v18 + 136);
                    v40 = *(unsigned __int8 *)(v18 + 144);
                    OemString.Buffer = &Buffer[v40 + v39];
                    v41 = NormalizedParentName->Length - v40 - v39;
                    goto LABEL_70;
                  }
                }
                if ( v77 )
                {
                  v10 = v66;
                }
                else
                {
                  v77 = *p_Buffer;
                  v66 = v10;
                  LOWORD(v76) = v10;
                  v42 = *(unsigned __int8 *)(v18 + 144);
                  if ( TargetNameOffset != v42 )
                  {
                    v10 = TargetNameOffset - v42;
                    v66 = TargetNameOffset - v42;
                    LOWORD(v76) = TargetNameOffset - v42;
                  }
                  WORD1(v76) = v10;
                }
                v43 = 0;
                v44 = 0;
                if ( !v36 )
                {
                  v45 = 1;
                  v46 = 0;
                  if ( *(_BYTE *)(v18 + 144) == 1 )
                  {
                    while ( 1 )
                    {
                      v47 = *(unsigned __int16 **)(v18 + 136);
                      if ( v46 >= *v47 )
                        break;
                      if ( *(_BYTE *)(v46 + *((_QWORD *)v47 + 1)) == 92 )
                        ++v45;
                      ++v46;
                    }
                    while ( v77[v44] != 92 || (unsigned __int8)++v43 != v45 )
                      ++v44;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v48 = *(unsigned __int16 **)(v18 + 136);
                      if ( v46 >= *v48 >> 1 )
                        break;
                      if ( *(_WORD *)(*((_QWORD *)v48 + 1) + 2LL * v46) == 92 )
                        ++v45;
                      ++v46;
                    }
                    while ( *(_WORD *)&v77[2 * v44] != 92 || (unsigned __int8)++v43 != v45 )
                      ++v44;
                    v44 *= *(unsigned __int8 *)(v18 + 144);
                  }
                }
                v71 = v44 + *(unsigned __int8 *)(v18 + 144);
                OemString.Buffer = &v77[v71];
                v41 = v10 - v71;
LABEL_70:
                Length = v41;
                OemString.Length = v41;
                OemString.MaximumLength = v41;
              }
              v49 = 12;
              if ( v65 )
              {
                v50 = StreamName->Length + 12;
              }
              else
              {
                if ( !v21 )
                {
                  if ( *(_BYTE *)(v18 + 144) == 1 )
                    v51 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                  else
                    v51 = v41 + 12;
                  v49 = v51 + 2;
                }
                if ( v80.Buffer )
                {
                  LOWORD(v52) = Amount_4;
                }
                else
                {
                  v80.Buffer = &v11->Buffer[TargetNameOffset];
                  LOWORD(v52) = v11->Length - TargetNameOffset;
                  Amount_4 = v52;
                  v80.Length = v52;
                  v80.MaximumLength = v52;
                }
                if ( *(_BYTE *)(v18 + 144) == 1 )
                  v52 = RtlxOemStringToUnicodeSize(&v80) - 2;
                else
                  v52 = (unsigned __int16)v52;
                v50 = v52 + v49;
                if ( StreamName )
                {
                  if ( *(_BYTE *)(v18 + 144) == 2 )
                    v50 += StreamName->Length + 2;
                  else
                    v50 += RtlxOemStringToUnicodeSize(StreamName);
                }
              }
              v53 = (_DWORD *)(v18 + 104);
              v78 = (_DWORD *)(v18 + 104);
              v54 = (*(_DWORD *)(v18 + 104) + 3) & 0xFFFFFFFC;
              v81 = v54;
              if ( v50 <= v34 )
              {
                v82 = v54 + v50;
                if ( v54 + v50 <= v34 )
                {
                  v55 = 0LL;
                  v56 = (__int64 *)(v18 + 88);
                  v89 = v18 + 88;
                  v57 = *(_QWORD *)(v18 + 88);
                  if ( v57 )
                  {
                    *(_DWORD *)(v57 + *(unsigned int *)(v18 + 108)) = v54 - *(_DWORD *)(v18 + 108);
                    *(_DWORD *)(v18 + 108) = v54;
                    v55 = *v56 + v54;
                    goto LABEL_104;
                  }
                  if ( !v83 )
                    goto LABEL_104;
                  v58 = *(_QWORD *)(v83 + 24);
                  if ( v58 )
                  {
                    v55 = *(_QWORD *)(v83 + 24);
                    *v56 = v58;
                    goto LABEL_100;
                  }
                  v60 = *(_QWORD *)(v83 + 8);
                  if ( v60 )
                  {
                    if ( (*(_BYTE *)(v60 + 10) & 5) != 0 )
                      v55 = *(_QWORD *)(v60 + 24);
                    else
                      v55 = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v60, 0, MmCached, 0LL, 0, 0x40000010u);
                    *v56 = v55;
LABEL_100:
                    v59 = Amount;
                    *v75 = Amount;
                  }
                  else
                  {
LABEL_104:
                    v59 = Amount;
                  }
                  if ( !*v56 )
                  {
                    v61 = v59;
                    PsChargePoolQuota(*(PEPROCESS *)(v18 + 120), PagedPool, v59);
                    Pool2 = ExAllocatePool2(290LL, v61, 1316115270LL);
                    *v56 = Pool2;
                    *(_QWORD *)(v18 + 80) = Pool2;
                    *v75 = Amount;
                    v55 = *v56;
                  }
                  if ( !v55 )
                  {
                    v53 = v78;
                    v32 = v79;
                    goto LABEL_117;
                  }
                  if ( v54 > *v78 )
                    memset((void *)(*v56 + (unsigned int)*v78), 0, v54 - *v78);
                  updated = FsRtlNotifyUpdateBuffer(
                              v55,
                              Action,
                              (unsigned int)&OemString,
                              (unsigned int)&v80,
                              (__int64)StreamName,
                              *(_BYTE *)(v18 + 144) == 2,
                              v50);
                  v53 = v78;
                  if ( updated )
                  {
                    *v78 = v54 + v50;
                    v32 = v79;
LABEL_117:
                    if ( (*v32 & 2) != 0 && *v56 )
                    {
                      if ( *(_QWORD *)(v18 + 80) )
                      {
                        PsReturnProcessPagedPoolQuota(*(struct _KPROCESS **)(v18 + 120), *v75);
                        ExFreePoolWithTag(*(PVOID *)(v18 + 80), 0);
                      }
                      *v56 = 0LL;
                      *(_QWORD *)(v18 + 80) = 0LL;
                      *(_DWORD *)(v18 + 108) = 0;
                      *v53 = 0;
                      *v75 = 0;
                    }
                    v10 = TargetNameOffset;
                    v11 = FullTargetName;
LABEL_123:
                    p_Flink = v72;
LABEL_124:
                    v64 = *((_WORD *)v85 + 36);
                    if ( Action == 4 )
                    {
                      *((_WORD *)v85 + 36) = v64 | 8;
                    }
                    else
                    {
                      *((_WORD *)v85 + 36) = v64 & 0xFFF7;
                      if ( *(_QWORD *)(v18 + 48) != v18 + 48 )
                        FsRtlNotifyCompleteIrpList(v18, 0);
                    }
LABEL_128:
                    v12 = NotifyList;
                    goto LABEL_129;
                  }
                  v32 = v79;
LABEL_116:
                  *(_WORD *)v32 |= 2u;
                  goto LABEL_117;
                }
                v32 = v79;
              }
              v56 = (__int64 *)(v18 + 88);
              goto LABEL_116;
            }
          }
        }
      }
    }
    else if ( TargetContext == *(PVOID *)(v18 + 24) )
    {
      OemString.Buffer = 0LL;
      Length = 0;
      OemString.Length = 0;
      v20 = 1;
      v65 = 1;
      v21 = 0;
      goto LABEL_35;
    }
LABEL_129:
    p_Flink = (_QWORD *)*p_Flink;
    v14 = TargetNameOffset;
  }
  v29 = (*v90)-- == 1;
  if ( v29 )
  {
    *v91 = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
