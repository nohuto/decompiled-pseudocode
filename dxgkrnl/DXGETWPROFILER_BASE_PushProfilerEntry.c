/*
 * XREFs of DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0007610
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

char __fastcall DXGETWPROFILER_BASE_PushProfilerEntry(__int64 a1, int a2)
{
  struct DXGTHREAD *Current; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  if ( *(_QWORD *)(a1 + 8) )
  {
    WdLogSingleEntry1(1LL, 368LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          2,
          -1,
          (__int64)L"m_pThread == NULL",
          368LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LOBYTE(Current) = KeGetCurrentIrql();
  if ( (unsigned __int8)Current < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    *(_QWORD *)(a1 + 8) = Current;
    if ( Current )
    {
      v5 = *((_DWORD *)Current + 13);
      if ( !v5 )
        *((_DWORD *)Current + 14) = a2;
      *((_DWORD *)Current + 13) = v5 + 1;
    }
  }
  return (char)Current;
}
