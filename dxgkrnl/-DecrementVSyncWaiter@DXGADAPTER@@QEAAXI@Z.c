void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, int a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  int v5; // esi

  v3 = (int)this;
  v4 = a2 & (unsigned int)-((*((_DWORD *)this + 698) & 0x10) != 0);
  if ( (unsigned int)v4 < 0x10 )
  {
    v5 = _InterlockedDecrement((volatile signed __int32 *)this + v4 + 738);
    if ( v5 < 0 )
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v4 + 738), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq_EtwWriteTransfer((_DWORD)this, (unsigned int)&VSyncWaiterChange, a3, v3, v4, v5);
  }
}
