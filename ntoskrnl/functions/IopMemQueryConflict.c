__int64 __fastcall IopMemQueryConflict(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  NTSTATUS IsPciRootBus; // r11d
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // r10
  unsigned __int64 v8; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rax
  bool v11; // cf
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  result = ArbQueryConflict(a1, a2);
  if ( (int)result >= 0 )
  {
    IsPciRootBus = IopIsPciRootBus(*(PDEVICE_OBJECT *)a2, &v12);
    if ( IsPciRootBus >= 0 && v12 )
    {
      v5 = 0LL;
      v6 = **(_DWORD **)(a2 + 16);
      v7 = **(_QWORD **)(a2 + 24);
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v7 + 24 * v5 + 8);
          if ( ArbMmConfigRange )
            break;
LABEL_15:
          v5 = (unsigned int)(v5 + 1);
LABEL_16:
          if ( (unsigned int)v5 >= v6 )
            goto LABEL_17;
        }
        for ( i = ArbMmConfigRange + 8; ; i += 32LL )
        {
          if ( i >= 32 * (unsigned __int64)*(unsigned int *)(ArbMmConfigRange + 4) + ArbMmConfigRange + 8 )
            goto LABEL_15;
          if ( ((*(_BYTE *)(i + 1) - 3) & 0xFB) == 0 )
          {
            v10 = *(_QWORD *)(i + 16);
            v11 = v8 < v10;
            if ( v8 > v10 )
            {
              if ( *(_QWORD *)(i + 24) < v8 )
                continue;
              v11 = v8 < v10;
            }
            if ( !v11 || *(_QWORD *)(v7 + 24 * v5 + 16) >= v10 )
            {
              *(_OWORD *)(v7 + 24 * v5) = *(_OWORD *)(v7 + 24LL * --v6);
              *(_QWORD *)(v7 + 24 * v5 + 16) = *(_QWORD *)(v7 + 24LL * v6 + 16);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_17:
      **(_DWORD **)(a2 + 16) = v6;
      return (unsigned int)IsPciRootBus;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
