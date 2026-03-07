__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  __int64 SrbDataBuffer; // rdx
  int v6; // r8d
  int v7; // ecx
  _WORD *v8; // r14
  unsigned int v9; // edx
  __int16 v10; // dx
  unsigned __int16 v11; // bp
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int16 v17; // r8
  __int64 v18; // r10
  unsigned __int16 v19; // cx
  __int64 v20; // r9
  unsigned __int16 v21; // ax
  unsigned __int16 i; // dx
  __int64 v23; // r8
  char v24; // cl
  _DWORD *v26; // [rsp+100h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  v26 = 0LL;
  if ( !*(_WORD *)(a1 + 918) || !*(_WORD *)(a1 + 890) )
  {
    v4 = -1056964601;
    v24 = 6;
    goto LABEL_32;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v26);
  if ( *v26 >= 0x28u )
  {
    v6 = *(unsigned __int16 *)(a1 + 918);
    v7 = *(unsigned __int16 *)(a1 + 338);
    v8 = (_WORD *)(SrbDataBuffer + 36);
    v9 = *(unsigned __int16 *)(SrbDataBuffer + 36);
    if ( v9 > v6 + v7 || (unsigned __int16)v9 <= (unsigned __int16)v7 )
    {
      v4 = -1056964601;
      goto LABEL_33;
    }
    v10 = *(_WORD *)(a1 + 888);
    v11 = 0;
    if ( (_WORD)v6 )
    {
      while ( v10 )
      {
        v12 = *(_QWORD *)(a1 + 896);
        if ( *(_WORD *)(v12 + 48LL * v11 + 28) == *v8 )
        {
          v13 = *(_QWORD *)(v12 + 48LL * v11);
          if ( v13 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
          {
            v14 = *(unsigned __int16 *)(v12 + 48LL * v11 + 26);
            v26 = *(_DWORD **)(v12 + 48LL * v11 + 8);
            NVMeFreeDmaBuffer(a1, v14 << 6, (__int64 *)&v26, v13);
          }
          if ( !(unsigned __int8)NVMeIoSubmissionQueueDelete(a1) )
          {
            *(_DWORD *)(a1 + 36) = 19;
            v4 = -1056964607;
            StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
            goto LABEL_33;
          }
          v15 = *(_QWORD *)(a1 + 896);
          *(_OWORD *)(v15 + 48LL * v11) = 0LL;
          *(_OWORD *)(v15 + 48LL * v11 + 16) = 0LL;
          *(_OWORD *)(v15 + 48LL * v11 + 32) = 0LL;
          v10 = --*(_WORD *)(a1 + 888);
        }
        if ( ++v11 >= *(_WORD *)(a1 + 918) )
          break;
      }
    }
    if ( (*(_DWORD *)(a1 + 136) & 1) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 904);
      v17 = *(_WORD *)(a1 + 890);
      v18 = *(unsigned __int16 *)(v16 + 48LL * v11 + 26);
      v19 = 0;
      if ( v17 )
      {
        while ( *(_WORD *)(v16 + 48LL * v19 + 24) != *v8 )
        {
          if ( ++v19 >= v17 )
            goto LABEL_23;
        }
        v20 = *(_QWORD *)(v16 + 48LL * v19);
        v26 = *(_DWORD **)(v16 + 48LL * v19 + 8);
        NVMeFreeDmaBuffer(a1, v18 << 6, (__int64 *)&v26, v20);
      }
    }
LABEL_23:
    if ( !(unsigned __int8)NVMeIoCompletionQueueDelete(a1) )
    {
      *(_DWORD *)(a1 + 36) = 20;
      v4 = -1056964607;
      StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
      goto LABEL_33;
    }
    v21 = *(_WORD *)(a1 + 890);
    for ( i = 0; i < v21; ++i )
    {
      v23 = *(_QWORD *)(a1 + 904);
      if ( *(_WORD *)(v23 + 48LL * i + 24) == *v8 )
      {
        *(_OWORD *)(v23 + 48LL * i) = 0LL;
        *(_OWORD *)(v23 + 48LL * i + 16) = 0LL;
        *(_OWORD *)(v23 + 48LL * i + 32) = 0LL;
      }
      v21 = *(_WORD *)(a1 + 890);
    }
    *(_WORD *)(a1 + 890) = v21 - 1;
    v24 = 1;
    a2 = v2;
LABEL_32:
    *(_BYTE *)(a2 + 3) = v24;
    if ( !v4 )
      return v4;
    goto LABEL_33;
  }
  v4 = -1056964602;
LABEL_33:
  if ( !*(_BYTE *)(v2 + 3) )
    *(_BYTE *)(v2 + 3) = 4;
  if ( *(_BYTE *)(a1 + 22) )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v4;
}
