/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040970
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800408E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180040A58 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040AD8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040B44 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004577C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180063330 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x18006C35C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(
        struct _RM_CPU_SET_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r12d
  struct _RM_OBJECT_HEADER *Next; // rax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // r11
  _QWORD *v16; // r9
  __int16 v17; // dx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  char *v24; // [rsp+40h] [rbp-20h] BYREF
  __int16 v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h] BYREF

  if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(a1, a2, a3, a4) )
  {
    memset_0((char *)a1 + 568, 0, 0x140uLL);
    v5 = 0;
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v24);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v24);
      if ( !Next )
        break;
      v13 = *((_DWORD *)Next + 67);
      if ( v13 )
      {
        v26 = v13 | v5;
        do
        {
          _BitScanForward((unsigned int *)&v14, v13);
          v15 = 20LL;
          v16 = (_QWORD *)((char *)a1 + 160 * v14 + 568);
          do
          {
            *v16 |= *(_QWORD *)((char *)v16 + (struct _RM_OBJECT_HEADER *)((char *)Next - 160 * v14) - a1 - 464);
            ++v16;
            --v15;
          }
          while ( v15 );
          v13 &= ~(1 << v14);
        }
        while ( v13 );
        v5 = v26;
      }
      RmpObjectRelease((char *)Next);
    }
    RtlReleaseSRWLockShared(v24 + 16);
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v8 )
      {
        if ( _bittest(&v5, v8) )
        {
          v9 = RmpSystemSetWorkloadAllowedCpuSets((char *)a1 + 160 * v8 + 568, v7);
          if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
          {
            v24 = (char *)a1 + 160 * v8 + 568;
            v25 = v17 + 19;
            v26 = v7;
            v27 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
              v18,
              (unsigned int)&unk_18009C639,
              v19,
              v20,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v24);
          }
        }
        else
        {
          v9 = RmpSystemSetWorkloadAllowedCpuSets(0LL, v7);
          if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
          {
            v26 = v7;
            v27 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v10,
              (unsigned int)&unk_18009C684,
              v11,
              v12,
              (__int64)&v27,
              (__int64)&v26);
          }
        }
        if ( v9 < 0 && (unsigned int)dword_1800B31E0 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
          {
            v26 = v7;
            v27 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v21,
              (unsigned int)&unk_18009C6CB,
              v22,
              v23,
              (__int64)&v27,
              (__int64)&v26);
          }
        }
      }
      v7 = v8 + 1;
      v8 = v7;
    }
    while ( v7 < 2 );
  }
}
