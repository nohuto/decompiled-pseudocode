_QWORD *__fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  _QWORD *result; // rax

  result = MiAllocatePool(64, 0x28uLL, 0x78546D4Du);
  if ( result )
  {
    result[3] = 0LL;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 8) = 1;
    *(_QWORD *)(a1 + 1544) = result;
  }
  return result;
}
