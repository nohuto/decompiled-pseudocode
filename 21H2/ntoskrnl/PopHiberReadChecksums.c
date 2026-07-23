/*
 * XREFs of PopHiberReadChecksums @ 0x1409B22A8
 * Callers:
 *     PopRestoreHiberContext @ 0x1409944E8 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x1409950F8 (PopGetIoLocation.c)
 */

unsigned __int64 __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax
  char *v2; // rsi
  __int64 v3; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 IoLocation; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // r9d
  unsigned __int64 v15; // rax
  bool v16; // cf
  size_t v17; // rcx
  size_t v18; // r14
  unsigned __int64 v19; // r9
  unsigned int v20; // r15d
  unsigned __int64 v21; // r14
  int v22; // eax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v24; // rax
  size_t v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  unsigned __int64 v27; // [rsp+48h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+18h] BYREF
  char *v31; // [rsp+B8h] [rbp+20h]

  result = (unsigned __int64)&retaddr;
  v2 = *(char **)(BugCheckParameter3 + 432);
  v3 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v31 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(BugCheckParameter3 + 200);
    v6 = *(_QWORD *)(BugCheckParameter3 + 320);
    v26 = v5;
    v7 = *(_QWORD *)(v5 + 128);
    v8 = *(_QWORD *)(v5 + 120) << 12;
    v27 = __rdtsc();
    v9 = (2 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v9 )
    {
      do
      {
        IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), v8, &v29);
        v11 = *(_QWORD *)(BugCheckParameter3 + 144);
        v12 = *(unsigned int *)(BugCheckParameter3 + 152);
        v13 = *(unsigned int *)(BugCheckParameter3 + 408);
        v14 = *(_DWORD *)(BugCheckParameter3 + 144);
        v30 = IoLocation;
        v15 = v29;
        v16 = v9 < v29;
        *(_WORD *)(v6 + 10) = 0;
        *(_QWORD *)v6 = 0LL;
        if ( v16 )
          v15 = v9;
        v17 = v12 << 12;
        if ( v15 < v17 )
          v17 = v15;
        v18 = v13 << 12;
        if ( v17 < v18 )
          v18 = v17;
        *(_DWORD *)(v6 + 40) = v18;
        v25 = v18;
        *(_QWORD *)(v6 + 32) = v11 & 0xFFFFFFFFFFFFF000uLL;
        *(_DWORD *)(v6 + 44) = v11 & 0xFFF;
        *(_WORD *)(v6 + 8) = 8 * (((v18 + (v11 & 0xFFF) + 4095) >> 12) + 6);
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
        v19 = (v18 + (v14 & 0xFFF) + 4095LL) >> 12;
        *(_WORD *)(v6 + 10) = 1;
        if ( v19 )
        {
          v20 = 0;
          v21 = v19;
          do
          {
            ++v20;
            *(_QWORD *)(v6 + 8 * v3 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                         + (v3 << 12))).QuadPart >> 12;
            v3 = v20;
          }
          while ( v20 < v21 );
          v2 = v31;
          v18 = v25;
          v5 = v26;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                &v30,
                v6);
        BugCheckParameter4 = v22;
        if ( v22 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
        }
        memmove(v2, *(const void **)(BugCheckParameter3 + 144), v18);
        v2 += v18;
        v8 += v18;
        v3 = 0LL;
        v31 = v2;
        v9 -= v18;
      }
      while ( v9 );
      v7 = *(_QWORD *)(v5 + 128);
    }
    *(_QWORD *)(BugCheckParameter3 + 416) = v7;
    v24 = __rdtsc();
    result = (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v27;
    qword_140C24130 += result;
  }
  return result;
}
