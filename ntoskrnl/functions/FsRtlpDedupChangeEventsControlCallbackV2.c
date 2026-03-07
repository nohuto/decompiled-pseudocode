void __fastcall FsRtlpDedupChangeEventsControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _BYTE *CallbackContext)
{
  unsigned int v7; // r8d
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  bool v10; // r11
  int v11; // edx
  int *v12; // rcx
  int v13; // edx
  __int64 i; // rbx

  if ( CallbackContext && ControlCode == 1 )
  {
    CallbackContext[40] = Level;
    v7 = 0;
    *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
    *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
    for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
    {
      v8 = CallbackContext[40];
      v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7);
      v10 = (*(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8)
         && (!v9
          || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
          && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
      v11 = 1 << (v7 & 0x1F);
      v12 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
      if ( v10 )
        v13 = *v12 | v11;
      else
        v13 = *v12 & ~v11;
      *v12 = v13;
    }
    ExAcquireResourceSharedLite(&Resource, 1u);
    for ( i = FsRtlDedupChangeData; (__int64 *)i != &FsRtlDedupChangeData; i = *(_QWORD *)i )
    {
      if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 1) != 0 )
        McTemplateK0jq_EtwWriteTransfer(
          &MS_Dedup_Change_Provider_Context,
          TieredStorage_NewVolume,
          0LL,
          i + 20,
          *(_DWORD *)(i + 36));
    }
    ExReleaseResourceLite(&Resource);
  }
}
