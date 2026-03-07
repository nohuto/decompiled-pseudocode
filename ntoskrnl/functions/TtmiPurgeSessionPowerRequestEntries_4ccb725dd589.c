_QWORD *__fastcall TtmiPurgeSessionPowerRequestEntries(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  _QWORD *i; // rsi
  _QWORD *v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  v1 = *(_QWORD **)(a1 + 280);
  v3 = v1;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_9:
    result = v3;
    if ( !v3 )
      return result;
    for ( i = (_QWORD *)v3[6]; i != v3 + 6; i = (_QWORD *)*i )
    {
      v6 = i - 1;
      v7 = i;
      if ( ((*(char *)(((unsigned __int64)*((unsigned int *)i - 2) >> 3) + *(_QWORD *)(a1 + 64)) >> (*(_DWORD *)(i - 1) & 7)) & 1) == 0 )
      {
        v8 = (_QWORD *)*i;
        v9 = (_QWORD *)i[1];
        i = v9;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        ExFreePoolWithTag(v6, 0x52507454u);
      }
    }
  }
  ++v1;
  result = *(_QWORD **)(a1 + 280);
  while ( v1 < &result[(unsigned __int64)*(unsigned int *)(a1 + 276) >> 5] )
  {
    v3 = (_QWORD *)*v1;
    if ( (*v1 & 1) == 0 )
      goto LABEL_9;
    ++v1;
  }
  return result;
}
