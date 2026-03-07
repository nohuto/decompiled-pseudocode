__int64 __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ebx

  result = *(unsigned int *)(a1 + 80);
  if ( (unsigned int)result <= 3 && (_DWORD)result != 2 )
  {
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v8 = 48 * a2 - 0x220000000000LL;
        MiSetPfnIdentity(v8, 3LL);
        MiAbortCombineScan(v8);
      }
      result = *(unsigned int *)(a1 + 80);
      v9 = 0;
      if ( (unsigned int)result > 3 )
        result = (unsigned int)(result - 4);
      v10 = *((_DWORD *)MiSlabTypeToMmSlabType + result);
    }
    else
    {
      if ( a3 == 1 )
        MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0LL);
      result = *(unsigned int *)(a1 + 80);
      if ( (unsigned int)result > 3 )
        result = (unsigned int)(result - 4);
      v10 = 0;
      v9 = *((_DWORD *)MiSlabTypeToMmSlabType + result);
    }
    if ( (MiFlags & 0x4000) != 0 )
    {
      result = VslSetPlaceholderPages(a2, a3, v9, v10);
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v9, (int)v10);
    }
  }
  return result;
}
