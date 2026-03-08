/*
 * XREFs of MiLogPeriodicTelemetry @ 0x140360374
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x14035F37C (ExtractAggregateFieldTypes.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     MiEnumerateSlabAllocators @ 0x140360F88 (MiEnumerateSlabAllocators.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLogPeriodicTelemetry(unsigned __int16 *a1)
{
  __int64 result; // rax
  __int64 UnbiasedInterruptTime; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r9
  ULONG v15; // r10d
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  ULONG v21; // r10d
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v32; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v49; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  char *v51; // [rsp+118h] [rbp+10h]
  int v52; // [rsp+120h] [rbp+18h]
  int v53; // [rsp+124h] [rbp+1Ch]
  __int64 *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  __int64 *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+158h] [rbp+50h] BYREF
  __int16 *v61; // [rsp+168h] [rbp+60h]
  int v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+174h] [rbp+6Ch]
  __int64 *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  __int64 *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1A8h] [rbp+A0h] BYREF
  char *v71; // [rsp+1B8h] [rbp+B0h]
  int v72; // [rsp+1C0h] [rbp+B8h]
  int v73; // [rsp+1C4h] [rbp+BCh]
  __int64 *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  __int64 *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  __int64 *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  __int64 *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  __int64 *v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  __int64 *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  __int64 *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  __int64 *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  __int64 *v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  __int64 *v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  __int64 *v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  int *v96; // [rsp+278h] [rbp+170h]
  __int64 v97; // [rsp+280h] [rbp+178h]
  __int64 *v98; // [rsp+288h] [rbp+180h]
  __int64 v99; // [rsp+290h] [rbp+188h]
  _UNKNOWN *retaddr; // [rsp+2D0h] [rbp+1C8h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    result = 6000000000LL;
    if ( (unsigned __int64)(UnbiasedInterruptTime - *((_QWORD *)a1 + 2126)) >= 0x165A0BC00LL )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v11) = 4;
        else
          v11 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v11;
      }
      v5 = 0x400000000400LL;
      if ( *((_DWORD *)a1 + 4229) )
      {
        v12 = *(_QWORD *)&qword_140C69568;
        if ( **(_DWORD **)&qword_140C69568 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
          {
            v34 = v14;
            v54 = &v34;
            v28 = *a1;
            v56 = &v28;
            v58 = &v35;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = *(_QWORD *)(v12 + 8);
            v55 = 8LL;
            v57 = 4LL;
            v35 = 0x1000000LL;
            v59 = 8LL;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = v5;
            UserData.Size = *(unsigned __int16 *)UserData.Ptr;
            v51 = byte_140039B29;
            UserData.Reserved = v15;
            v52 = 94;
            v53 = 1;
            if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v12 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              AggregateFieldTypes = ExtractAggregateFieldTypes(v13, (__int64)&UserData);
              if ( AggregateFieldTypes )
                InsertEventEntryInLookUpTable(
                  v12,
                  (__int128 *)&EventDescriptor,
                  5u,
                  (__int64)&UserData,
                  AggregateFieldTypes);
              else
                EtwWriteEx(*(_QWORD *)(v12 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v5 = 0x400000000400LL;
            }
          }
        }
      }
      if ( *((_QWORD *)a1 + 2032) )
      {
        v17 = *(_QWORD *)&qword_140C69568;
        if ( **(_DWORD **)&qword_140C69568 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, v5) )
          {
            v36 = v20;
            v64 = &v36;
            v29 = *a1;
            v66 = &v29;
            v68 = &v37;
            *(_DWORD *)&v32.Level = 5;
            v60.Ptr = *(_QWORD *)(v17 + 8);
            v65 = 8LL;
            v67 = 4LL;
            v37 = 0x1000000LL;
            v69 = 8LL;
            *(_DWORD *)&v32.Id = 184549376;
            v32.Keyword = v18;
            v60.Size = *(unsigned __int16 *)v60.Ptr;
            v61 = &word_140039AC6;
            v60.Reserved = v21;
            v62 = 87;
            v63 = 1;
            if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v17 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              v22 = ExtractAggregateFieldTypes(v19, (__int64)&v60);
              if ( v22 )
                InsertEventEntryInLookUpTable(v17, (__int128 *)&v32, 5u, (__int64)&v60, v22);
              else
                EtwWriteEx(*(_QWORD *)(v17 + 32), &v32, 0LL, 0, 0LL, 0LL, 5u, &v60);
            }
          }
        }
      }
      v6 = *(_QWORD *)&qword_140C69568;
      if ( **(_DWORD **)&qword_140C69568 > 5u )
      {
        if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
        {
          v38 = *((_QWORD *)a1 + 2034);
          v74 = &v38;
          v39 = *((_QWORD *)a1 + 2035);
          v76 = &v39;
          v40 = *((_QWORD *)a1 + 2036);
          v78 = &v40;
          v41 = *((_QWORD *)a1 + 2037);
          v80 = &v41;
          v42 = *((_QWORD *)a1 + 2038);
          v82 = &v42;
          v43 = *((_QWORD *)a1 + 2039);
          v84 = &v43;
          v44 = *((unsigned int *)a1 + 4080);
          v86 = &v44;
          v45 = *((unsigned int *)a1 + 4081);
          v88 = &v45;
          v46 = *((unsigned int *)a1 + 4082);
          v90 = &v46;
          v47 = *((unsigned int *)a1 + 4083);
          v92 = &v47;
          v48 = *((_QWORD *)a1 + 2042);
          v94 = &v48;
          v30 = *a1;
          v96 = &v30;
          v98 = &v49;
          *(_DWORD *)&v33.Level = 5;
          v70.Ptr = *(_QWORD *)(v6 + 8);
          v75 = 8LL;
          v77 = 8LL;
          v79 = 8LL;
          v81 = 8LL;
          v83 = 8LL;
          v85 = 8LL;
          v87 = 8LL;
          v89 = 8LL;
          v91 = 8LL;
          v93 = 8LL;
          v95 = 8LL;
          v97 = 4LL;
          v49 = 0x1000000LL;
          v99 = 8LL;
          *(_DWORD *)&v33.Id = 184549376;
          v33.Keyword = v7;
          v70.Size = *(unsigned __int16 *)v70.Ptr;
          v71 = byte_1400398FB;
          v70.Reserved = 2;
          v72 = 447;
          v73 = 1;
          if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v6 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            v9 = ExtractAggregateFieldTypes(v8, (__int64)&v70);
            if ( v9 )
              InsertEventEntryInLookUpTable(v6, (__int128 *)&v33, 0xFu, (__int64)&v70, v9);
            else
              EtwWriteEx(*(_QWORD *)(v6 + 32), &v33, 0LL, 0, 0LL, 0LL, 0xFu, &v70);
          }
        }
      }
      MiEnumerateSlabAllocators(a1, MiLogPeriodicTelemetryForSlabAllocator, 0LL, 0xFFFFFFFFLL);
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      *((_QWORD *)a1 + 2126) = UnbiasedInterruptTime;
    }
  }
  return result;
}
