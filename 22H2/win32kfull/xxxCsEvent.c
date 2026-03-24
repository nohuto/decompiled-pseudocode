/*
 * XREFs of xxxCsEvent @ 0x1C02467E8
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C012802C (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C01F8350 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0246A78 (xxxMessageEvent.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  size_t v4; // rdi
  _WORD *v5; // rax
  _WORD *v6; // rbx
  int v8; // esi
  _DWORD *DeviceObject; // rax
  int v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // r14d
  _QWORD *i; // rsi
  int j; // esi
  _QWORD *v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]
  __int128 v23; // [rsp+68h] [rbp-30h] BYREF
  __int64 v24; // [rsp+78h] [rbp-20h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = (unsigned int)a2 + 8;
  v5 = (_WORD *)Win32AllocPoolWithQuota(v4, 895775573LL);
  v6 = v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, v4);
  v6[3] = a2;
  v8 = 0;
  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    v10 = *(_DWORD *)v6;
    do
    {
      if ( ((v10 & DeviceObject[10]) == 0 || v6[2]) && ((v10 & DeviceObject[10]) != 0 || !v6[2]) )
        ++v8;
      DeviceObject = (_DWORD *)*((_QWORD *)DeviceObject + 3);
    }
    while ( DeviceObject );
  }
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v8 + 8, 912552789LL);
  v12 = v11;
  if ( !v11 )
  {
    Win32FreePool(v6);
    return 16392LL;
  }
  *v11 = v8;
  v13 = 0;
  for ( i = WPP_MAIN_CB.Queue.Wcb.DeviceObject; i && v13 < *v12; i = (_QWORD *)i[3] )
  {
    if ( ((*(_DWORD *)v6 & (_DWORD)i[5]) == 0 || v6[2]) && ((*(_DWORD *)v6 & (_DWORD)i[5]) != 0 || !v6[2]) )
    {
      *(_QWORD *)&v19 = &v12[2 * v13 + 2];
      *((_QWORD *)&v19 + 1) = i[6];
      HMAssignmentLock(&v19);
      ++v13;
    }
  }
  PushW32ThreadLock((__int64)v6, &v23, (__int64)Win32FreePool);
  PushW32ThreadLock((__int64)v12, &v21, (__int64)DestroyEventPacketTargets);
  for ( j = 0; j < *v12; ++j )
  {
    v19 = 0LL;
    v20 = 0LL;
    v16 = (_QWORD *)HMAssignmentUnlock(&v12[2 * j + 2]);
    if ( v16 )
    {
      v17 = ValidateHwnd(*v16);
      if ( v17 )
      {
        *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v19;
        *((_QWORD *)&v19 + 1) = v17;
        HMLockObject(v17);
        xxxSendMessage(v17, 0x3Cu, 0LL, (struct _LARGE_STRING *)v6);
        ThreadUnlock1(v18);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v23);
  return 0LL;
}
