void __fastcall DXGADAPTER::IncrementVSyncWaiter(DXGADAPTER *this, int a2)
{
  int v2; // r9d
  __int64 v3; // r8
  signed __int32 v4; // ecx

  v2 = (int)this;
  v3 = a2 & (unsigned int)-((*((_DWORD *)this + 698) & 0x10) != 0);
  if ( (unsigned int)v3 < 0x10 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)this + v3 + 738);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq_EtwWriteTransfer(v4, (unsigned int)&VSyncWaiterChange, v3, v2, v3, v4);
  }
}
