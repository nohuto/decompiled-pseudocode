void __fastcall DeliverKeyboardInputToRim(
        struct _IVKeyboardInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rdi
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  LOWORD(v7) = *((_WORD *)a1 + 8);
  WORD1(v7) = *((_WORD *)a1 + 10);
  WORD2(v7) = *((_WORD *)a1 + 12);
  HIWORD(v7) = *((_WORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 8);
  RIMQueueKeyboardInput(a2, a3, &v7, 1u);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
