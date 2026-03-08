/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x1405175AC
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1405171B0 (HalpErrorDeferredHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmGetPageBadStatus @ 0x140629080 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A05140 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_DWORD **a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 i; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // r14
  char v9; // bp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  for ( i = 0LL; (unsigned int)i < v3[21]; i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)&v3[6 * i + 24];
    if ( v6 > 0x32 )
    {
      *(_QWORD *)&v3[6 * i + 24] = 50LL;
      v6 = 50LL;
    }
    *(_QWORD *)&v3[6 * i + 26] = 0LL;
    v7 = 0;
    v8 = *(_QWORD *)&v3[6 * i + 22];
    if ( v6 )
    {
      v9 = 0;
      do
      {
        v10 = v8 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v10)
          || (LOBYTE(a3) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v8, 0LL, a3, 0LL)) )
        {
          *(_QWORD *)&v3[6 * i + 26] |= 1LL << v9;
        }
        ++v7;
        ++v8;
        v9 = v7;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)&v3[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager && qword_140C621B8 )
  {
    LOBYTE(a3) = 1;
    qword_140C621B8(a1, 0LL, a3);
  }
  ExFreePoolWithTag(v3, 0x576C6148u);
}
