__int64 __fastcall MiFindPagesForMdl(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v2; // edx
  __int64 v4; // r14
  __int64 v5; // rbp
  _DWORD *v6; // rsi
  _DWORD *v7; // r15
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // ecx
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 64);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v2 &= ~2u;
    v13[0] = 0;
LABEL_3:
    v6 = v13;
    goto LABEL_4;
  }
  v12 = *(_DWORD *)(a1 + 60);
  if ( (v2 & 2) != 0 )
  {
    v13[0] = v12;
    goto LABEL_3;
  }
  v6 = (_DWORD *)(qword_140C65718 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * v12);
  v1 = &v6[(unsigned __int16)KeNumberNodes];
LABEL_4:
  v7 = v6 + 1;
  if ( v6 != v13 )
    v7 = v1;
  v8 = v2 | 0xC000000;
  if ( (v2 & 0x100) == 0 )
    v8 = v2;
  v9 = *(_QWORD *)(a1 + 48) * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 12);
  if ( (v8 & 0x400) != 0 )
    return MiAllocateEnclavePagesForMdl(
             v4,
             v5,
             v8,
             (unsigned int)*(_QWORD *)(a1 + 32) - (unsigned int)v9,
             *(_DWORD *)(a1 + 60));
  if ( (v8 & 0x10052) == 0x10000 )
  {
    result = MiAllocateMdlPagesByLists(
               v4,
               v5,
               v8,
               a1,
               *(_QWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32) - v9,
               *(_DWORD *)(a1 + 60));
    if ( (_DWORD)result )
      return result;
    v8 &= ~0x10000u;
    *(_DWORD *)(a1 + 56) &= ~0x10000u;
  }
  do
  {
    v11 = (unsigned int)*v6;
    if ( *(_QWORD *)(25408 * v11 + *(_QWORD *)(v4 + 16) + 22832) || !(_DWORD)InitializationPhase )
    {
      if ( (v8 & 0x40) != 0 )
      {
        MiAllocateFastLargePagesForMdl(a1, v11, v8);
      }
      else if ( (v8 & 0x20) != 0 )
      {
        MiAllocateSkipPagesForMdl(a1, v11, v8);
      }
      else
      {
        MiAllocateMostlyContiguousPagesForMdl(a1, v11, v8);
      }
    }
    result = *(_QWORD *)(a1 + 48) * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 12);
    if ( result == *(_QWORD *)(a1 + 32) )
      break;
    if ( (v8 & 2) != 0 )
      break;
    ++v6;
  }
  while ( v6 < v7 );
  return result;
}
