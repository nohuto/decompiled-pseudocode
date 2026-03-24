/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C017CAA0
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017C358 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C005AEB8 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C3E4 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  SIZE_T v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  void **v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h]
  void **v26; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v31; // [rsp+94h] [rbp+24h]

  v31 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v10 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v28 = 0LL;
    v24 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v26 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v25 = 0LL;
    v29 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v24, ResultLength);
    v17 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v18 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v21 = v18;
      if ( v18 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v22 + 24) = v21;
        WdLogEvent5_WdError(v22);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v24);
        return (unsigned int)v21;
      }
      v21 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v21);
      v14 = *(void **)(a4 + 32);
      if ( v14 )
      {
        memmove(v14, v17 + 12, v21);
        LODWORD(v21) = 0;
        goto LABEL_12;
      }
    }
    v23 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    WdLogEvent5_WdLowResource(v23);
    LODWORD(v21) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = v10;
  return 3221226021LL;
}
