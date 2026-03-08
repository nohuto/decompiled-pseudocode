/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C00142EC
 * Callers:
 *     VidSchiFreeQueuePacket @ 0x1C0014154 (VidSchiFreeQueuePacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CDBE (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 && *a3 > 0x10u )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v8 = (_QWORD *)*v6, (_QWORD *)v8[1] != v5) )
      __fastfail(3u);
    *a2 = v8;
    v8[1] = a2;
    --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
