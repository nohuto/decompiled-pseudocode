/*
 * XREFs of UsbhLogStartFailure @ 0x1C002DEBC
 * Callers:
 *     UsbhInitialize @ 0x1C002D870 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C002E168 (UsbhReinitialize.c)
 *     UsbhFinishStart @ 0x1C0038168 (UsbhFinishStart.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 *     memmove @ 0x1C001DEC0 (memmove.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     WPP_RECORDER_SF_sdsd @ 0x1C002F800 (WPP_RECORDER_SF_sdsd.c)
 */

void __fastcall UsbhLogStartFailure(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, _BYTE *Src)
{
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  size_t v12; // rdi
  _DWORD *v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // rsi
  _OWORD *v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rax
  int v23; // [rsp+20h] [rbp-58h]

  Log(a1, 8, 1936880673, (int)a2, (int)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_sdsd(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v23, (__int64)Src, a2, a5, v11);
  v12 = -1LL;
  v13 = FdoExt(a1);
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  v15 = v14 + 533;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v15, 0x42554855u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    v18 = v17 + 4;
    v17[3] = a3;
    *v17 = v15;
    v17[1] = a2;
    if ( *((_QWORD *)v13 + 111) )
    {
      v19 = v13[220];
      v20 = 16LL;
      do
      {
        v21 = v13[221] & v19;
        v19 = v21 + 1;
        v22 = (_OWORD *)(*((_QWORD *)v13 + 111) + 32 * v21);
        *v18 = *v22;
        v18[1] = v22[1];
        v18 += 2;
        --v20;
      }
      while ( v20 );
    }
    do
      ++v12;
    while ( Src[v12] );
    memmove(v18, Src, v12);
    UsbhSyncSendInternalIoctl(a1, 0x22002Bu, (unsigned __int64)v17, 0LL);
    ExFreePoolWithTag(v17, 0);
  }
}
