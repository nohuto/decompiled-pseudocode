__int64 __fastcall IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &SetElement::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return a1;
}
