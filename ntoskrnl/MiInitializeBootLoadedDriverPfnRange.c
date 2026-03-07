__int64 __fastcall MiInitializeBootLoadedDriverPfnRange(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a1 + 8 * a2;
  for ( i = a1; i < v4; i += 8LL )
  {
    v11 = MI_READ_PTE_LOCK_FREE(i);
    v7 = v11;
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    if ( (unsigned int)MiCheckSlabPfnBitmap(v8, 1LL, 0) )
      ++v3;
    if ( a3 && (MiFlags & 0x4000) != 0 )
    {
      *(_QWORD *)(v8 + 16) ^= (*(_DWORD *)(v8 + 16) ^ (32 * (((v7 >> 63) & 0xFFFFFFFE) + 3))) & 0x3E0;
    }
    else
    {
      if ( v7 >= 0 )
      {
        v9 = ((unsigned int)MiFlags >> 15) & 1;
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                             + 192);
        if ( v9 )
        {
          if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 3 )
            MiMarkPfnVerified(v8, 0);
        }
      }
      *(_BYTE *)(v8 + 35) |= 8u;
    }
  }
  return v3;
}
