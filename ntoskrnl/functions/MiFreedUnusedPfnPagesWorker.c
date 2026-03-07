__int64 __fastcall MiFreedUnusedPfnPagesWorker(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *NextNonGapPfnPage; // rbx
  SIZE_T v10; // rsi
  SIZE_T v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  char *v15; // r14
  char *v16; // r15
  unsigned __int64 *i; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+18h]
  unsigned __int64 v23; // [rsp+78h] [rbp+20h]

  if ( !*a1 )
    byte_140C6B1A4 = 1;
  v1 = 0LL;
  while ( 1 )
  {
    v2 = v1;
    result = qword_140C65820 + 1;
    if ( v1 == qword_140C65820 + 1 )
      return result;
    if ( MmPhysicalMemoryBlock )
    {
      for ( i = (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16); ; i += 2 )
      {
        if ( i >= (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16 * *(unsigned int *)MmPhysicalMemoryBlock + 16) )
        {
          v1 = v2;
          v4 = qword_140C65820 - v2;
          goto LABEL_7;
        }
        v18 = *i;
        if ( v2 >= *i )
        {
          v19 = i[1] + v18;
          if ( v2 < v19 )
            v2 = v19;
        }
        else
        {
          v5 = v18 - v2;
          if ( v18 - v2 >= 0x55 )
          {
            v1 = v2;
            result = v2;
            goto LABEL_8;
          }
          v2 = v18 + i[1];
        }
      }
    }
    v4 = qword_140C65820 - v1;
LABEL_7:
    v5 = v4 + 1;
    result = v2;
    if ( v4 == -1LL )
      return result;
LABEL_8:
    v1 += v5;
    v23 = v1;
    v6 = (((unsigned __int64)(48 * result - 0x21FFFFFFF001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v6;
    v7 = (((48 * (v5 + v2) - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = v7;
    if ( v6 < v7 )
    {
      do
      {
        v8 = (__int64)(v7 - v6) >> 3 << 12;
        LOBYTE(v6) = 2;
        v20 = v8;
        NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v21, &v20, v6, 1LL);
        if ( !NextNonGapPfnPage )
          break;
        v10 = v20 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == 0 )
          break;
        do
        {
          if ( *NextNonGapPfnPage || (v11 = RtlCompareMemoryUlong(NextNonGapPfnPage, v10, 0), v11 < 0x1000) )
          {
            v11 = 4096LL;
          }
          else
          {
            v20 = (__int64)NextNonGapPfnPage;
            v13 = (unsigned __int64)(NextNonGapPfnPage + 0x44000000000LL) / 0x30;
            v14 = (_QWORD *)(48 * v13 - 0x220000000000LL);
            if ( v14 != NextNonGapPfnPage
              && MmIsAddressValidEx(48 * v13 - 0x220000000000LL)
              && RtlCompareMemoryUlong(v14, 0x30uLL, 0) != 48 )
            {
              v20 = (__int64)(NextNonGapPfnPage + 512);
            }
            v15 = (char *)NextNonGapPfnPage + (v11 & 0xFFFFFFFFFFFFF000uLL);
            v16 = (char *)(48 * ((unsigned __int64)(v15 + 0x220000000000LL) / 0x30) - 0x220000000000LL);
            if ( v16 != v15 && MmIsAddressValidEx((__int64)(v16 + 48)) && RtlCompareMemoryUlong(v16, 0x30uLL, 0) != 48 )
              v15 -= 4096;
            MiPfnRangeIsZero(v20, v15);
          }
          v12 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v12);
          v10 -= v12;
        }
        while ( v10 >= 0x1000 );
        v6 = v21;
        v7 = v22;
        v1 = v23;
      }
      while ( v21 < v22 );
    }
  }
}
