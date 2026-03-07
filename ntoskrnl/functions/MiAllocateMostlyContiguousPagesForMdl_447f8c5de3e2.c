__int64 __fastcall MiAllocateMostlyContiguousPagesForMdl(__int64 *a1, int a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  __int64 v4; // r13
  unsigned __int64 v6; // r12
  ULONG_PTR v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned __int64 *v13; // r15
  signed __int32 v14; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+70h] [rbp-68h]
  __int128 v19; // [rsp+78h] [rbp-60h] BYREF
  ULONG_PTR v20; // [rsp+E0h] [rbp+8h]
  int v21; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+18h]
  __int64 v23; // [rsp+F8h] [rbp+20h] BYREF

  v22 = a3;
  v3 = qword_140C6F348;
  v4 = a1[8];
  v6 = a1[1];
  v8 = a1[2];
  v23 = -1LL;
  v9 = 0LL;
  v21 = 0;
  v20 = qword_140C6F348;
  v19 = 0LL;
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v19);
  v18 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v10 = v18;
  while ( 1 )
  {
    if ( (*((_DWORD *)a1 + 21) & 2) == 0 )
    {
      v13 = (unsigned __int64 *)(v4 + 48 + 8 * v10);
      while ( 1 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v19, 1u);
        v15 = MiAllocateSlabPageForMdl(*a1, HIDWORD(v19) | (unsigned int)v14 & DWORD2(v19), v22, &v21);
        if ( v15 == -1LL )
          break;
        if ( v15 > v8 )
        {
          MiReleaseFreshPage(48 * v15 - 0x220000000000LL);
          *((_DWORD *)a1 + 21) |= 2u;
          break;
        }
        *v13 = v15;
        ++v9;
        ++v13;
        v11 = *(_DWORD *)(v4 + 40) + 4096;
        ++v10;
        *(_DWORD *)(v4 + 40) = v11;
        if ( v10 == a1[4] )
          goto LABEL_4;
      }
      v3 = v20;
    }
    MiFindContiguousPagesEx(
      *a1,
      v6,
      v8,
      0,
      0,
      a1[4] - v10,
      *((_DWORD *)a1 + 20),
      a2,
      0x80000000,
      v22 | 0x60002000,
      0,
      v4,
      (__int64)&v23);
    v11 = *(_DWORD *)(v4 + 40);
    v10 = (unsigned __int64)v11 >> 12;
    if ( v10 == a1[4] )
      break;
    v16 = a1[3];
    if ( !v16 || v16 + v6 <= v6 || v16 + v6 > v3 )
      break;
    v6 += v16;
    if ( v16 + v8 <= v8 || v16 + v8 > v3 )
      v8 = v3;
    else
      v8 += v16;
  }
LABEL_4:
  result = *((unsigned int *)a1 + 21);
  if ( (result & 2) == 0 )
  {
    v17 = ((unsigned __int64)v11 >> 12) - v18;
    if ( v17 )
    {
      result = *a1;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*a1 + 16296), v17);
      if ( v9 )
      {
        result = *a1;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*a1 + 16304), v9);
      }
    }
  }
  return result;
}
