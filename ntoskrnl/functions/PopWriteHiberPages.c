__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rbx
  unsigned int i; // esi
  unsigned __int64 v18; // rbx
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 IoLocation; // [rsp+40h] [rbp-C0h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[40]; // [rsp+70h] [rbp-90h] BYREF

  v24 = a1;
  v6 = a1;
  memset(v27, 0, 0x138uLL);
  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v21 = 0LL;
  IoLocation = 0LL;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = off_140C01CD0[0]();
  ++PopWatchdogTimerCount;
  if ( *(int *)(v6 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140C3CA70 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v6 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v6);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v6);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C3CA70, *(unsigned int *)(v6 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA23B3uLL);
    result = *(_QWORD *)(v6 + 160);
    v10 = a4 << 12;
    v26 = result;
    v11 = a3 << 12;
    while ( v11 )
    {
      IoLocation = PopGetIoLocation(result, v10, &v21);
      v12 = v11;
      if ( v11 > v21 )
        v12 = v21;
      v13 = a2 & 0xFFF;
      v14 = ((unsigned __int64)v12 + v13 + 4095) >> 12;
      if ( v14 > 0x10 )
      {
        v15 = v14 - 16;
        v14 = 16LL;
        v12 -= v15 << 12;
      }
      v25 = v12;
      v27[0] = 0LL;
      HIDWORD(v27[5]) = a2 & 0xFFF;
      LOWORD(v27[1]) = 8 * (((v13 + (unsigned __int64)v12 + 4095) >> 12) + 6);
      LODWORD(v27[5]) = v12;
      v27[4] = a2 & 0xFFFFFFFFFFFFF000uLL;
      v27[3] = a2;
      WORD1(v27[1]) = 1;
      if ( v14 )
      {
        v16 = 0LL;
        for ( i = 0; i < v14; v16 = i )
        {
          ++i;
          v27[v16 + 6] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v16 << 12))).QuadPart >> 12;
        }
        v6 = v24;
      }
      v18 = __rdtsc();
      v19 = (*(__int64 (__fastcall **)(unsigned __int64 *, _QWORD *))(*(_QWORD *)(v6 + 168) + 64LL))(&IoLocation, v27);
      v20 = __rdtsc();
      dword_140C3D1B0 += v14;
      qword_140C3CFD8 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
      result = v25;
      v11 -= v25;
      v10 += v25;
      a2 += v25;
      if ( v19 < 0 )
      {
        *(_DWORD *)(v6 + 188) = v19;
        return result;
      }
      result = v26;
    }
  }
  return result;
}
