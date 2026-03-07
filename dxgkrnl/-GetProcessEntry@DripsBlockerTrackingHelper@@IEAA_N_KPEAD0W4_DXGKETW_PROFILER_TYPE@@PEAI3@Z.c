char __fastcall DripsBlockerTrackingHelper::GetProcessEntry(
        __int64 a1,
        __int64 a2,
        const void *a3,
        SIZE_T a4,
        int a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 v7; // rbx
  unsigned int v12; // edi
  unsigned int v13; // eax
  _DWORD *v14; // rcx

  v7 = a1 + 44;
  v12 = 0;
  while ( 1 )
  {
    if ( *(_BYTE *)(v7 + 60) )
    {
      if ( *(_QWORD *)(v7 - 44) == a2 && RtlCompareMemory((const void *)(a1 + 4720LL * v12 + 8), a3, a4) == a4 )
      {
        v13 = 0;
        if ( *(_DWORD *)v7 )
          break;
      }
    }
LABEL_9:
    ++v12;
    v7 += 4720LL;
    if ( v12 >= 0x40 )
      return 0;
  }
  v14 = (_DWORD *)(v7 + 128);
  while ( *v14 != a5 )
  {
    ++v13;
    v14 += 18;
    if ( v13 >= *(_DWORD *)v7 )
      goto LABEL_9;
  }
  *a6 = v12;
  *a7 = v13;
  return 1;
}
