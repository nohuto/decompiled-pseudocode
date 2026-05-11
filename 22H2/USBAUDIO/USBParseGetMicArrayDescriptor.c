/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C002EE74
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002F8F0 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011C50 (__security_check_cookie.c)
 *     USBHwAllocateAndBag @ 0x1C002C98C (USBHwAllocateAndBag.c)
 *     USBHwGetSetMemory @ 0x1C002CE30 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // si
  unsigned int v5; // ebp
  __int64 v7; // r13
  _WORD *v8; // rbx
  _WORD *v9; // rdi
  int SetMemory; // eax
  PVOID PoolWithTag; // r14
  int v12; // esi
  void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  _WORD *v17; // [rsp+40h] [rbp-78h] BYREF
  __int128 v18; // [rsp+48h] [rbp-70h] BYREF
  __int128 v19; // [rsp+58h] [rbp-60h]
  int v20; // [rsp+68h] [rbp-50h]

  v3 = *(unsigned __int8 *)(a2 + 3);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v8 = 0LL;
  v20 = 0;
  v9 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  SetMemory = USBHwGetSetMemory(a1, 0x85u, 0, v3, *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL), 0, 0x12u, &v18);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      SetMemory = -1073741275;
    v12 = SetMemory;
  }
  else if ( v18 == __PAIR128__(0x14D34A2D16C584B1LL, USBAUDIO_MIC_ARRAY_DESCRIPTOR) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)v19, 0x41627845u);
    if ( PoolWithTag )
    {
      v12 = USBHwGetSetMemory(
              a1,
              0x85u,
              0,
              v3,
              *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL),
              0,
              (unsigned __int16)v19,
              PoolWithTag);
      if ( v12 >= 0 )
        v8 = PoolWithTag;
      else
        ExFreePool(PoolWithTag);
    }
    else
    {
      v12 = -1073741670;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  if ( v12 >= 0 )
  {
    v13 = *(void **)(a1 + 8);
    v17 = ExAllocatePoolWithTag(PagedPool, 12LL * (unsigned __int16)v8[17] + 18, 0x41627845u);
    v9 = v17;
    if ( v17 )
      v12 = USBHwAllocateAndBag((PVOID *)&v17, v13);
    else
      v12 = -1073741670;
    if ( v12 >= 0 )
    {
      *v9 = v8[9];
      v9[1] = v8[10];
      v9[2] = v8[11];
      v9[3] = v8[12];
      v9[4] = v8[13];
      v9[5] = v8[14];
      v9[6] = v8[15];
      v9[7] = v8[16];
      v9[8] = v8[17];
      if ( v8[17] )
      {
        do
        {
          v14 = v5++;
          v15 = 3 * v14;
          v9[2 * v15 + 9] = v8[6 * v14 + 18];
          v9[2 * v15 + 10] = v8[6 * v14 + 19];
          v9[2 * v15 + 11] = v8[6 * v14 + 20];
          v9[2 * v15 + 12] = v8[6 * v14 + 21];
          v9[2 * v15 + 13] = v8[6 * v14 + 22];
          v9[2 * v15 + 14] = v8[6 * v14 + 23];
        }
        while ( v5 < (unsigned __int16)v8[17] );
      }
    }
    ExFreePool(v8);
  }
  *a3 = v9;
  return (unsigned int)v12;
}
