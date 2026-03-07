_QWORD *__fastcall SmmGetAnyFreeBlockFromPool(_QWORD *a1)
{
  int v2; // edx
  int v3; // r8d
  _QWORD *v4; // rbx

  if ( (_QWORD *)*a1 == a1 )
  {
    WdLogSingleEntry1(1LL, 698LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v2,
          v3,
          0LL,
          2,
          -1,
          L"!IsListEmpty(&pPool->FreeListHead)",
          698LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v4 = (_QWORD *)*a1;
  SmmRemoveBlockFromPool(a1, *a1 - 16LL);
  return v4 - 2;
}
