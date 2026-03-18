/*
 * XREFs of CoreMsgObjectCallout @ 0x1C00B30E8
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C003BBA0 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreMsgObjectCallout(unsigned int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  int ProcessSessionId; // eax
  _DWORD *v10; // rsi
  int v11; // eax
  char v12[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v12[0] = 0;
  if ( (unsigned int)dword_1C028D8C0 > 5 )
  {
    v17 = 0;
    v15 = &v13;
    v13 = a1;
    v16 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028D8C0, (unsigned __int8 *)dword_1C026624E, 0LL, 0LL, 3u, &v14);
  }
  CoreMessagingK::EntryLock::Acquire(v12, 5u);
  v4 = a1 - 33;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      if ( v6 == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8LL) + 16LL))(*a2 + 8LL);
        goto LABEL_8;
      }
      v7 = -1073741585;
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)a2 + 24) )
      {
        ProcessSessionId = PsGetProcessSessionIdEx(*a2);
        if ( ProcessSessionId == -1 )
          v7 = -1073741790;
      }
    }
  }
  else
  {
    v7 = 0;
    if ( !(unsigned __int8)PsIsSystemProcess(a2[1]) )
    {
      v10 = (_DWORD *)a2[2];
      v11 = PsGetProcessSessionIdEx(a2[1]);
      if ( v11 == -1 || v11 != *v10 )
        v7 = -1073741790;
    }
  }
LABEL_9:
  if ( (unsigned int)dword_1C028D8C0 > 5 )
  {
    v17 = 0;
    v15 = &v13;
    v13 = v7;
    v16 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028D8C0, (unsigned __int8 *)dword_1C02662AB, 0LL, 0LL, 3u, &v14);
  }
  if ( v12[0] )
    KeReleaseMutex(Mutex, 0);
  return v7;
}
