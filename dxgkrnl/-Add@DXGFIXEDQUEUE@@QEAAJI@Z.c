__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, int a2)
{
  char *v2; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  void *v17; // rcx
  int v18; // eax

  v2 = (char *)*((_QWORD *)this + 2);
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL, 52LL);
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
          52LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225495LL;
  }
  v9 = *((_DWORD *)this + 2);
  v10 = *((_DWORD *)this + 1);
  v11 = v9 + 1;
  if ( v11 == v10 )
    v11 = 0;
  if ( v11 == *((_DWORD *)this + 3) )
  {
    v12 = 4LL * (unsigned int)(v10 + *(_DWORD *)this);
    if ( !is_mul_ok((unsigned int)(v10 + *(_DWORD *)this), 4uLL) )
      v12 = -1LL;
    v2 = (char *)operator new[](v12, 0x4B677844u, 256LL);
    if ( !v2 )
    {
      WdLogSingleEntry1(2LL, this);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v14,
          v13,
          v15,
          0LL,
          0,
          -1,
          L"Queue 0x%I64x has run out of space",
          this,
          0LL,
          0LL,
          0LL,
          0LL);
      return 3221225507LL;
    }
    memmove(
      v2,
      (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
      4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
    v16 = *((_DWORD *)this + 3);
    if ( v16 )
    {
      memmove(&v2[4 * (*((_DWORD *)this + 1) - v16)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
      *((_QWORD *)this + 1) = (unsigned int)(*((_DWORD *)this + 1) - 1);
    }
    *((_DWORD *)this + 1) += *(_DWORD *)this;
    v17 = (void *)*((_QWORD *)this + 2);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    *((_QWORD *)this + 2) = v2;
  }
  *(_DWORD *)&v2[4 * *((unsigned int *)this + 2)] = a2;
  v18 = *((_DWORD *)this + 2) + 1;
  if ( v18 == *((_DWORD *)this + 1) )
    v18 = 0;
  *((_DWORD *)this + 2) = v18;
  return 0LL;
}
