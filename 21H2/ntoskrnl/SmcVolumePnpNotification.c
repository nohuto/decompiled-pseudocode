/*
 * XREFs of SmcVolumePnpNotification @ 0x1409D8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmcCacheDelete @ 0x1409D7990 (SmcCacheDelete.c)
 *     SmcCacheReference @ 0x1409D7C2C (SmcCacheReference.c)
 */

__int64 __fastcall SmcVolumePnpNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // ebp
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rbx

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
LABEL_7:
    v5 = 0;
    v6 = &unk_140D32218;
    do
    {
      v7 = v5 | (16 * (*v6 & 0xFFF));
      v8 = SmcCacheReference((__int64)&unk_140D32200, v7);
      if ( v8 )
      {
        v9 = v7;
        v10 = 0LL;
        if ( *(_QWORD *)(v8 + 48) == NotificationStructure[3] )
          v10 = v8;
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&unk_140D32208 + 4 * (v9 & 0xF));
        if ( v10 )
          SmcCacheDelete((__int64)&unk_140D32200);
      }
      ++v5;
      v6 += 8;
    }
    while ( v5 < 0x10 );
  }
  return 0LL;
}
