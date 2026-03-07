__int64 __fastcall DXGGLOBAL::AllocHandle(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( *(struct _KTHREAD **)(a1 + 312) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1455LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"m_ShareMutex.IsOwner()",
          1455LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return HMGRTABLE::AllocHandle(a1 + 336, a2, a3, 2LL, 0);
}
