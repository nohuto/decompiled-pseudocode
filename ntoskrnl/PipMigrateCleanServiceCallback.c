/*
 * XREFs of PipMigrateCleanServiceCallback @ 0x140B911A0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegDeleteTree @ 0x14081B6AC (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14081D44C (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCloseKey @ 0x1408653B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMigrateCleanServiceCallback(__int64 a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rbx
  __int64 v5; // rcx
  int v6; // esi
  int v7; // edi
  int v9; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-1Ch] BYREF
  int v11; // [rsp+48h] [rbp-18h] BYREF
  int v12; // [rsp+4Ch] [rbp-14h] BYREF
  int v13; // [rsp+50h] [rbp-10h] BYREF
  void *v14; // [rsp+58h] [rbp-8h] BYREF

  v14 = 0LL;
  v9 = 0;
  Pool2 = 0LL;
  v12 = 0;
  v13 = 0;
  v11 = 0;
  if ( (int)PnpCtxRegOpenKey(a1, a2, a3, 0, 0xF003Fu, (__int64)&v14) >= 0 )
  {
    v10 = 4;
    if ( (int)PnpCtxRegQueryValue(v5, v14, L"Clean", &v9, &v11, &v10) >= 0 && v9 == 4 && v10 == 4 )
    {
      if ( v11 )
      {
        if ( (int)PnpCtxRegQueryInfoKey(v5, (int)v14, (int)&v12, (int)&v13, 0LL, 0LL, 0LL) >= 0 )
        {
          if ( v12 )
          {
            v6 = v13 + 1;
            Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v13 + 1), 0x6E697050u);
            if ( Pool2 )
            {
              v7 = 0;
              while ( 1 )
              {
                v9 = v6;
                if ( (int)PnpCtxRegEnumKey(v5, v14) < 0 )
                  break;
                if ( (int)PnpCtxRegDeleteTree(a1, (__int64)v14, (__int64)Pool2) >= 0 )
                  v7 = 0;
                else
                  ++v7;
              }
            }
          }
        }
      }
    }
  }
  if ( v14 )
    PnpCtxRegCloseKey(v5, v14);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
