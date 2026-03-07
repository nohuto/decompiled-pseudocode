unsigned __int64 __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax
  char *v2; // rsi
  __int64 v3; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  unsigned __int64 i; // rdi
  unsigned __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // r9d
  unsigned __int64 v14; // rax
  bool v15; // cf
  size_t v16; // rcx
  size_t v17; // r14
  unsigned __int64 v18; // r9
  unsigned int v19; // r15d
  unsigned __int64 v20; // r14
  int v21; // eax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v23; // rax
  size_t v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  char *v30; // [rsp+B8h] [rbp+20h]

  result = (unsigned __int64)&retaddr;
  v2 = *(char **)(BugCheckParameter3 + 432);
  v3 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(BugCheckParameter3 + 200);
    v6 = *(_QWORD *)(BugCheckParameter3 + 320);
    v25 = v5;
    v7 = *(_QWORD *)(v5 + 120) << 12;
    v26 = __rdtsc();
    for ( i = (2LL * *(_QWORD *)(v5 + 128) + 4095) & 0xFFFFFFFFFFFFF000uLL; i; i -= v17 )
    {
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), v7, &v28);
      v10 = *(_QWORD *)(BugCheckParameter3 + 144);
      v11 = *(unsigned int *)(BugCheckParameter3 + 152);
      v12 = *(unsigned int *)(BugCheckParameter3 + 408);
      v13 = *(_DWORD *)(BugCheckParameter3 + 144);
      v29 = IoLocation;
      v14 = v28;
      v15 = i < v28;
      *(_WORD *)(v6 + 10) = 0;
      *(_QWORD *)v6 = 0LL;
      if ( v15 )
        v14 = i;
      v16 = v11 << 12;
      if ( v14 < v16 )
        v16 = v14;
      v17 = v12 << 12;
      if ( v16 < v17 )
        v17 = v16;
      *(_DWORD *)(v6 + 40) = v17;
      v24 = v17;
      *(_QWORD *)(v6 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v6 + 44) = v10 & 0xFFF;
      *(_WORD *)(v6 + 8) = 8 * (((v17 + (v10 & 0xFFF) + 4095) >> 12) + 6);
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
      v18 = (v17 + (v13 & 0xFFF) + 4095LL) >> 12;
      *(_WORD *)(v6 + 10) = 1;
      if ( v18 )
      {
        v19 = 0;
        v20 = v18;
        do
        {
          ++v19;
          *(_QWORD *)(v6 + 8 * v3 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                       + (v3 << 12))).QuadPart >> 12;
          v3 = v19;
        }
        while ( v19 < v20 );
        v2 = v30;
        v17 = v24;
        v5 = v25;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64))(*(_QWORD *)(BugCheckParameter3 + 168)
                                                                           + 160LL))(
              0LL,
              &v29,
              v6);
      BugCheckParameter4 = v21;
      if ( v21 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      memmove(v2, *(const void **)(BugCheckParameter3 + 144), v17);
      v2 += v17;
      v7 += v17;
      v3 = 0LL;
      v30 = v2;
    }
    *(_QWORD *)(BugCheckParameter3 + 416) = *(_QWORD *)(v5 + 128);
    v23 = __rdtsc();
    result = (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v26;
    qword_140C3D150 += result;
  }
  return result;
}
