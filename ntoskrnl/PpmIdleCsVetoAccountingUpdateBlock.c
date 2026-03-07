char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  __int64 InterruptTimePrecise; // rax
  unsigned int v5; // ecx
  __int64 j; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // dl
  unsigned int i; // edx
  unsigned __int64 v11; // rcx
  LARGE_INTEGER v13; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v9 = InterruptTimePrecise & ~a2;
    *(_BYTE *)(a1 + 24) = v9;
    if ( !v9 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v11 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v11 + 32) )
          *(_QWORD *)(v11 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise) = a2 | InterruptTimePrecise;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise;
    if ( (_BYTE)InterruptTimePrecise == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
      v5 = 0;
      for ( j = InterruptTimePrecise; v5 < *(_DWORD *)(a1 + 28); ++v5 )
      {
        v7 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)v5 << 6);
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          LOBYTE(InterruptTimePrecise) = j - v8;
          *(_QWORD *)(v7 + 56) += j - v8;
          *(_QWORD *)(v7 + 48) = 0LL;
        }
      }
    }
  }
  return InterruptTimePrecise;
}
