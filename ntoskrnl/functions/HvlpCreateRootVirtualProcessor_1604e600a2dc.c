__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, ULONG a2)
{
  __int64 v4; // rdi
  ULONG v5; // r14d
  __int64 v6; // rdx
  __int64 result; // rax
  PHYSICAL_ADDRESS *v8; // rax
  __int16 v9; // bx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v4 = *(unsigned __int16 *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 2);
  v5 = *(_DWORD *)(KeNodeBlock[v4] + 4);
  HvcallInitInputControl(78, &v13);
  while ( 1 )
  {
    result = HvlpDepositPages(v4, v6, 0, 0);
    if ( (_DWORD)result )
      break;
    v8 = HvlpAcquireHypercallPage((__int64)&v10, 1, 0LL, 40LL);
    v8->QuadPart = HvlPartitionId;
    v8[1].LowPart = a2;
    HIBYTE(v8[1].QuadPart) = 0;
    v8[3].LowPart = v5;
    v8[3].HighPart = -2147483647;
    v8[4].QuadPart = *(unsigned int *)(a1 + 4);
    v9 = HvcallInitiateHypercall(v13);
    HvlpReleaseHypercallPage((__int64)&v10);
    if ( v9 != 11 )
      return v9 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
