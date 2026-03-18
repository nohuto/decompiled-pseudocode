/*
 * XREFs of ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x1C01DC9AC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 */

void __fastcall xxxSendPostedMessage(const struct tagMSG *a1, struct tagMSG *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  *(_OWORD *)a2 = *(_OWORD *)a1;
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
  v3 = ValidateHwnd(*(_QWORD *)a1);
  if ( v3 )
  {
    v7 = 0LL;
    v8 = 0LL;
    ThreadLock(v3, (__int64 *)&v7);
    xxxSendMessage(v3);
    ThreadUnlock1(v5, v4, v6);
    *((_QWORD *)a2 + 2) |= 0x80000000uLL;
  }
}
