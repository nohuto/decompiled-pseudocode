__int64 __fastcall RtlpFcAddDelayedUsageReportToBuffer(volatile signed __int32 *a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned __int32 v5; // ebp
  int v6; // r14d
  char *v7; // r15
  unsigned __int32 v8; // r8d
  unsigned __int32 i; // eax
  unsigned int v10; // r10d
  __int64 v11; // rbx
  __int64 *v12; // rbx
  __int64 j; // rdx
  unsigned __int64 v14; // rax
  unsigned __int32 v15; // eax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v17 = 64LL;
  v19 = 0;
  v18 = a1 + 2;
  while ( 1 )
  {
    _m_prefetchw((const void *)a1);
    v5 = *a1;
    if ( *a1 == 64 )
    {
      v2 = -1073741670;
      _InterlockedIncrement(a1 + 1);
      return v2;
    }
    if ( v5 == _InterlockedCompareExchange(a1, v5 + 1, v5) )
      break;
    RtlBackoff(&v19);
  }
  v6 = ((unsigned __int8)v18 & 4) != 0LL ? 0x20 : 0;
  v7 = (char *)v18 - (((unsigned __int8)v18 & 4) != 0LL ? 4 : 0);
  do
  {
    v8 = v5 < (unsigned int)v17 ? v5 : 0;
    for ( i = v17 - 1; ; i = v15 - 1 )
    {
      v10 = v6 + i;
      if ( i - v8 == -1 )
        goto LABEL_8;
      v12 = (__int64 *)&v7[8 * ((unsigned __int64)(v6 + v8) >> 6)];
      for ( j = *v12 | ((1LL << ((v6 + v8) & 0x3F)) - 1); j == -1; j = *v12 )
      {
        if ( ++v12 > (__int64 *)&v7[8 * ((unsigned __int64)v10 >> 6)] )
          goto LABEL_8;
      }
      _BitScanForward64(&v14, ~j);
      v11 = (unsigned int)v14 + ((unsigned int)(((char *)v12 - v7) >> 3) << 6);
      if ( (unsigned int)v11 > v10 )
      {
LABEL_8:
        v11 = 0xFFFFFFFFLL;
        goto LABEL_15;
      }
      if ( (_DWORD)v11 != -1 )
        break;
LABEL_15:
      if ( !v8 )
        goto LABEL_20;
      v15 = v5 + 1;
      v8 = 0;
      if ( v5 + 1 > (unsigned int)v17 )
        v15 = v17;
    }
    v11 = (unsigned int)(v11 - v6);
LABEL_20:
    ;
  }
  while ( !(unsigned int)RtlInterlockedSetClearRun((__int64)&v17, v11, 1u) );
  *(_QWORD *)&a1[3 * v11 + 5] = *a2;
  return v2;
}
