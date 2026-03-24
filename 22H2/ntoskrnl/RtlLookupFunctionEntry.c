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

unsigned int *__fastcall RtlLookupFunctionEntry(unsigned __int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int *v9; // r10
  unsigned int *result; // rax
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int *v17; // rsi
  __int64 v18; // r8
  unsigned __int128 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r11
  unsigned int *v23; // r10
  int v24; // r8d
  int i; // r9d
  int v26; // eax
  __int64 v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int *)a3;
  if ( !a3 )
    goto LABEL_29;
  if ( *(_BYTE *)(a3 + 7) )
  {
    *(_BYTE *)(a3 + 7) = 0;
    result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 8];
    if ( result )
    {
      v27 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 6];
      if ( a1 >= v27 + (unsigned __int64)*result && a1 < v27 + (unsigned __int64)result[1] )
      {
        *a2 = v27;
        return result;
      }
    }
  }
  if ( !*(_BYTE *)(a3 + 6) )
    goto LABEL_29;
  if ( a1 >= qword_140E01950
    || a1 < qword_140E01948
    || (v7 = *(unsigned __int8 *)(a3 + 5),
        a3 = (unsigned int)RtlpUnwindHistoryTable[0],
        v8 = v7,
        v7 >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( a1 >= *((_QWORD *)v4 + 1) && a1 < *((_QWORD *)v4 + 2) )
    {
      v11 = *((unsigned __int8 *)v4 + 4);
      a4 = *((unsigned __int8 *)v4 + 4);
      if ( v11 < *v4 )
      {
        while ( 1 )
        {
          a3 = *(_QWORD *)&v4[4 * (unsigned int)a4 + 6];
          v12 = *(unsigned int **)&v4[4 * (unsigned int)a4 + 8];
          if ( a1 >= a3 + (unsigned __int64)*v12 && a1 < a3 + (unsigned __int64)v12[1] )
            break;
          a4 = (unsigned int)(a4 + 1);
          if ( (unsigned int)a4 >= *v4 )
            goto LABEL_29;
        }
        *((_BYTE *)v4 + 4) = v11 + 1;
        *a2 = a3;
        return (unsigned int *)RtlpConvertFunctionEntry(v12, a3);
      }
    }
LABEL_29:
    v29 = 0LL;
    v28 = 0LL;
    if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    {
      v17 = (unsigned int *)RtlpxLookupFunctionTable(a1, (unsigned __int64)&v28, a3, a4);
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
      *a2 = *((_QWORD *)&v28 + 1);
      v20 = *((_QWORD *)&v19 + 1) >> 3;
      if ( (_DWORD)v20 )
      {
        v21 = a1 - v18;
        v22 = v17[3 * (unsigned int)(v20 - 1)];
        v23 = &v17[3 * (unsigned int)(v20 - 1)];
        if ( v21 < v22 )
        {
          v24 = v20 - 2;
          for ( i = 0; v24 >= i; LODWORD(v22) = *v23 )
          {
            v26 = (i + v24) >> 1;
            v23 = &v17[3 * v26];
            if ( v21 < *v23 )
            {
              v24 = v26 - 1;
            }
            else
            {
              LODWORD(v22) = *v23;
              if ( v21 < v23[3] )
                break;
              i = v26 + 1;
            }
          }
        }
        if ( v21 >= (unsigned int)v22 && v21 < v23[1] )
          v13 = v23;
      }
      if ( v13 )
      {
        if ( v4 )
        {
          if ( !*((_BYTE *)v4 + 6) )
          {
            v14 = *v4;
            if ( (unsigned int)v14 < 0xC )
            {
              *v4 = v14 + 1;
              *(_QWORD *)&v4[4 * v14 + 6] = *a2;
              *(_QWORD *)&v4[4 * (unsigned int)v14 + 8] = v13;
              v15 = *a2 + *v13;
              v16 = *a2 + v13[1];
              if ( v15 < *((_QWORD *)v4 + 1) )
                *((_QWORD *)v4 + 1) = v15;
              if ( v16 > *((_QWORD *)v4 + 2) )
                *((_QWORD *)v4 + 2) = v16;
            }
          }
        }
      }
    }
    return (unsigned int *)RtlpConvertFunctionEntry(v13, *a2);
  }
  while ( 1 )
  {
    v9 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v8 + 8];
    a4 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v8 + 6];
    if ( a1 >= a4 + (unsigned __int64)*v9 && a1 < a4 + (unsigned __int64)v9[1] )
      break;
    if ( ++v8 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v8 + 8];
  *((_BYTE *)v4 + 5) = v7 + 1;
  *a2 = a4;
  return result;
}
