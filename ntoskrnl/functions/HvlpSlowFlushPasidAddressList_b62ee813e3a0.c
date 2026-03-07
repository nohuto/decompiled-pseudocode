char __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, const void *a4, char a5)
{
  __int64 v5; // rbx
  PHYSICAL_ADDRESS *v9; // rax
  PHYSICAL_ADDRESS *v10; // rdi
  PHYSICAL_ADDRESS *v12; // r9
  signed __int64 v13; // rsi
  __int64 v14; // rdx
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v5 = a3;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v9 = HvlpAcquireHypercallPage((__int64)&v15, 5, 0LL, 0LL);
  v10 = v9;
  if ( !v9 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v9[1].QuadPart = 0LL;
  v12 = v9 + 2;
  v9->HighPart = a1;
  v9->LowPart = a2;
  if ( a5 )
  {
    memmove(&v9[2], a4, 8 * v5);
    v10[1].LowPart |= 1u;
  }
  else if ( (_DWORD)v5 )
  {
    v13 = (_BYTE *)a4 - (_BYTE *)v12;
    v14 = v5;
    do
    {
      v12->QuadPart = *(LONGLONG *)((_BYTE *)&v12->QuadPart + v13) & 0x800 | (*(LONGLONG *)((char *)&v12->QuadPart + v13)
                                                                            + (*(LONGLONG *)((_BYTE *)&v12->QuadPart
                                                                                           + v13) & 0xC00));
      ++v12;
      --v14;
    }
    while ( v14 );
  }
  HvcallInitiateHypercall(161);
  return HvlpReleaseHypercallPage((__int64)&v15);
}
