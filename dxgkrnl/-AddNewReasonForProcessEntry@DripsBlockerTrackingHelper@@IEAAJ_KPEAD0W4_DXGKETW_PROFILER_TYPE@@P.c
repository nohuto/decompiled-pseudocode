__int64 __fastcall DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(
        __int64 a1,
        __int64 a2,
        const void *a3,
        SIZE_T a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v11; // edi
  __int64 i; // rbx
  __int64 v13; // r14
  __int64 v15; // rcx

  v11 = 0;
  for ( i = a1; ; i += 4720LL )
  {
    if ( *(_BYTE *)(i + 104) )
    {
      if ( *(_QWORD *)i == a2 )
      {
        v13 = 4720LL * v11;
        if ( RtlCompareMemory((const void *)(v13 + a1 + 8), a3, a4) == a4 )
          break;
      }
    }
    if ( ++v11 >= 0x40 )
      return 3221226021LL;
  }
  v15 = *(unsigned int *)(v13 + a1 + 44);
  if ( (unsigned int)v15 >= 0x40 )
    return 2147483674LL;
  *a6 = v11;
  *a7 = v15;
  *(_DWORD *)(v13 + a1 + 44) = v15 + 1;
  *(_DWORD *)(v13 + 72 * v15 + a1 + 172) = a5;
  return 0LL;
}
