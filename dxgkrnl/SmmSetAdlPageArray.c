char __fastcall SmmSetAdlPageArray(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rbx

  v4 = *(_DWORD *)(a1 + 44) & 0x1E;
  if ( v4 == 4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
LABEL_9:
    v9 = v5 + 8 * (a3 + 6LL);
    goto LABEL_10;
  }
  if ( v4 == 2 || v4 == 8 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    goto LABEL_9;
  }
  LOBYTE(v4) = WdLogSingleEntry1(1LL, 739LL);
  v9 = 0LL;
  if ( bTracingEnabled )
  {
    LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(v7, v6, v8, 0LL, 2, -1, L"0", 739LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_10:
  *(_QWORD *)(a2 + 16) = v9;
  return v4;
}
