_QWORD *__fastcall PopEtEnergyTrackerCleanupAggregates(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  _QWORD *v5; // rbp
  _QWORD *i; // rcx

  v1 = *(_QWORD ***)(a1 + 56);
  v3 = v1;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_7:
    result = v3;
    if ( !v3 )
      return result;
    v5 = v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 48);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_12;
      }
    }
    v5 = 0LL;
LABEL_12:
    if ( v5 == (_QWORD *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v5 + 2);
      ExFreePoolWithTag(v5, 0x54456F50u);
    }
  }
  ++v1;
  result = *(_QWORD **)(a1 + 56);
  while ( v1 < &result[(unsigned __int64)*(unsigned int *)(a1 + 52) >> 5] )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_7;
    ++v1;
  }
  return result;
}
