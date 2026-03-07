__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, __int64 a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int128 v16; // [rsp+28h] [rbp-A0h] BYREF
  volatile void *Address[2]; // [rsp+38h] [rbp-90h]
  __int128 v18; // [rsp+48h] [rbp-80h]
  __int128 v19; // [rsp+58h] [rbp-70h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  int v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+80h] [rbp-48h] BYREF
  __int128 v23; // [rsp+90h] [rbp-38h]

  DWORD1(v18) = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( (_DWORD)a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0;
  v16 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v16 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v16) > 0x1C || (v7 = 268501248, !_bittest(&v7, DWORD2(v16))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
  }
  if ( SDWORD2(v16) > 16 )
  {
    switch ( DWORD2(v16) )
    {
      case 0x11:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v16, a4, a5);
      case 0x14:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        v6 = 0;
        *(_QWORD *)&v18 = 0LL;
        if ( a4 )
        {
          v10 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v10 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v10 = *(_BYTE *)v10;
          *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
          v6 = 0;
        }
        v18 = *(_OWORD *)Address[0];
        if ( (_DWORD)v18 == 1 )
        {
          *((_QWORD *)&v18 + 1) = qword_140C64D80;
          *(_OWORD *)Address[0] = v18;
          *a5 = 16;
        }
        else
        {
          return (unsigned int)-1073741735;
        }
        break;
      case 0x17:
        LOBYTE(a2) = a4;
        return (unsigned int)PfpVirtualQuery(&v16, a2, a5);
      case 0x18:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        MmLogQueryCombineStats(0LL, 0LL, &v22);
        if ( a4 )
          ProbeForWrite(Address[0], 0x10uLL, 4u);
        if ( *(_DWORD *)Address[0] == 1 )
        {
          v11 = Address[0];
          *((_DWORD *)Address[0] + 1) = DWORD1(v22);
          v11[1] = *((_QWORD *)&v23 + 1);
        }
        else
        {
          return (unsigned int)-1073741811;
        }
        break;
      case 0x1B:
        LOBYTE(a2) = a4;
        return (unsigned int)PfpQueryFileExtentsRequest(&v16, a2, a5);
      case 0x1C:
        return (unsigned int)PfpQueryGpuUtilization((__int64)&v16, a4, a5);
      default:
        return (unsigned int)-1073741821;
    }
  }
  else
  {
    if ( DWORD2(v16) == 16 )
      return (unsigned int)PfpMemoryListQuery((__int64)&v16, a4, a5);
    if ( DWORD2(v16) == 1 )
    {
      LOBYTE(a3) = a4;
      return (unsigned int)PfGetCompletedTrace(Address[0], LODWORD(Address[1]), a3, a5);
    }
    if ( DWORD2(v16) != 2 )
    {
      switch ( DWORD2(v16) )
      {
        case 6:
          LOBYTE(a2) = a4;
          return (unsigned int)PfpPfnPrioRequest(&v16, a2, a5);
        case 8:
          LOBYTE(a2) = a4;
          return (unsigned int)PfpPrivSourceEnum(&v16, a2, a5);
        case 9:
          v6 = 0;
          if ( LODWORD(Address[1]) == 4 )
          {
            if ( a4 )
            {
              v12 = (__int64)Address[0];
              if ( ((__int64)Address[0] & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
                v12 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v12 = *(_BYTE *)v12;
              *(_BYTE *)(v12 + 3) = *(_BYTE *)(v12 + 3);
              v6 = 0;
            }
            *(_DWORD *)Address[0] = dword_140D0BE90;
            *a5 = 4;
            return v6;
          }
          return (unsigned int)-1073741306;
        case 0xC:
          LOBYTE(a2) = a4;
          return (unsigned int)PfpQueryScenarioInformation(&v16, a2, a5);
      }
      return (unsigned int)-1073741821;
    }
    if ( LODWORD(Address[1]) != 28 )
      return (unsigned int)-1073741306;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C64C08, 0LL);
    v19 = xmmword_140C64A54;
    v20 = qword_140C64A64;
    v21 = dword_140C64A6C;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C64C08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140C64C08);
    KeAbPostRelease((ULONG_PTR)qword_140C64C08);
    KeLeaveCriticalRegion();
    if ( a4 )
    {
      v14 = (__int64)Address[0];
      if ( ((__int64)Address[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 27) = *(_BYTE *)(v14 + 27);
    }
    v15 = Address[0];
    *(_OWORD *)Address[0] = v19;
    v15[2] = v20;
    *((_DWORD *)v15 + 6) = v21;
    *a5 = 28;
    return 0;
  }
  return v6;
}
