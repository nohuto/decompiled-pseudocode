void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  int v4; // edx
  int v5; // r8d

  if ( this[39] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1462LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v4,
          v5,
          0,
          2,
          -1,
          (__int64)L"m_ShareMutex.IsOwner()",
          1462LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 42), a2);
}
