__int64 KiGetSystemServiceTraceTable()
{
  __int64 Pool2; // rax
  _BOOL8 v1; // r8
  signed __int64 v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rax

  if ( !KiSystemServiceTraceCallbackTable )
  {
    Pool2 = ExAllocatePool2(256LL, 31120LL, 1951689035LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v3 = &off_140A7B4A8;
      v4 = 486LL;
      v5 = Pool2 + 40;
      do
      {
        *(_DWORD *)(v5 + 12) = *((_DWORD *)v3 - 2);
        v6 = *v3;
        *(_QWORD *)v5 = *v3;
        *(_DWORD *)(v5 + 8) = *((_DWORD *)v3 - 1);
        v7 = *(_QWORD *)v2;
        if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v7 )
          v7 ^= v2;
        LOBYTE(v1) = 0;
        v8 = *(_BYTE *)(v2 + 8) & 1;
        if ( v7 )
        {
          while ( 1 )
          {
            if ( (int)KiSystemServiceTraceTableCompareFunction(v6, v7, v1) < 0 )
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
                LOBYTE(v1) = 0;
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
                LOBYTE(v1) = 1;
                break;
              }
            }
            v7 = v9;
          }
        }
        RtlRbInsertNodeEx((unsigned __int64 *)v2, v7, v1, v5 - 24);
        v5 += 64LL;
        v3 += 2;
        --v4;
      }
      while ( v4 );
      if ( _InterlockedCompareExchange64(&KiSystemServiceTraceCallbackTable, v2, 0LL) )
        ExFreePoolWithTag((PVOID)v2, 0x7454694Bu);
    }
  }
  return KiSystemServiceTraceCallbackTable;
}
