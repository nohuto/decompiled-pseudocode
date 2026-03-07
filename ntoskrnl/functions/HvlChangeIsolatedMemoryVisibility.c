__int64 __fastcall HvlChangeIsolatedMemoryVisibility(LONGLONG a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // edi
  PHYSICAL_ADDRESS *v8; // r14
  unsigned int v9; // ebx
  LONGLONG v10; // rcx
  __int64 v11; // r8
  PHYSICAL_ADDRESS *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  v7 = 0;
  v16 = 0LL;
  *a4 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v8 = HvlpAcquireHypercallPage((__int64)&v16, 1, 0LL, 0LL);
  v8[1].QuadPart = 0LL;
  v8->QuadPart = -1LL;
  v8[1].LowPart &= 0xFFFFFFFC;
  if ( a2 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( a2 <= 0x1FE )
        v9 ^= (v9 ^ a2) & 0xFFF;
      else
        v9 = v9 & 0xFFFFF000 | 0x1FE;
      if ( (v9 & 0xFFF) != 0 )
      {
        v10 = a1;
        v11 = v9 & 0xFFF;
        v12 = v8 + 2;
        do
        {
          v12->QuadPart = v10++;
          ++v12;
          --v11;
        }
        while ( v11 );
      }
      v13 = HvcallInitiateHypercall(219);
      *a4 += HIDWORD(v13) & 0xFFF;
      if ( (_WORD)v13 )
        break;
      v14 = v9 & 0xFFF;
      a1 += v14;
      a2 -= v14;
      if ( !a2 )
        goto LABEL_13;
    }
    v7 = HvlpHvToNtStatus(v13);
  }
LABEL_13:
  HvlpReleaseHypercallPage((__int64)&v16);
  return v7;
}
