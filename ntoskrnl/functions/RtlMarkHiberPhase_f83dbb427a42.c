void RtlMarkHiberPhase()
{
  ULONG_PTR v0; // rbp
  unsigned int v1; // eax
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx
  int PhysicalAddress; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+18h]
  ULONG_PTR v15; // [rsp+98h] [rbp+20h]

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v0 = qword_140C3CDA0;
    v15 = qword_140C3CDA0;
    if ( !qword_140C3CDA0 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v1 = *(_DWORD *)(qword_140C3CDA0 + 184);
    if ( v1 == 8 )
    {
      v2 = (unsigned __int64)"ta" >> 12;
      for ( i = (unsigned __int64)XpressHashFunction >> 12; i < v2; i += v7 )
      {
        v12 = 0;
        v13 = 0LL;
        v14 = i << 12;
        PhysicalAddress = MiGetPhysicalAddress(i << 12, &v13, &v12);
        v5 = v13;
        v6 = i + 1;
        v7 = 1LL;
        if ( !PhysicalAddress )
          v5 = 0LL;
        v8 = v5 >> 12;
        if ( v6 < v2 )
        {
          v9 = v14;
          do
          {
            v12 = 0;
            v13 = 0LL;
            v10 = MiGetPhysicalAddress(v9 + (v7 << 12), &v13, &v12);
            v11 = v13;
            if ( !v10 )
              v11 = 0LL;
            if ( v6 + v8 - i != v11 >> 12 )
              break;
            ++v7;
            ++v6;
          }
          while ( v6 < v2 );
          v0 = v15;
        }
        PopSetRange(v0, 0x10000, v8, v7, 0x73727058u);
      }
    }
    else if ( v1 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v1, 0LL);
    }
  }
  PoSetHiberRange(0LL, 0x10000u, XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
