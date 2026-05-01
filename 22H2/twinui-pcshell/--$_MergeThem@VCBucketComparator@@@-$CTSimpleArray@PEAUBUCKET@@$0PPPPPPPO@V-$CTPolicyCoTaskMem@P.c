/*
 * XREFs of ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1804F6B2C
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1804F6A68 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x1804F6C9C (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

void *__fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  char *v7; // rbp
  CBucketComparator *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  struct BUCKET *v11; // r14
  char *v12; // rbp
  struct BUCKET *v13; // r15
  void *result; // rax
  char v15; // r10
  struct BUCKET **v16; // r11
  CBucketComparator *v17; // [rsp+60h] [rbp+8h]
  char *v18; // [rsp+68h] [rbp+10h]

  v5 = a4 >> 1;
  v7 = (char *)(*(_QWORD *)a1 + 8 * a3);
  v18 = v7;
  memcpy_0(*(void **)(a1 + 16), v7, 8 * (a4 >> 1));
  v8 = 0LL;
  v9 = 0LL;
  v10 = v5;
  do
  {
    v11 = *(struct BUCKET **)&v7[8 * v10];
    v12 = (char *)v8 + 1;
    v17 = (CBucketComparator *)((char *)v8 + 1);
    v13 = *(struct BUCKET **)(*(_QWORD *)(a1 + 16) + 8 * v9);
    result = (void *)CBucketComparator::Compare(v8, v13, v11);
    if ( (int)result <= 0 )
    {
      ++v9;
      *v16 = v13;
      if ( v9 == v5 )
        v15 = 1;
    }
    else
    {
      *v16 = v11;
      if ( ++v10 == a4 )
      {
        result = memcpy_0(&v18[8 * (_QWORD)v12], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9), 8 * (a4 - (_QWORD)v12));
        v15 = 1;
      }
    }
    v7 = v18;
    v8 = v17;
  }
  while ( !v15 );
  return result;
}
