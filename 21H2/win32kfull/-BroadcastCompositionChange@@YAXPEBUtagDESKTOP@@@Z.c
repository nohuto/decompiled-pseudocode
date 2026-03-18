/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0097B44
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSendMessageBSM @ 0x1C00A67B0 (xxxSendMessageBSM.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h]
  __int128 v4; // [rsp+48h] [rbp-20h]
  char v5; // [rsp+70h] [rbp+8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  v3 = 0LL;
  v4 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, _DWORD *, int))xxxSendMessageBSM)(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
    798LL,
    0LL,
    0LL,
    v2,
    1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
}
