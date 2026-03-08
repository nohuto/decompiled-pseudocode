/*
 * XREFs of UnlinkSendListSms @ 0x1C0094A8C
 * Callers:
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 *     xxxReceiverDied @ 0x1C00949E0 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0095A8C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     SuspendThreadQueue @ 0x1C00DE9B0 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01B1740 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 **v5; // rax
  void *v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v2 = *((_DWORD *)a1 + 26);
  if ( v2 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0 )
  {
    v3 = *((unsigned int *)a1 + 26);
    if ( (unsigned int)(v3 - 577) <= 3 )
    {
LABEL_21:
      v8 = a1[12];
      v9 = SGDGetUserSessionState(v3);
      CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v9 + 3424), v8, 6LL, a1);
      goto LABEL_8;
    }
    if ( (unsigned int)v3 >= 0x245 )
    {
      if ( (unsigned int)v3 <= 0x257 && (_DWORD)v3 != 589 && (_DWORD)v3 != 595 )
        goto LABEL_21;
    }
    else if ( (_DWORD)v3 == 528 && *((_WORD *)a1 + 44) == 582 )
    {
      goto LABEL_21;
    }
  }
LABEL_8:
  v4 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  HMAssignmentUnlock(a1 + 14);
  v6 = (void *)a1[15];
  if ( v6 )
    Win32FreePool(v6);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
