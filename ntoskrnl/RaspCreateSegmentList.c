/*
 * XREFs of RaspCreateSegmentList @ 0x1403837AC
 * Callers:
 *     RaspScanConvert @ 0x1403827F0 (RaspScanConvert.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x140382570 (RaspDestroySegmentList.c)
 *     RaspInterpolatePoint @ 0x140383AF4 (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int16 *v8; // r12
  unsigned int v9; // ebp
  int v10; // edx
  unsigned int v11; // r15d
  int v12; // r9d
  _BYTE *v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  void *Memory; // rax
  __int64 v17; // r13
  int v18; // esi
  __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // r10d
  unsigned int v22; // r14d
  unsigned int v23; // r9d
  unsigned int v24; // edx
  int v25; // r8d
  __int64 v26; // rbp
  __int64 v27; // r9
  __int64 v28; // rdx
  bool v29; // zf
  __int64 v30; // rax
  char v31; // al
  unsigned int v32; // ebx
  __int64 result; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-48h]

  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v41 = a3 - 2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a3 == 2 )
    goto LABEL_54;
  v13 = (_BYTE *)(a2 + 16);
  do
  {
    v14 = v12 + 1;
    v15 = v12 + 1;
    if ( v12 == v8[v10] )
    {
      if ( v10 )
        v15 = v8[v10 - 1] + 1;
      else
        v15 = 0;
      ++v10;
    }
    if ( (*v13 & 1) != 0 || (*(_BYTE *)(17LL * v15 + a2 + 16) & 1) == 0 )
      ++v11;
    v13 += 17;
    ++v12;
  }
  while ( v14 < v9 );
  if ( !v11 )
  {
LABEL_54:
    *a4 = 0LL;
    result = 0LL;
LABEL_55:
    *a5 = 0;
    return result;
  }
  Memory = (void *)RaspAllocateMemory(25LL * v11);
  v17 = (__int64)Memory;
  if ( !Memory )
  {
    result = 3221225626LL;
    goto LABEL_55;
  }
  memset(Memory, 0, 25LL * v11);
  v18 = 0;
  v19 = v17 + 16;
  v20 = 0;
  while ( 1 )
  {
    v21 = v20 + 1;
    v22 = v20 + 1;
    v23 = v20 - 1;
    v24 = v20 + 2;
    if ( v20 )
    {
      if ( v18 && v20 == v8[v18 - 1] + 1 )
        v23 = v8[v18];
    }
    else
    {
      v23 = *v8;
    }
    v25 = v8[v18];
    if ( v20 == v25 - 1 )
    {
      if ( v18 )
        v24 = v8[v18 - 1] + 1;
      else
        v24 = 0;
    }
    if ( v20 == v25 )
    {
      if ( v18 )
      {
        v40 = v8[v18 - 1];
        v22 = v40 + 1;
        v24 = v40 + 2;
      }
      else
      {
        v22 = 0;
        v24 = 1;
      }
      ++v18;
    }
    v26 = a2 + 17LL * v20;
    if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
    {
      v27 = a2 + 17LL * v22;
      if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
      {
        *(_QWORD *)(v19 - 16) = v26;
        *(_QWORD *)(v19 - 8) = v27;
        *(_QWORD *)v19 = v27;
        *(_BYTE *)(v19 + 8) = 1;
      }
      else
      {
        v28 = a2 + 17LL * v24;
        v29 = (*(_BYTE *)(v28 + 16) & 1) == 0;
        *(_QWORD *)(v19 - 16) = v26;
        *(_QWORD *)(v19 - 8) = v27;
        if ( v29 )
        {
          v30 = RaspInterpolatePoint(v27, v28, a6);
          *(_QWORD *)v19 = v30;
          if ( !v30 )
            break;
          v21 = v20 + 1;
          v31 = 4;
        }
        else
        {
          *(_QWORD *)v19 = v28;
          v31 = 2;
        }
        *(_BYTE *)(v19 + 8) = v31;
        if ( v22 > v20 )
        {
          v20 = v21;
          if ( v21 == v8[v18] )
            ++v18;
        }
      }
      goto LABEL_24;
    }
    if ( !v20 && (*(_BYTE *)(17LL * v23 + a2 + 16) & 1) != 0
      || v18 && v20 == v8[v18 - 1] + 1 && (*(_BYTE *)(17LL * v23 + a2 + 16) & 1) != 0 )
    {
      goto LABEL_25;
    }
    v34 = a2 + 17LL * v20;
    v35 = a2 + 17LL * v23;
    v36 = a2 + 17LL * v22;
    if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
    {
      v39 = RaspInterpolatePoint(v35, v34, a6);
      *(_QWORD *)(v19 - 16) = v39;
      if ( !v39 )
        break;
      *(_QWORD *)(v19 - 8) = v26;
      *(_QWORD *)v19 = v36;
      *(_BYTE *)(v19 + 8) = 3;
      goto LABEL_24;
    }
    v37 = RaspInterpolatePoint(v35, v34, a6);
    *(_QWORD *)(v19 - 16) = v37;
    if ( !v37 )
      break;
    *(_QWORD *)(v19 - 8) = v26;
    v38 = RaspInterpolatePoint(v26, v36, a6);
    *(_QWORD *)v19 = v38;
    if ( !v38 )
      break;
    *(_BYTE *)(v19 + 8) = 5;
LABEL_24:
    v19 += 25LL;
LABEL_25:
    if ( ++v20 >= v41 )
    {
      v32 = 0;
      goto LABEL_27;
    }
  }
  v32 = -1073741670;
  RaspDestroySegmentList(v17, v11, a6);
  v17 = 0LL;
  v11 = 0;
LABEL_27:
  *a5 = v11;
  result = v32;
  *a4 = v17;
  return result;
}
