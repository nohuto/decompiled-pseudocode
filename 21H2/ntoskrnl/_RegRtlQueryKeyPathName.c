/*
 * XREFs of _RegRtlQueryKeyPathName @ 0x1407D21D8
 * Callers:
 *     _PnpCtxRegQueryKeyPathName @ 0x1407A32A0 (_PnpCtxRegQueryKeyPathName.c)
 * Callees:
 *     RtlULongSub @ 0x14020DD44 (RtlULongSub.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryObject @ 0x1403FA780 (ZwQueryObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407CDC04 (_RegRtlOpenPredefinedKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryKeyPathName(__int64 a1, const void **a2, unsigned int *a3)
{
  HANDLE v5; // r14
  unsigned __int64 v6; // rdi
  const void **v7; // r13
  ULONG v8; // r9d
  HANDLE v9; // rcx
  NTSTATUS v10; // eax
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v15; // ecx
  const void **PoolWithTag; // rsi
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
    v8 = 16;
    v9 = v5;
    if ( (unsigned int)v6 >= 0x10 )
    {
      v7 = a2;
      v8 = 2 * *a3;
    }
    if ( Handle )
      v9 = Handle;
    v10 = ZwQueryObject(v9, ObjectNameInformation, v7, v8, &ulMinuend);
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
        PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v15, 0x4C474552u);
        if ( PoolWithTag )
        {
          if ( Handle )
            v5 = Handle;
          v17 = ZwQueryObject(v5, ObjectNameInformation, PoolWithTag, ulMinuend, &ulMinuend);
          v11 = v17;
          if ( v17 >= 0 )
          {
            if ( v17 )
            {
              v11 = -1073741595;
            }
            else
            {
              v18 = *(unsigned __int16 *)PoolWithTag;
              v19 = v18 + 2;
              *a3 = (v18 + 2) >> 1;
              if ( (unsigned int)v6 < v18 + 2 )
              {
                v11 = -1073741789;
              }
              else
              {
                memmove(a2, PoolWithTag[1], v18);
                *((_WORD *)a2 + ((unsigned __int64)v19 >> 1) - 1) = 0;
              }
            }
          }
          ExFreePoolWithTag(PoolWithTag, 0);
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
