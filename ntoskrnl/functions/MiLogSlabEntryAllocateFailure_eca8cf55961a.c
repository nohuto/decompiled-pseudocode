void __fastcall MiLogSlabEntryAllocateFailure(__int64 a1, int a2, int a3, int a4, char a5)
{
  unsigned __int16 *v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r10
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  int v17; // r9d
  int v18; // r11d
  unsigned __int8 AggregateFieldTypes; // al
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+ACh] [rbp-54h]
  __int64 *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  int *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  int *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  int *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  char *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]

  v26 = a3;
  v27 = a2;
  if ( !*(_QWORD *)&qword_140C69568 )
    return;
  v7 = *(unsigned __int16 **)(a1 + 24);
  v8 = *(unsigned int *)(a1 + 84);
  v9 = (_QWORD *)(*((_QWORD *)v7 + 2) + 25408 * v8);
  v10 = v9[2854];
  if ( v7 != MiSystemPartition )
    goto LABEL_11;
  v11 = *((_QWORD *)&xmmword_140C67050 + v8);
  if ( v10 > v11 )
  {
    v10 -= v11;
LABEL_11:
    if ( v10 )
      MiNodeAvailablePages(v9);
    goto LABEL_5;
  }
  v10 = 0LL;
LABEL_5:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v14) = 4;
    else
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  v15 = *(_QWORD *)&qword_140C69568;
  if ( **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
    {
      v35 = 1LL;
      v42 = &v35;
      v26 = *(_DWORD *)(a1 + 80);
      v44 = &v26;
      v28 = *(_DWORD *)(a1 + 84);
      v46 = &v28;
      v29 = *v7;
      v48 = &v29;
      v50 = &v27;
      v52 = &v30;
      v54 = (__int64 *)&v36;
      v56 = &v31;
      v58 = &v32;
      v25 = a5;
      v60 = &v25;
      v62 = &v37;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v15 + 8);
      v43 = 8LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v30 = v17;
      v53 = 4LL;
      v36 = v10;
      v55 = 8LL;
      v31 = v18;
      v57 = 4LL;
      v32 = a4;
      v59 = 4LL;
      v61 = 1LL;
      v37 = 0x1000000LL;
      v63 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = v16;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_140039450;
      UserData.Reserved = 2;
      v40 = 212;
      v41 = 1;
      v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v15 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
        if ( AggregateFieldTypes )
          InsertEventEntryInLookUpTable(
            v15,
            (__int128 *)&EventDescriptor,
            0xDu,
            (__int64)&UserData,
            AggregateFieldTypes);
        else
          EtwWriteEx(*(_QWORD *)(v15 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
}
