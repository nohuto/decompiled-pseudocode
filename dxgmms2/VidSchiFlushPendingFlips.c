char __fastcall VidSchiFlushPendingFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool v7; // zf
  __int64 v8; // r8
  int v9; // eax
  _QWORD v11[20]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[20]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = a2 + 3080;
  if ( *(_DWORD *)(a2 + 3080) )
  {
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[4]) |= 0x10u;
    v7 = *((_BYTE *)a1 + 59) == 0;
    LODWORD(v11[2]) = 3;
    v11[5] = v3;
    if ( !v7 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion((__int64)a1, (__int64)v11, 0x17u);
    if ( *((_BYTE *)a1 + 59) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3, v8);
  }
  v9 = *(_DWORD *)(a2 + 3084);
  if ( v9 && !*((_BYTE *)a1 + 3008) )
  {
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[4]) |= 0x10u;
    LODWORD(v12[2]) = 1;
    v12[5] = a2 + 3084;
    LOBYTE(v9) = VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x17u);
  }
  return v9;
}
