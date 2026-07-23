/*
 * XREFs of RtlpFcUpdateFeatureConfiguration @ 0x14091A644
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpFcApplyUpdateAndAddFeature @ 0x140919D58 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919E88 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCompareFeatureToUpdate @ 0x14091A11C (RtlpFcCompareFeatureToUpdate.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14091A1C0 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 */

NTSTATUS __fastcall RtlpFcUpdateFeatureConfiguration(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        size_t a4,
        void *a5,
        size_t *a6)
{
  NTSTATUS result; // eax
  _DWORD *v10; // rsi
  size_t v11; // r8
  unsigned __int64 v12; // rbx
  size_t v13; // rbp
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 *v17; // r14
  _DWORD *v18; // r15
  int v19; // eax
  __int64 v20; // r8
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  size_t v24; // rdi
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  Size = 0LL;
  qsort(a3, a4, 0x20uLL, (int (__cdecl *)(const void *, const void *))RtlpFcCompareUpdates);
  if ( !RtlpFcAreSortedFeatureUpdatesValid(a3, a4) )
    return -1073741811;
  result = RtlpFcCalculateRequiredSizeForNewFeatureTable(a1, (__int64)a3, a4, &Size);
  if ( result >= 0 )
  {
    if ( !Size )
    {
      *a6 = 0LL;
      return result;
    }
    if ( Size > *a6 )
    {
      *a6 = Size;
      return -2147483643;
    }
    v10 = a5;
    memset(a5, 0, Size);
    *v10 = 0;
    v11 = (size_t)(v10 + 1);
    v12 = 0LL;
    Size = (size_t)(v10 + 1);
    v13 = 0LL;
    if ( a1 )
    {
      v14 = (unsigned int)*a1;
      v15 = a1 + 1;
      if ( (_DWORD)v14 )
      {
        LODWORD(v16) = *a1;
        v17 = (__int64 *)(a1 + 1);
        v18 = a3;
        while ( 1 )
        {
          v14 = (unsigned int)v16;
          if ( v13 >= a4 )
          {
LABEL_19:
            v15 = a1 + 1;
            break;
          }
          v19 = RtlpFcCompareFeatureToUpdate(v17, v18);
          if ( v19 )
          {
            if ( v19 != 1 )
            {
              ++v12;
              *(_QWORD *)v20 = *v17;
              *(_DWORD *)(v20 + 8) = *((_DWORD *)v17 + 2);
              v11 = v20 + 12;
              ++*v10;
              Size = v11;
              v17 = (__int64 *)((char *)v17 + 12);
              goto LABEL_18;
            }
            RtlpFcCreateAndAddFeatureFromUpdate((__int64)v18);
          }
          else
          {
            RtlpFcApplyUpdateAndAddFeature((__int64)v18, v17);
            ++v12;
            v17 = (__int64 *)((char *)v17 + 12);
          }
          v11 = Size;
          ++v13;
          v18 += 8;
LABEL_18:
          v16 = (unsigned int)*a1;
          v14 = v16;
          if ( v12 >= v16 )
            goto LABEL_19;
        }
      }
      if ( v12 < v14 )
      {
        v21 = &v15[3 * v12];
        do
        {
          ++v12;
          *(_QWORD *)v11 = *(_QWORD *)v21;
          v22 = v21[2];
          v21 += 3;
          *(_DWORD *)(v11 + 8) = v22;
          v11 += 12LL;
          ++*v10;
        }
        while ( v12 < (unsigned int)*a1 );
        Size = v11;
      }
    }
    if ( v13 < a4 )
    {
      v23 = (__int64)&a3[8 * v13];
      v24 = a4 - v13;
      do
      {
        RtlpFcCreateAndAddFeatureFromUpdate(v23);
        v23 += 32LL;
        --v24;
      }
      while ( v24 );
    }
    return 0;
  }
  return result;
}
