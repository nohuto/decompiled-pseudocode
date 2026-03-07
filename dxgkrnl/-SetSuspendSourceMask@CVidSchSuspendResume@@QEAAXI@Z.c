void __fastcall CVidSchSuspendResume::SetSuspendSourceMask(CVidSchSuspendResume *this, int a2)
{
  __int64 v2; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (a2 & *(_DWORD *)(v2 + 756)) != a2 )
    {
      WdLogSingleEntry1(1LL, 8236LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v6,
            v5,
            v7,
            0,
            2,
            -1,
            (__int64)L"(m_pAdapter->GetSchedulerSuspendSourceMask() & SourceMask) == SourceMask",
            44,
            0,
            0,
            0,
            0);
      }
    }
    *(_DWORD *)this = a2;
  }
}
