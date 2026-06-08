/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C002FB7C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000AC40 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001B10 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     RegisterIdleDomain @ 0x1C002F4AC (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C00313F0 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v2; // rdi
  SIZE_T v3; // r14
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int *v15; // rcx
  _DWORD *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int *v20; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int i; // [rsp+20h] [rbp-99h] BYREF
  __int128 v25; // [rsp+28h] [rbp-91h] BYREF
  __int64 v26; // [rsp+38h] [rbp-81h]
  _BYTE v27[176]; // [rsp+40h] [rbp-79h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  memset(v27, 0, 0xA8uLL);
  v2 = (unsigned int *)a1[64];
  v3 = 32 * *v2 + 8;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v3);
  a1[89] = v5;
  *v5 = *v2;
  v7 = 0LL;
  for ( i = 0; (unsigned int)v7 < *v2; i = v7 )
  {
    *(_QWORD *)&v5[8 * (unsigned int)v7 + 2] = &v2[4 * v7 + 1 + (unsigned int)v7];
    v7 = i + 1;
  }
  v8 = 0;
  v9 = *(_DWORD *)(a1[87] + 56LL);
  i = 0;
  if ( v9 )
  {
    v10 = 0LL;
    do
    {
      v11 = a1[87];
      v12 = 0;
      v13 = 88 * v10;
      if ( *v2 )
      {
        v14 = *(_QWORD *)(v13 + v11 + 64);
        do
        {
          v15 = &v5[8 * v12 + 2];
          if ( *(_QWORD *)v15 == v14 )
            *(_QWORD *)(v13 + v11 + 136) = v15;
          ++v12;
        }
        while ( v12 < *v2 );
        v8 = i;
      }
      i = ++v8;
      v10 = v8;
    }
    while ( v8 < v9 );
  }
  if ( !a1[65] )
    return 0;
  KeInitializeAffinityEx(v27);
  v16 = (_DWORD *)a1[65];
  v17 = 0;
  i = 0;
  if ( *v16 )
  {
    while ( 1 )
    {
      if ( !RegisterIdleDomain((__int64)a1, v17) )
        goto LABEL_20;
      v18 = i;
      v19 = *(_DWORD *)(a1[65] + 24 * (i + 1LL));
      if ( v19 < *v5 )
        break;
LABEL_21:
      v20 = (unsigned int *)a1[65];
      v17 = v18 + 1;
      i = v17;
      if ( v17 >= *v20 )
        goto LABEL_22;
    }
    KeOrAffinityEx(*(_QWORD *)(32LL * v19 + a1[89] + 16) + 48LL, v27, v27);
LABEL_20:
    v18 = i;
    goto LABEL_21;
  }
LABEL_22:
  v6 = 0;
  KeInitializeEnumerationContext(&v25, v27);
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, &v25) )
  {
    DevExtFromIndex = GetDevExtFromIndex(i);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v6 = updated;
  }
  return v6;
}
