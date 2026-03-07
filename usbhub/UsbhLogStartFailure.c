void __fastcall UsbhLogStartFailure(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, _BYTE *Src)
{
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  char v12; // r10
  size_t v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v18; // rdi
  _OWORD *v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  _OWORD *v23; // rax
  int v24; // [rsp+20h] [rbp-58h]

  Log(a1, 8, 1936880673, (int)a2, (int)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_sdsd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, v24, (__int64)Src, a2, a5, v12);
  v13 = -1LL;
  v14 = FdoExt(a1);
  v15 = -1LL;
  do
    ++v15;
  while ( Src[v15] );
  v16 = v15 + 533;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v16, 1112885333LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v16;
    v19 = Pool2 + 4;
    Pool2[1] = a2;
    Pool2[3] = a3;
    if ( *((_QWORD *)v14 + 111) )
    {
      v20 = v14[220];
      v21 = 16LL;
      do
      {
        v22 = v14[221] & v20;
        v20 = v22 + 1;
        v23 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v22);
        *v19 = *v23;
        v19[1] = v23[1];
        v19 += 2;
        --v21;
      }
      while ( v21 );
    }
    do
      ++v13;
    while ( Src[v13] );
    memmove(v19, Src, v13);
    UsbhSyncSendInternalIoctl(a1, 0x22002Bu, (unsigned __int64)v18, 0LL);
    ExFreePoolWithTag(v18, 0);
  }
}
