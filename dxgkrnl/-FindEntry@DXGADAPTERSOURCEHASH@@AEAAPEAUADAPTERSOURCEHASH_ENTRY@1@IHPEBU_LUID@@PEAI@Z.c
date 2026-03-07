struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // rbx
  unsigned int v13; // r8d
  _DWORD *v14; // rdi
  int v15; // ecx
  int v16; // eax

  v5 = a2;
  v10 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  if ( v10 > 1 << *(_DWORD *)(v9 + 68) )
    v10 = 1 << *(_DWORD *)(v9 + 68);
  if ( (unsigned int)v5 >= v10 )
  {
    v11 = v10;
    WdLogSingleEntry2(1LL, (unsigned int)v5, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      v5,
      v11,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  v13 = 0;
  v14 = (_DWORD *)(*v8 + 16LL * (unsigned int)v5);
  if ( !v10 )
    return 0LL;
  while ( 1 )
  {
    v15 = v14[3] & 1 ^ (a3 == 0);
    if ( a4 && (a4->LowPart != *v14 || a4->HighPart != v14[1]) )
      v15 = 0;
    if ( (!a5 || *a5 == v14[2]) && v15 )
      break;
    v16 = v5 + 1;
    v14 += 4;
    if ( (_DWORD)v5 + 1 == v10 )
      v14 = (_DWORD *)*v8;
    LODWORD(v5) = 0;
    ++v13;
    if ( v16 != v10 )
      LODWORD(v5) = v16;
    if ( v13 >= v10 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v14;
}
