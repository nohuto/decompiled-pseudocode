/*
 * XREFs of HalpCollectPmcCounters @ 0x140453010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCollectPmcCounters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v6; // r10
  int v7; // r11d
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 **v17; // rdi
  __int64 *v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r9
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int16 v28; // [rsp+0h] [rbp-8h]

  if ( !a1 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    v16 = 3 * v2;
    result = HalpCounterSetInfo;
    v17 = (__int64 **)(HalpCounterSetInfo + 8 * v16);
    _disable();
    v18 = *v17;
    v7 = v28 & 0x200;
    while ( 1 )
    {
      if ( v18 == (__int64 *)v17 )
        goto LABEL_33;
      v19 = 0LL;
      if ( *((_DWORD *)v18 + 5) )
        break;
LABEL_31:
      v18 = (__int64 *)*v18;
    }
    while ( 1 )
    {
      v20 = 5 * v19;
      v21 = HIDWORD(v18[5 * v19 + 5]);
      if ( !v21 )
        break;
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          break;
        v23 = __readmsr(v18[5 * v19 + 6]);
        LODWORD(v24) = HIDWORD(v23);
        v23 = (unsigned int)v23;
        v24 = (unsigned int)v24;
      }
      else
      {
        v23 = __readpmc(v18[5 * v19 + 6]);
        LODWORD(v24) = HIDWORD(v23);
        v23 = (unsigned int)v23;
        v24 = (unsigned int)v24;
      }
      v25 = (v24 << 32) | v23;
LABEL_27:
      v26 = v18[5 * v19 + 7];
      if ( v26 < 0x40 )
        v27 = (1LL << v26) - 1;
      else
        v27 = -1LL;
      v19 = (unsigned int)(v19 + 1);
      result = v27 & (v25 - v18[v20 + 3]);
      v18[v20 + 3] = v25;
      v18[v20 + 4] += result;
      if ( (unsigned int)v19 >= *((_DWORD *)v18 + 5) )
        goto LABEL_31;
    }
    v25 = 0LL;
    goto LABEL_27;
  }
  result = (__int64)&HalpSampleProfilingCounters;
  if ( (_UNKNOWN *)a1 == &HalpSampleProfilingCounters )
    return result;
  _disable();
  v6 = 0LL;
  v7 = v28 & 0x200;
  if ( *(_DWORD *)(a1 + 20) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 40 * v6 + 44);
      if ( !v8 )
        break;
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          break;
        v10 = __readmsr(*(_DWORD *)(a1 + 40 * v6 + 48));
        LODWORD(v11) = HIDWORD(v10);
        v10 = (unsigned int)v10;
        v11 = (unsigned int)v11;
      }
      else
      {
        v10 = __readpmc(*(_DWORD *)(a1 + 40 * v6 + 48));
        LODWORD(v11) = HIDWORD(v10);
        v10 = (unsigned int)v10;
        v11 = (unsigned int)v11;
      }
      v12 = v10 | (v11 << 32);
LABEL_11:
      v13 = *(_DWORD *)(a1 + 40 * v6 + 56);
      if ( v13 < 0x40 )
        v14 = (1LL << v13) - 1;
      else
        v14 = -1LL;
      v15 = v14 & (v12 - *(_QWORD *)(a1 + 40 * v6 + 24));
      *(_QWORD *)(a1 + 40 * v6 + 24) = v12;
      result = v15 + *(_QWORD *)(a1 + 40 * v6 + 32);
      *(_QWORD *)(a1 + 40 * v6 + 32) = result;
      if ( a2 )
        *(_QWORD *)(a2 + 8 * v6) = result;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 20) )
        goto LABEL_33;
    }
    v12 = 0LL;
    goto LABEL_11;
  }
LABEL_33:
  if ( v7 )
    _enable();
  return result;
}
