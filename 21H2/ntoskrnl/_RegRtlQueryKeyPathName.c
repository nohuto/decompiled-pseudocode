/*
 * XREFs of _RegRtlQueryKeyPathName @ 0x1408621F8
 * Callers:
 *     _PnpCtxRegQueryKeyPathName @ 0x14085C144 (_PnpCtxRegQueryKeyPathName.c)
 * Callees:
 *     RtlULongSub @ 0x14024F418 (RtlULongSub.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryObject @ 0x14041B960 (ZwQueryObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     _RegRtlOpenPredefinedKey @ 0x14085D278 (_RegRtlOpenPredefinedKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RegRtlQueryKeyPathName(__int64 a1, const void **a2, unsigned int *a3)
{
  HANDLE v5; // r14
  unsigned __int64 v6; // rdi
  const void **v7; // r13
  HANDLE v8; // rcx
  ULONG v9; // r9d
  NTSTATUS v10; // eax
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v15; // ecx
  const void **Pool2; // rsi
  NTSTATUS v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r14d
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  ULONG ulMinuend; // [rsp+90h] [rbp+40h] BYREF
  ULONG pulResult; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  pulResult = 0;
  ulMinuend = 0;
  v5 = (HANDLE)a1;
  v21 = 0LL;
  if ( (unsigned __int64)(a1 - 0x80000000LL) > 7 || (v11 = RegRtlOpenPredefinedKey(a1, &Handle), v11 >= 0) )
  {
    v6 = 2LL * *a3;
    if ( v6 > 0xFFFFFFFF )
    {
      v11 = -1073741675;
      goto LABEL_10;
    }
    v7 = (const void **)&v21;
    v8 = v5;
    v9 = 16;
    if ( (unsigned int)v6 >= 0x10 )
    {
      v7 = a2;
      v9 = 2 * *a3;
    }
    if ( Handle )
      v8 = Handle;
    v10 = ZwQueryObject(v8, ObjectNameInformation, v7, v9, &ulMinuend);
    v11 = v10;
    if ( !v10 )
    {
      v12 = *(unsigned __int16 *)v7;
      v13 = v12 + 2;
      *a3 = (v12 + 2) >> 1;
      if ( (unsigned int)v6 >= v12 + 2 )
      {
        memmove(a2, v7[1], v12);
        *((_WORD *)a2 + ((unsigned __int64)v13 >> 1) - 1) = 0;
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    if ( v10 == -1073741820 )
    {
      v11 = RtlULongSub(ulMinuend, 0x10u, &pulResult);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v6 < pulResult )
        {
          *a3 = pulResult >> 1;
LABEL_17:
          v11 = -1073741789;
          goto LABEL_10;
        }
        Pool2 = (const void **)ExAllocatePool2(256LL, v15, 1279739218LL);
        if ( Pool2 )
        {
          if ( Handle )
            v5 = Handle;
          v17 = ZwQueryObject(v5, ObjectNameInformation, Pool2, ulMinuend, &ulMinuend);
          v11 = v17;
          if ( v17 >= 0 )
          {
            if ( v17 )
            {
              v11 = -1073741595;
            }
            else
            {
              v18 = *(unsigned __int16 *)Pool2;
              v19 = v18 + 2;
              *a3 = (v18 + 2) >> 1;
              if ( (unsigned int)v6 < v18 + 2 )
              {
                v11 = -1073741789;
              }
              else
              {
                memmove(a2, Pool2[1], v18);
                *((_WORD *)a2 + ((unsigned __int64)v19 >> 1) - 1) = 0;
              }
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          v11 = -1073741801;
        }
      }
    }
    else if ( v10 >= 0 )
    {
      v11 = -1073741595;
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
