__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, _QWORD *a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char *v14; // rdi
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rbx
  void *v18; // rcx
  void **v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h]
  void **v21; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v26; // [rsp+94h] [rbp+24h]

  v26 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v23 = 0LL;
    v19 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v21 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v20 = 0LL;
    v24 = 256LL;
    DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v19, ResultLength);
    v14 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v15 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v16 = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v19);
        return v16;
      }
      v17 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a4, v17);
      v18 = (void *)a4[4];
      if ( v18 )
      {
        memmove(v18, v14 + 12, v17);
        v16 = 0;
        goto LABEL_12;
      }
    }
    WdLogSingleEntry0(6LL);
    v16 = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v12;
  return 3221226021LL;
}
