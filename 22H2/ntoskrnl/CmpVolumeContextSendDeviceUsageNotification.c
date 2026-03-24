/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8D94
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1407C8C58 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     CmpVolumeContextUnlockShared @ 0x1407C8E24 (CmpVolumeContextUnlockShared.c)
 *     CmpVolumeContextLockShared @ 0x1407C8E58 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockExclusive @ 0x1407C8F40 (CmpVolumeContextUnlockExclusive.c)
 *     PpPagePathAssign @ 0x1408A0FF0 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x1408A1008 (PpPagePathRelease.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  int v2; // edi
  char v4; // si

  if ( *(_QWORD *)(a1 + 48) )
  {
    CmpVolumeContextLockShared();
    if ( *(_BYTE *)(a1 + 64) )
    {
      v2 = 0;
      CmpVolumeContextUnlockShared(a1);
    }
    else
    {
      CmpVolumeContextUnlockShared(a1);
      v2 = PpPagePathAssign(*(_QWORD *)(a1 + 48));
      if ( v2 >= 0 )
      {
        v4 = 1;
        ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v4 = 0;
        }
        CmpVolumeContextUnlockExclusive(a1);
        v2 = 0;
        if ( v4 )
          PpPagePathRelease(*(_QWORD *)(a1 + 48));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
