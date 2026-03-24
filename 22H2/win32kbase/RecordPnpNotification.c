/*
 * XREFs of RecordPnpNotification @ 0x1C0138100
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

int __fastcall RecordPnpNotification(int a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  void *v8; // rax
  unsigned __int32 v9; // r9d
  __int64 v10; // r8
  unsigned __int16 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // cl

  v3 = 0;
  v4 = 0LL;
  if ( gpPnpNotificationRecord )
    goto LABEL_5;
  v8 = Win32AllocPoolZInit(200LL * gdwPnpNotificationRecSize, 1886417749LL);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpPnpNotificationRecord, (signed __int64)v8, 0LL) )
      Win32FreePool((__int64)v8);
LABEL_5:
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)&giPnpSeq, 1u);
    *((_DWORD *)gpPnpNotificationRecord + 50 * (v9 % gdwPnpNotificationRecSize)) = v9 + 1;
    v10 = 200LL * (v9 % gdwPnpNotificationRecSize);
    *(_DWORD *)((char *)gpPnpNotificationRecord + v10 + 128) = (MEMORY[0xFFFFF78000000320]
                                                              * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)((char *)gpPnpNotificationRecord + v10 + 8) = KeGetCurrentThread();
    *(_DWORD *)((char *)gpPnpNotificationRecord + v10 + 4) = a1;
    if ( a1 )
    {
      if ( a1 == 8 || a1 == 24 || !a2 )
      {
LABEL_16:
        *((_BYTE *)gpPnpNotificationRecord + v10 + v3 + 32) = 0;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v10 + 16) = a2;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v10 + 24) = v4;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v10 + 112) = a3;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v10 + 120) = 0LL;
        LODWORD(v8) = RtlWalkFrameChain((PVOID *)((char *)gpPnpNotificationRecord + v10 + 136), 8u, 0);
        return (int)v8;
      }
      v4 = *(_QWORD *)a2;
      v11 = a2 + 104;
    }
    else
    {
      v11 = a2;
      a2 = 0LL;
    }
    if ( v11 && *((_QWORD *)v11 + 1) )
    {
      v12 = v10;
      v13 = 0LL;
      do
      {
        if ( v3 >= *v11 >> 1 )
          break;
        ++v3;
        v14 = *(_BYTE *)(v13 + *((_QWORD *)v11 + 1));
        v13 += 2LL;
        *((_BYTE *)gpPnpNotificationRecord + v12 + 32) = v14;
        ++v12;
      }
      while ( v3 < 0x4F );
    }
    goto LABEL_16;
  }
  return (int)v8;
}
