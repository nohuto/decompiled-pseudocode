__int64 __fastcall VIDMM_SEGMENT::ValidateMemoryRanges(
        VIDMM_SEGMENT *this,
        unsigned int a2,
        struct _DXGK_MEMORYRANGE *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r11d
  UINT64 *i; // r10
  UINT64 v9; // rax
  UINT64 v10; // rcx
  UINT64 v11; // rdx
  UINT64 v12; // r8
  UINT64 v13; // rcx
  __int64 v15; // rbx
  UINT64 SizeInBytes; // rcx

  v4 = 0;
  if ( !a2 )
    return 0LL;
  for ( i = &a3->SizeInBytes; ; i += 2 )
  {
    v9 = *(i - 1);
    v10 = *((_QWORD *)this + 8);
    if ( v9 >= v10 )
      break;
    v11 = *i;
    v12 = v9 + *i;
    if ( v12 > v10 )
      break;
    v13 = *((_QWORD *)this + 6);
    if ( v9 < v13 )
    {
      if ( v12 >= v13 )
      {
        v11 = v13 - v9;
        *i = v13 - v9;
      }
      if ( !v11 || v11 >= *((_QWORD *)this + 6) - *((_QWORD *)this + 9) )
      {
        v15 = v4;
        WdLogSingleEntry3(1LL, a3[v4].SizeInBytes, -1073741811LL, 757LL);
        SizeInBytes = a3[v15].SizeInBytes;
        goto LABEL_15;
      }
      *a4 += v11;
    }
    if ( ++v4 >= a2 )
      return 0LL;
  }
  WdLogSingleEntry4(1LL, v9, a3[v4].SizeInBytes, -1073741811LL, 734LL);
LABEL_15:
  DxgkLogInternalTriageEvent(SizeInBytes, 0x40000LL);
  return 3221225485LL;
}
