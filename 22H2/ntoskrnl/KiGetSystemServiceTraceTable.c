/*
 * XREFs of KiGetSystemServiceTraceTable @ 0x1408BCFD0
 * Callers:
 *     KeSetSystemServiceCallback @ 0x1408BCE20 (KeSetSystemServiceCallback.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x1408BD120 (KiSystemServiceTraceTableCompareFunction.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 KiGetSystemServiceTraceTable()
{
  PVOID PoolWithTag; // rax
  signed __int64 v1; // rdi
  __int64 v2; // r8
  _QWORD *v3; // r15
  __int64 v4; // r12
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rax

  if ( !KiSystemServiceTraceCallbackTable )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7650uLL, 0x7454694Bu);
    v1 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x7650uLL);
      v3 = &off_140988D78;
      v4 = 473LL;
      v5 = v1 + 40;
      do
      {
        *(_DWORD *)(v5 + 12) = *((_DWORD *)v3 - 2);
        v6 = *v3;
        *(_QWORD *)v5 = *v3;
        *(_DWORD *)(v5 + 8) = *((_DWORD *)v3 - 1);
        v7 = *(_QWORD *)v1;
        if ( (*(_BYTE *)(v1 + 8) & 1) != 0 && v7 )
          v7 ^= v1;
        LOBYTE(v2) = 0;
        v8 = *(_BYTE *)(v1 + 8) & 1;
        if ( v7 )
        {
          while ( 1 )
          {
            if ( (int)KiSystemServiceTraceTableCompareFunction(v6, v7, v2) < 0 )
            {
              v9 = *(_QWORD *)v7;
              if ( v8 )
              {
                if ( !v9 )
                  goto LABEL_19;
                v9 ^= v7;
              }
              if ( !v9 )
              {
LABEL_19:
                LOBYTE(v2) = 0;
                break;
              }
            }
            else
            {
              v9 = *(_QWORD *)(v7 + 8);
              if ( v8 )
              {
                if ( !v9 )
                  goto LABEL_13;
                v9 ^= v7;
              }
              if ( !v9 )
              {
LABEL_13:
                LOBYTE(v2) = 1;
                break;
              }
            }
            v7 = v9;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v1, (PRTL_BALANCED_NODE)v7, v2, (PRTL_BALANCED_NODE)(v5 - 24));
        v5 += 64LL;
        v3 += 2;
        --v4;
      }
      while ( v4 );
      if ( _InterlockedCompareExchange64(&KiSystemServiceTraceCallbackTable, v1, 0LL) )
        ExFreePoolWithTag((PVOID)v1, 0x7454694Bu);
    }
  }
  return KiSystemServiceTraceCallbackTable;
}
