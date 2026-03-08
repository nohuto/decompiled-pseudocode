/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1405FDF10
 * Callers:
 *     <none>
 * Callees:
 *     KeTestSpinLock @ 0x1402053F0 (KeTestSpinLock.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int128 *v4; // rdi
  LARGE_INTEGER *v6; // rcx
  char *v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edx

  v4 = (__int128 *)ReasonSpecificData[6];
  *((_DWORD *)ReasonSpecificData + 10) = 0;
  *((_OWORD *)ReasonSpecificData + 1) = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    ReasonSpecificData[6] = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v8 = *(unsigned __int16 *)v4;
    v7 = (char *)v4 + 8;
    v9 = *((_QWORD *)v4 + 1);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * *(unsigned __int16 *)v4);
      v11 = *(_DWORD **)v7;
      if ( *(_DWORD *)(v9 + 8) <= **(_DWORD **)v7 )
        *(_DWORD *)(*(_QWORD *)v7 + 48LL) = v11[2];
      else
        v11[12] = v11[1];
      *((_DWORD *)ReasonSpecificData + 10) = *(_DWORD *)(*(_QWORD *)v7 + 48LL);
      if ( *((_DWORD *)ReasonSpecificData + 2) )
        ReasonSpecificData[4] = *(_QWORD *)v7;
      v19 = *(_QWORD *)(*(_QWORD *)v7 + 56LL);
      v20 = v19 - 56;
      if ( v19 == v10 + 80 )
        v20 = 0LL;
      *(_QWORD *)v7 = v20;
      v18 = v20 == 0;
LABEL_29:
      if ( v18 )
        ++*(_WORD *)v4;
    }
    else
    {
      while ( v8 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * (unsigned __int16)v8);
        if ( (v12 & 1) == 0
          && *(int *)(v12 + 12) < 0
          && (*(_DWORD *)(v12 + 300) & 1) == 0
          && KeTestSpinLock((PKSPIN_LOCK)(v12 + 696)) )
        {
          v13 = *(unsigned __int16 *)(v12 + 136) + 48;
          *((_DWORD *)ReasonSpecificData + 10) = v13;
          if ( !*((_DWORD *)ReasonSpecificData + 2) )
            goto LABEL_20;
          if ( v13 <= *((_DWORD *)ReasonSpecificData + 3) )
          {
            v15 = *ReasonSpecificData;
            *(_DWORD *)v15 = 32223201;
            *(_DWORD *)(v15 + 4) = *(_DWORD *)v12;
            *(_DWORD *)(v15 + 16) = *(_DWORD *)(v12 + 4);
            *(_DWORD *)(v15 + 12) = *(_DWORD *)(v12 + 200);
            *(_QWORD *)(v15 + 24) = *(_QWORD *)(v12 + 792);
            *(_DWORD *)(v15 + 8) = *(_DWORD *)(v12 + 12);
            *(_DWORD *)(v15 + 20) = *(unsigned __int16 *)(v12 + 136);
            *(_OWORD *)(v15 + 32) = *(_OWORD *)(v12 + 304);
            memmove((void *)(v15 + 48), *(const void **)(v12 + 144), *(unsigned __int16 *)(v12 + 136));
            ReasonSpecificData[4] = *ReasonSpecificData;
            *((_DWORD *)ReasonSpecificData + 10) = v13;
            *((_DWORD *)ReasonSpecificData + 2) = v13;
LABEL_20:
            v16 = *(_QWORD *)(v12 + 80);
            v17 = v16 - 56;
            if ( v16 == v12 + 80 )
              v17 = 0LL;
            *(_QWORD *)v7 = v17;
            v18 = v17 == 0;
            goto LABEL_29;
          }
        }
        v14 = *(_WORD *)v4 + 1;
        v8 = v14;
        *(_WORD *)v4 = v14;
      }
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 32;
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      v6 = (LARGE_INTEGER *)*ReasonSpecificData;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = NtBuildNumber;
      ReasonSpecificData[4] = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 32;
      *((_DWORD *)ReasonSpecificData + 2) = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    v7 = (char *)v4 + 8;
  }
  v21 = *((_DWORD *)ReasonSpecificData + 14);
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *((_DWORD *)ReasonSpecificData + 14) = v21 & 0xFFFFFFFE;
    *(_QWORD *)v7 = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 14) = v21 | 1;
  }
}
