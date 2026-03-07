__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  int v6; // r15d
  __int64 v10; // rsi
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // dl
  int v16; // ecx
  bool v17; // dl
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v10 = *((_QWORD *)a1 + 5028) + 1616LL * (*(_DWORD *)(a2 + 68) & 0x3F);
  v12 = -1071775488;
  if ( *(_DWORD *)(v10 + 32) )
  {
    while ( 1 )
    {
      v13 = (unsigned int)(v6 + *(_DWORD *)(v10 + 28));
      if ( a6 != -1
        && (_DWORD)v13 != (unsigned int)VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(
                                          a1,
                                          *(_DWORD *)(a2 + 68) & 0x3F,
                                          a5) )
      {
        goto LABEL_4;
      }
      LOBYTE(v23) = a4;
      v12 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v13, a3, v23);
      if ( (v12 & 0x80000000) != 0 )
        goto LABEL_4;
      v15 = *(_BYTE *)(v10 + 444);
      if ( (v15 & 0xA) == 0 )
        goto LABEL_7;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
      if ( (*(_DWORD *)(v14 + 80) & 1) == 0 )
        goto LABEL_7;
      if ( (**(_DWORD **)(a2 + 536) & 0x8000) == 0 )
        break;
      if ( !a4 )
      {
LABEL_8:
        if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 36) || (**(_DWORD **)(a2 + 536) & 0x8000) == 0 )
        {
          v17 = ((a3 - 3) & 0xFFFFFFFA) == 0
             && a3 != 8
             && ((v16 = **(_DWORD **)(a2 + 536), (v16 & 0x20000000) == 0) || v16 >= 0)
             && (v16 & 0x80000) == 0;
          v18 = a6;
          LOBYTE(v18) = 1;
          v19 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
          LOBYTE(v23) = v17;
          v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned int, __int64))(*(_QWORD *)v19 + 16LL))(
                  v19,
                  a2,
                  v18,
                  0LL,
                  v23,
                  a3,
                  a6);
LABEL_16:
          v12 = v20;
          if ( v20 >= 0 )
            return v12;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      if ( (v15 & 0x10) != 0 )
        break;
LABEL_31:
      if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 36) )
      {
LABEL_35:
        v22 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
        v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 80LL))(v22, a2);
        goto LABEL_16;
      }
LABEL_32:
      v12 = -1071775488;
LABEL_33:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
LABEL_4:
      if ( (unsigned int)++v6 >= *(_DWORD *)(v10 + 32) )
        return v12;
    }
    v13 = *(unsigned __int16 *)(v10 + 36);
LABEL_7:
    if ( !a4 )
      goto LABEL_8;
    if ( (v15 & 0x10) != 0 )
      goto LABEL_35;
    goto LABEL_31;
  }
  return v12;
}
