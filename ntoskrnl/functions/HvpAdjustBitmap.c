__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // eax
  void *v13; // rax
  void *v14; // rbp
  const void *v15; // r15

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v7 = 256;
  v8 = ((a2 >> 12) + 7) >> 3;
  if ( v8 )
    v9 = (v8 + 255) & 0xFFFFFF00;
  else
    v9 = 256;
  v10 = *v3;
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 + 7) >> 3;
    if ( v11 )
      v7 = (v11 + 255) & 0xFFFFFF00;
  }
  else
  {
    v7 = 0;
  }
  if ( v9 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v10 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v10, v4 - v10);
    return 0LL;
  }
  LOBYTE(v10) = 1;
  v13 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v9, v10, 959663427LL);
  v14 = v13;
  if ( v13 )
  {
    *(_DWORD *)a3 = v9;
    v15 = (const void *)*((_QWORD *)v3 + 1);
    memset(v13, 0, v9);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v14;
    if ( v15 )
    {
      memmove(v14, v15, v7);
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v15, v7);
    }
    return 0LL;
  }
  return 3221225626LL;
}
