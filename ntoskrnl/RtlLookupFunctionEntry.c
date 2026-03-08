/*
 * XREFs of RtlLookupFunctionEntry @ 0x140281130
 * Callers:
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     RtlpSameFunction @ 0x1405AF5A0 (RtlpSameFunction.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140973330 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     RtlInitializeHistoryTable @ 0x140B687EC (RtlInitializeHistoryTable.c)
 *     RtlpInitMachineFrameEntries @ 0x140B704B8 (RtlpInitMachineFrameEntries.c)
 *     KiInitDynamicTraceSupport @ 0x140B724AC (KiInitDynamicTraceSupport.c)
 * Callees:
 *     RtlpConvertFunctionEntry @ 0x1402822F0 (RtlpConvertFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1402CB3A0 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

unsigned int *__fastcall RtlLookupFunctionEntry(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  __int64 v9; // r9
  unsigned int *result; // rax
  __int64 v11; // rdi
  unsigned int *v12; // rbp
  __int64 v13; // r8
  unsigned __int128 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r11
  unsigned int *v18; // r10
  int v19; // r8d
  int i; // r9d
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  __int64 v29; // rdx
  unsigned int *v30; // rcx
  int *v31; // rdx
  __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+30h] [rbp-18h]

  if ( !a3 )
    goto LABEL_10;
  if ( *((_BYTE *)a3 + 7) )
  {
    *((_BYTE *)a3 + 7) = 0;
    v31 = &RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01955];
    result = (unsigned int *)*((_QWORD *)v31 + 4);
    if ( result )
    {
      v32 = *((_QWORD *)v31 + 3);
      if ( a1 >= v32 + (unsigned __int64)*result && a1 < v32 + (unsigned __int64)result[1] )
      {
        *a2 = v32;
        return result;
      }
    }
  }
  if ( !*((_BYTE *)a3 + 6) )
    goto LABEL_10;
  if ( a1 >= qword_140E01960
    || a1 < qword_140E01958
    || (v6 = *((unsigned __int8 *)a3 + 5), v7 = v6, v6 >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_35:
    if ( a1 >= *((_QWORD *)a3 + 1) && a1 < *((_QWORD *)a3 + 2) )
    {
      v27 = *((unsigned __int8 *)a3 + 4);
      v28 = v27;
      if ( v27 < *a3 )
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)&a3[4 * v28 + 6];
          v30 = *(unsigned int **)&a3[4 * v28 + 8];
          if ( a1 >= v29 + (unsigned __int64)*v30 && a1 < v29 + (unsigned __int64)v30[1] )
            break;
          if ( ++v28 >= *a3 )
            goto LABEL_10;
        }
        *((_BYTE *)a3 + 4) = v27 + 1;
        *a2 = v29;
        return (unsigned int *)RtlpConvertFunctionEntry();
      }
    }
LABEL_10:
    v34 = 0LL;
    v33 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_140E00030 + 1)
      || a1 >= *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
    {
      v11 = RtlpxLookupFunctionTable(a1, &v33);
    }
    else
    {
      v11 = xmmword_140E00030;
      v33 = xmmword_140E00030;
      v34 = qword_140E00040;
    }
    v12 = 0LL;
    if ( !v11 )
      return 0LL;
    v13 = *((_QWORD *)&v33 + 1);
    v14 = HIDWORD(v34) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    *a2 = *((_QWORD *)&v33 + 1);
    v15 = *((_QWORD *)&v14 + 1) >> 3;
    if ( (_DWORD)v15 )
    {
      v16 = a1 - v13;
      v17 = *(unsigned int *)(v11 + 12LL * (unsigned int)(v15 - 1));
      v18 = (unsigned int *)(v11 + 12LL * (unsigned int)(v15 - 1));
      if ( v16 < v17 )
      {
        v19 = v15 - 2;
        for ( i = 0; v19 >= i; LODWORD(v17) = *v18 )
        {
          v21 = (i + v19) >> 1;
          v18 = (unsigned int *)(v11 + 12LL * v21);
          if ( v16 < *v18 )
          {
            v19 = v21 - 1;
          }
          else
          {
            LODWORD(v17) = *v18;
            if ( v16 < v18[3] )
              break;
            i = v21 + 1;
          }
        }
      }
      if ( v16 >= (unsigned int)v17 && v16 < v18[1] )
        v12 = v18;
    }
    if ( v12 )
    {
      if ( a3 )
      {
        if ( !*((_BYTE *)a3 + 6) )
        {
          v22 = *a3;
          if ( (unsigned int)v22 < 0xC )
          {
            *a3 = v22 + 1;
            *(_QWORD *)&a3[4 * v22 + 6] = *a2;
            *(_QWORD *)&a3[4 * (unsigned int)v22 + 8] = v12;
            v23 = *a2 + *v12;
            v24 = *a2 + v12[1];
            if ( v23 < *((_QWORD *)a3 + 1) )
              *((_QWORD *)a3 + 1) = v23;
            if ( v24 > *((_QWORD *)a3 + 2) )
            {
              *((_QWORD *)a3 + 2) = v24;
              v25 = v12;
              goto LABEL_32;
            }
          }
        }
      }
    }
    v25 = v12;
    if ( v12 )
    {
LABEL_32:
      v26 = v12[2];
      if ( (v26 & 1) != 0 )
      {
        v25 = (unsigned int *)(v26 + *a2 - 1LL);
        if ( *a2 <= 0x7FFFFFFEFFFFuLL && ((unsigned __int8)v25 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v25;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( a1 >= v9 + (unsigned __int64)*v8 && a1 < v9 + (unsigned __int64)v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_35;
  }
  result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
  *((_BYTE *)a3 + 5) = v6 + 1;
  *a2 = v9;
  return result;
}
