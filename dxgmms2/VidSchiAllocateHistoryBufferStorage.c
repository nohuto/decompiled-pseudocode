__int64 __fastcall VidSchiAllocateHistoryBufferStorage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( a2 <= 4 )
  {
    *(_QWORD *)(a1 + 616) = a1 + 168;
    *(_QWORD *)(a1 + 264) = a1 + 200;
    return 0LL;
  }
  v4 = a2;
  Pool2 = ExAllocatePool2(64LL, 8LL * a2, 1633773910LL);
  *(_QWORD *)(a1 + 616) = Pool2;
  if ( Pool2 )
  {
    v7 = ExAllocatePool2(64LL, 16 * v4, 1633773910LL);
    *(_QWORD *)(a1 + 264) = v7;
    if ( v7 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 616), 0);
    *(_QWORD *)(a1 + 616) = 0LL;
    WdLogSingleEntry1(6LL, 11540LL);
  }
  else
  {
    WdLogSingleEntry1(6LL, 11528LL);
  }
  DxgkLogInternalTriageEvent(v6, 262145LL);
  return 3221225495LL;
}
