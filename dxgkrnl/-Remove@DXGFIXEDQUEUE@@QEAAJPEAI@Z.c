__int64 __fastcall DXGFIXEDQUEUE::Remove(DXGFIXEDQUEUE *this, unsigned int *a2)
{
  __int64 v3; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // zf

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v9 = *((unsigned int *)this + 3);
    if ( *((_DWORD *)this + 2) == (_DWORD)v9 )
    {
      return 2147483674LL;
    }
    else
    {
      v10 = v9 + 1;
      v11 = (_DWORD)v9 + 1 == *((_DWORD *)this + 1);
      *a2 = *(_DWORD *)(v3 + 4 * v9);
      if ( v11 )
        v10 = 0;
      *((_DWORD *)this + 3) = v10;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 99LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0LL,
          0,
          -1,
          L"Queue Init function not called or failed",
          99LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225495LL;
  }
}
