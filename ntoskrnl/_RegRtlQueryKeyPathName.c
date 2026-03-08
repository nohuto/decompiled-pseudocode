/*
 * XREFs of _RegRtlQueryKeyPathName @ 0x14085E3CC
 * Callers:
 *     _PnpCtxRegQueryKeyPathName @ 0x1408563D8 (_PnpCtxRegQueryKeyPathName.c)
 * Callees:
 *     RtlULongSub @ 0x1402FD448 (RtlULongSub.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryObject @ 0x140412510 (ZwQueryObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _RegRtlIsPredefinedKey @ 0x1406D44BC (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140858A9C (_RegRtlOpenPredefinedKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryKeyPathName(__int64 a1, const void **a2, unsigned int *a3)
{
  HANDLE v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  const void **v8; // r13
  HANDLE v9; // rcx
  ULONG v10; // r9d
  NTSTATUS v11; // eax
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v16; // ecx
  const void **Pool2; // rsi
  NTSTATUS v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r14d
  ULONG pulResult; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  ULONG ulMinuend; // [rsp+98h] [rbp+48h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  pulResult = 0;
  ulMinuend = 0;
  v5 = (HANDLE)a1;
  if ( !RegRtlIsPredefinedKey(a1) || (v12 = RegRtlOpenPredefinedKey(v6, &Handle), v12 >= 0) )
  {
    v7 = 2LL * *a3;
    if ( v7 > 0xFFFFFFFF )
    {
      v12 = -1073741675;
      goto LABEL_10;
    }
    v8 = (const void **)&v23;
    v9 = v5;
    v10 = 16;
    if ( (unsigned int)v7 >= 0x10 )
    {
      v8 = a2;
      v10 = 2 * *a3;
    }
    if ( Handle )
      v9 = Handle;
    v11 = ZwQueryObject(v9, ObjectNameInformation, v8, v10, &ulMinuend);
    v12 = v11;
    if ( !v11 )
    {
      v13 = *(unsigned __int16 *)v8;
      v14 = v13 + 2;
      *a3 = (v13 + 2) >> 1;
      if ( (unsigned int)v7 >= v13 + 2 )
      {
        memmove(a2, v8[1], v13);
        *((_WORD *)a2 + ((unsigned __int64)v14 >> 1) - 1) = 0;
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    if ( v11 == -1073741820 )
    {
      v12 = RtlULongSub(ulMinuend, 0x10u, &pulResult);
      if ( v12 >= 0 )
      {
        if ( (unsigned int)v7 < pulResult )
        {
          *a3 = pulResult >> 1;
LABEL_17:
          v12 = -1073741789;
          goto LABEL_10;
        }
        Pool2 = (const void **)ExAllocatePool2(256LL, v16, 1279739218LL);
        if ( Pool2 )
        {
          if ( Handle )
            v5 = Handle;
          v18 = ZwQueryObject(v5, ObjectNameInformation, Pool2, ulMinuend, &ulMinuend);
          v12 = v18;
          if ( v18 >= 0 )
          {
            if ( v18 )
            {
              v12 = -1073741595;
            }
            else
            {
              v19 = *(unsigned __int16 *)Pool2;
              v20 = v19 + 2;
              *a3 = (v19 + 2) >> 1;
              if ( (unsigned int)v7 < v19 + 2 )
              {
                v12 = -1073741789;
              }
              else
              {
                memmove(a2, Pool2[1], v19);
                *((_WORD *)a2 + ((unsigned __int64)v20 >> 1) - 1) = 0;
              }
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          v12 = -1073741801;
        }
      }
    }
    else if ( v11 >= 0 )
    {
      v12 = -1073741595;
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
