__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  __int64 v4; // rsi
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v9; // rax
  PMDL Mdl; // rax
  int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rcx
  PVOID v17; // rax
  int v18; // edx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  if ( *(_WORD *)(v1 + 2) == 8
    || *(_WORD *)(v1 + 2) == 9
    || *(_WORD *)(v1 + 2) == 10
    || *(_WORD *)(v1 + 2) == 50
    || *(_WORD *)(v1 + 2) == 55
    || *(_WORD *)(v1 + 2) == 56
    || (unsigned int)*(unsigned __int16 *)(v1 + 2) - 57 >= 2 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(a1 + 76) - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return v2;
        v9 = *(_QWORD *)(v1 + 48);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 80) = v9;
          return v2;
        }
        Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 104), 0, 0, 0LL);
        *(_QWORD *)(a1 + 80) = Mdl;
        if ( !Mdl )
        {
          if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 || !*(_QWORD *)(v4 + 120) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 40;
LABEL_33:
              v18 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
              LOBYTE(v18) = 2;
              WPP_RECORDER_SF_DDD(
                *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
                v18,
                14,
                v15,
                (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
                *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
                *(_DWORD *)(v4 + 64));
            }
            return (unsigned int)-1073741670;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v11) = 5;
            WPP_RECORDER_SF_DDD(
              *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
              v11,
              14,
              39,
              (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
              *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
              *(_DWORD *)(v4 + 64));
          }
          v12 = *(_QWORD *)(v4 + 120);
          v13 = *(unsigned int *)(a1 + 104);
          *(_QWORD *)(a1 + 80) = v12;
          v14 = *(_QWORD *)(v1 + 40);
          *(_QWORD *)v12 = 0LL;
          *(_WORD *)(v12 + 10) = 0;
          *(_DWORD *)(v12 + 40) = v13;
          *(_QWORD *)(v12 + 32) = v14 & 0xFFFFFFFFFFFFF000uLL;
          *(_WORD *)(v12 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + v13 + 4095) >> 12) + 6);
          *(_DWORD *)(v12 + 44) = v14 & 0xFFF;
        }
        MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 80));
        return v2;
      }
    }
    v7 = *(_QWORD *)(v1 + 40);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 88) = v7;
      return v2;
    }
    v16 = *(_QWORD *)(v1 + 48);
    if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
      v17 = *(PVOID *)(v16 + 24);
    else
      v17 = MmMapLockedPagesSpecifyCache(
              (PMDL)v16,
              0,
              MmCached,
              0LL,
              0,
              LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) | 0x40000010u);
    *(_QWORD *)(a1 + 88) = v17;
    if ( !v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 38;
        goto LABEL_33;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
