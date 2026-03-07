__int64 (__fastcall **EmonRestartProfiling())()
{
  __int64 (__fastcall **result)(); // rax
  unsigned __int64 **v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // r11
  int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r8d
  int v9; // edx

  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v1 = (unsigned __int64 **)HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v1 = (unsigned __int64 **)(HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number);
  }
  v2 = EmonNumberCounters;
  v3 = 0;
  if ( EmonNumberCounters )
  {
    while ( 1 )
    {
      v4 = 0;
      v5 = 1;
      v6 = *((_DWORD *)*v1 + 6);
      v7 = **v1;
      v8 = *(_DWORD *)(*v1)[2];
      if ( !v6 )
        break;
      v9 = v6 - 1;
      if ( !v9 )
        goto LABEL_11;
      if ( v9 != 1 )
      {
        v5 = 0;
        v7 = 0LL;
        v8 = 0;
LABEL_11:
        result = (__int64 (__fastcall **)())EmonConfigureCounter(v3, v5, v7, v8, v4);
        goto LABEL_12;
      }
      result = (__int64 (__fastcall **)())EmonWriteCounter(v3, **v1, v8);
LABEL_12:
      ++v3;
      ++v1;
      if ( v3 >= v2 )
        return result;
    }
    v4 = 1;
    goto LABEL_11;
  }
  return result;
}
