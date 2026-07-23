/*
 * XREFs of RtlLookupFunctionEntry @ 0x14033F110
 * Callers:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x14033E580 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     RtlpSameFunction @ 0x140586480 (RtlpSameFunction.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BC9C4 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     KiInitDynamicTraceSupport @ 0x140A4D370 (KiInitDynamicTraceSupport.c)
 *     RtlInitializeHistoryTable @ 0x140A55CFC (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14021EB70 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x14033F450 (RtlpConvertFunctionEntry.c)
 */

PRUNTIME_FUNCTION __cdecl RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned __int64 v3; // r9
  PUNWIND_HISTORY_TABLE v4; // rdi
  unsigned int GlobalHint; // edx
  unsigned int v8; // ecx
  unsigned int *v9; // r10
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // edx
  unsigned int *p_BeginAddress; // rcx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rbp
  __int64 Count; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int *v17; // rsi
  __int64 v18; // r8
  unsigned __int128 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r11
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v23; // r10
  int v24; // r8d
  int i; // r9d
  int v26; // eax
  unsigned __int64 v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+30h] [rbp-18h]

  v4 = HistoryTable;
  if ( !HistoryTable )
    goto LABEL_29;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 8];
    if ( result )
    {
      v27 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 6];
      if ( ControlPc >= v27 + result->BeginAddress && ControlPc < v27 + result->EndAddress )
      {
        *ImageBase = v27;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_29;
  if ( ControlPc >= qword_140E01950
    || ControlPc < qword_140E01948
    || (GlobalHint = HistoryTable->GlobalHint,
        HistoryTable = (PUNWIND_HISTORY_TABLE)(unsigned int)RtlpUnwindHistoryTable[0],
        v8 = GlobalHint,
        GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( ControlPc >= v4->LowAddress && ControlPc < v4->HighAddress )
    {
      LocalHint = v4->LocalHint;
      v3 = v4->LocalHint;
      if ( LocalHint < v4->Count )
      {
        while ( 1 )
        {
          HistoryTable = (PUNWIND_HISTORY_TABLE)v4->Entry[(unsigned int)v3].ImageBase;
          p_BeginAddress = &v4->Entry[(unsigned int)v3].FunctionEntry->BeginAddress;
          if ( ControlPc >= (unsigned __int64)HistoryTable + *p_BeginAddress
            && ControlPc < (unsigned __int64)HistoryTable + p_BeginAddress[1] )
          {
            break;
          }
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= v4->Count )
            goto LABEL_29;
        }
        v4->LocalHint = LocalHint + 1;
        *ImageBase = (unsigned __int64)HistoryTable;
        return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(p_BeginAddress, HistoryTable);
      }
    }
LABEL_29:
    v29 = 0LL;
    v28 = 0LL;
    if ( ControlPc < *(&xmmword_140E00020 + 1) || ControlPc >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    {
      v17 = (unsigned int *)RtlpxLookupFunctionTable(ControlPc, (unsigned __int64)&v28, (__int64)HistoryTable, v3);
    }
    else
    {
      v17 = (unsigned int *)xmmword_140E00020;
      v28 = *(_OWORD *)&xmmword_140E00020;
      v29 = qword_140E00030;
    }
    v13 = 0LL;
    if ( v17 )
    {
      v18 = *((_QWORD *)&v28 + 1);
      v19 = HIDWORD(v29) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v28 + 1);
      v20 = *((_QWORD *)&v19 + 1) >> 3;
      if ( (_DWORD)v20 )
      {
        v21 = ControlPc - v18;
        v22 = v17[3 * (unsigned int)(v20 - 1)];
        v23 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v17[3 * (unsigned int)(v20 - 1)];
        if ( v21 < v22 )
        {
          v24 = v20 - 2;
          for ( i = 0; v24 >= i; LODWORD(v22) = v23->BeginAddress )
          {
            v26 = (i + v24) >> 1;
            v23 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v17[3 * v26];
            if ( v21 < v23->BeginAddress )
            {
              v24 = v26 - 1;
            }
            else
            {
              LODWORD(v22) = v23->BeginAddress;
              if ( v21 < v23[1].BeginAddress )
                break;
              i = v26 + 1;
            }
          }
        }
        if ( v21 >= (unsigned int)v22 && v21 < v23->EndAddress )
          v13 = v23;
      }
      if ( v13 )
      {
        if ( v4 )
        {
          if ( !v4->Search )
          {
            Count = v4->Count;
            if ( (unsigned int)Count < 0xC )
            {
              v4->Count = Count + 1;
              v4->Entry[Count].ImageBase = *ImageBase;
              v4->Entry[(unsigned int)Count].FunctionEntry = v13;
              v15 = *ImageBase + v13->BeginAddress;
              v16 = *ImageBase + v13->EndAddress;
              if ( v15 < v4->LowAddress )
                v4->LowAddress = v15;
              if ( v16 > v4->HighAddress )
                v4->HighAddress = v16;
            }
          }
        }
      }
    }
    return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(v13, *ImageBase);
  }
  while ( 1 )
  {
    v9 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v8 + 8];
    v3 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v8 + 6];
    if ( ControlPc >= v3 + *v9 && ControlPc < v3 + v9[1] )
      break;
    if ( ++v8 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v8 + 8];
  v4->GlobalHint = GlobalHint + 1;
  *ImageBase = v3;
  return result;
}
