/*
 * XREFs of SmcVolumePnpNotification @ 0x1409D8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmcCacheDelete @ 0x1409D7D8C (SmcCacheDelete.c)
 *     SmcCacheReference @ 0x1409D8000 (SmcCacheReference.c)
 */

__int64 __fastcall SmcVolumePnpNotification(_QWORD *NotificationStructure, struct _EX_RUNDOWN_REF *Context)
{
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // esi
  struct _EX_RUNDOWN_REF *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rax
  char v10; // di
  __int64 v11; // rbx

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
    goto LABEL_7;
  v5 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v5 )
  {
LABEL_7:
    v6 = 0;
    v7 = Context + 3;
    do
    {
      v8 = v6 | (16 * (v7->Count & 0xFFF));
      v9 = SmcCacheReference((__int64)Context, v8);
      if ( v9 )
      {
        v10 = v8;
        v11 = 0LL;
        if ( *(_QWORD *)(v9 + 48) == NotificationStructure[3] )
          v11 = v9;
        ExReleaseRundownProtection_0(&Context[4 * (v10 & 0xF) + 1]);
        if ( v11 )
          SmcCacheDelete((__int64)Context);
      }
      ++v6;
      v7 += 4;
    }
    while ( v6 < 0x10 );
  }
  return 0LL;
}
