/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000FE38 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800108A0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180015250 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016CE0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FD90 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18001E010 (RmpActivityImportanceMergeVectors.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800375A0 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@5554444444444@Z @ 0x18006B3F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U3@U3@U3@.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2, __int64 a3, int a4)
{
  unsigned int v5; // edi
  DWORD v6; // r15d
  _QWORD *Value; // rbx
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  int v11; // eax
  int v12; // r8d
  char *v13; // rdx
  char *v14; // rcx
  char *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // [rsp+B8h] [rbp-80h] BYREF
  int v20; // [rsp+BCh] [rbp-7Ch] BYREF
  int v21; // [rsp+C0h] [rbp-78h] BYREF
  int v22; // [rsp+C4h] [rbp-74h] BYREF
  int v23; // [rsp+C8h] [rbp-70h] BYREF
  int v24; // [rsp+CCh] [rbp-6Ch] BYREF
  int v25; // [rsp+D0h] [rbp-68h] BYREF
  int v26; // [rsp+D4h] [rbp-64h] BYREF
  int v27; // [rsp+D8h] [rbp-60h] BYREF
  int v28; // [rsp+DCh] [rbp-5Ch] BYREF
  int v29; // [rsp+E0h] [rbp-58h] BYREF
  int v30; // [rsp+E4h] [rbp-54h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-50h] BYREF
  __int16 v32; // [rsp+138h] [rbp+0h] BYREF
  int v33; // [rsp+140h] [rbp+8h] BYREF
  __int16 v34; // [rsp+148h] [rbp+10h] BYREF
  __int16 v35; // [rsp+150h] [rbp+18h] BYREF

  if ( (a2 & 2) != 0 )
  {
    v5 = *((_DWORD *)a1 + 366);
    if ( (*((_BYTE *)a1 + 836) & 1) != 0 )
    {
      v6 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockShared((char *)a1 + 64);
      v8 = *((_DWORD *)a1 + 182);
      if ( HampLockTrackerId != -1 )
      {
        v9 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v9 & 2) == 0 )
          __int2c();
        if ( v9[2]-- == 1LL )
          *v9 &= ~2uLL;
      }
      RtlReleaseSRWLockShared((char *)a1 + 64);
    }
    else
    {
      v13 = (char *)a1 + 1136;
      v33 = 1;
      v14 = (char *)*((_QWORD *)a1 + 142);
      v8 = 1;
      v15 = 0LL;
      if ( v14 != v13 )
        v15 = v14 - 1296;
      while ( v15 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v15) )
          v8 = RmpActivityImportanceMergeVectors(v8, *((unsigned int *)v15 + 338));
        v16 = *((_QWORD *)v15 + 162);
        v17 = 3LL * *((int *)v15 + 332);
        v18 = *((_QWORD *)v15 + 165);
        v15 = 0LL;
        if ( v16 != v18 + 8 * (v17 + 139) )
          v15 = (char *)(v16 - 1296);
      }
    }
    *((_DWORD *)a1 + 366) = v8;
    if ( (*((_WORD *)a1 + 732) & 0x400) == 0 )
    {
      v11 = *((_DWORD *)a1 + 310);
      if ( (v11 & 2) != 0 )
        *((_DWORD *)a1 + 310) = v11 & 0xFFFFFFFD;
    }
    v12 = *((_DWORD *)a1 + 366);
    if ( v5 != v12
      && (unsigned int)dword_1800B31E0 > 4
      && (byte_1800B31F0 & 9) != 0
      && (qword_1800B31F8 & 9) == qword_1800B31F8 )
    {
      v29 = *((_DWORD *)a1 + 366) & 1;
      v19 = ((unsigned __int16)v12 >> 10) & 1;
      v20 = (v5 >> 10) & 1;
      v21 = ((unsigned __int16)v12 >> 9) & 1;
      v22 = (v5 >> 9) & 1;
      v23 = BYTE1(v12) & 1;
      v24 = (v5 >> 8) & 1;
      v25 = ((unsigned __int16)v12 >> 7) & 1;
      v27 = ((unsigned __int16)v12 >> 6) & 1;
      v26 = (v5 >> 7) & 1;
      v28 = (v5 >> 6) & 1;
      LOWORD(v33) = ((unsigned __int16)v12 >> 4) & 3;
      v32 = ((unsigned __int16)v5 >> 4) & 3;
      v34 = ((unsigned __int16)v12 >> 1) & 7;
      v35 = ((unsigned __int16)v5 >> 1) & 7;
      v31 = *((_QWORD *)a1 + 4);
      v30 = v5 & 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        (unsigned int)&unk_18009C0FE,
        v12,
        a4,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
}
