volatile signed __int64 *__fastcall KiRemoveEntryTimer(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        volatile signed __int64 **a4)
{
  __int64 v4; // r14
  unsigned int v6; // r8d
  volatile signed __int64 *v8; // rdx
  unsigned __int64 v9; // rdi
  volatile signed __int64 v10; // rcx
  unsigned __int64 v11; // r15
  volatile signed __int64 *result; // rax
  __int64 v13; // r13
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rsi
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = a3;
  v6 = *(unsigned __int16 *)(a2 + 58);
  v8 = (volatile signed __int64 *)(a2 + 32);
  v9 = (unsigned int)v4;
  v10 = *v8;
  v11 = 32 * (((unsigned __int64)v6 << 8) + v4 + 16);
  result = (volatile signed __int64 *)*((_QWORD *)v8 + 1);
  v13 = 32 * (((v6 ^ 1LL) << 8) + v4 + 16);
  if ( *(volatile signed __int64 **)(*v8 + 8) != v8 || *(volatile signed __int64 **)result != v8 )
    __fastfail(3u);
  *result = v10;
  *(_QWORD *)(v10 + 8) = result;
  if ( result == (volatile signed __int64 *)v10 )
  {
    *(_DWORD *)(v11 + a1 + 28) = -1;
    if ( !(_WORD)v6 )
    {
      v21 = 0;
      v14 = (volatile signed __int32 *)(a1 + 32 * (v4 + 272));
      while ( _interlockedbittestandset64(v14, 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&v21);
          result = *(volatile signed __int64 **)v14;
        }
        while ( *(_QWORD *)v14 );
      }
      goto LABEL_7;
    }
    v14 = (volatile signed __int32 *)(a1 + 32 * (v4 + 16));
    if ( _interlockedbittestandset64(v14, 0LL) )
    {
      _mm_pause();
    }
    else if ( v14 )
    {
LABEL_7:
      if ( *(_DWORD *)(v11 + a1 + 28) == -1 && *(_DWORD *)(v13 + a1 + 28) == -1 )
      {
        v15 = qword_140D20278[2 * *(unsigned __int8 *)(a1 - 15152)];
        if ( KiSerializeTimerExpiration )
        {
          v16 = v4 & 0x3F;
          v17 = (volatile signed __int32 *)(v15 + 8 * (v9 >> 6));
        }
        else
        {
          v16 = *(unsigned __int8 *)(a1 - 15151);
          v17 = (volatile signed __int32 *)((v9 << 6) + v15);
        }
        result = (volatile signed __int64 *)v16;
        _interlockedbittestandreset64(v17, v16);
      }
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
      return result;
    }
    result = *a4;
    _InterlockedAnd64(*a4, 0LL);
    v19 = 0;
    v14 = (volatile signed __int32 *)(a1 + 32 * (v4 + 16));
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v19);
        result = *(volatile signed __int64 **)v14;
      }
      while ( *(_QWORD *)v14 );
    }
    v18 = (volatile signed __int32 *)(a1 + 32 * (v4 + 272));
    v20 = 0;
    while ( _interlockedbittestandset64(v18, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v20);
        result = *(volatile signed __int64 **)v18;
      }
      while ( *(_QWORD *)v18 );
    }
    *a4 = (volatile signed __int64 *)v18;
    goto LABEL_7;
  }
  return result;
}
