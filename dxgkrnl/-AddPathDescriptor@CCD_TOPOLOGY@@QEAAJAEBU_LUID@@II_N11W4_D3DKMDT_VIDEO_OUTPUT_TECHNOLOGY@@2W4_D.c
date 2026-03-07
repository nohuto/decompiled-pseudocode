__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  operator delete(*(void **)(a1 + 56));
  *(_QWORD *)(a1 + 56) = 0LL;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)a1);
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
    return 3221225507LL;
  v16 = *(unsigned __int16 *)(v15 + 20);
  if ( (unsigned __int16)v16 >= *(_WORD *)(v15 + 22) )
    return 3221225507LL;
  v17 = 296 * v16;
  v18 = *a2;
  v19 = v17 + v15 + 56;
  *(_OWORD *)(v19 + 256) = 0LL;
  *(_QWORD *)(v19 + 16) = v18;
  *(_DWORD *)(v19 + 24) = a3;
  *(_BYTE *)(v19 + 129) = a5 | (4 * a7) | (2 * a6);
  v20 = 0x8700000000000LL;
  *(_QWORD *)v19 = 0x8700000000000LL;
  *(_DWORD *)(v19 + 28) = a4;
  *(_OWORD *)(v19 + 272) = 0LL;
  *(_QWORD *)(v19 + 288) = 0LL;
  *(_DWORD *)(v19 + 256) = *(_DWORD *)(a1 + 88);
  if ( a8 != -2 && a9 != -2 )
  {
    v20 = 0x8F00000000000LL;
    *(_DWORD *)(v19 + 88) = a8;
    *(_QWORD *)v19 = 0x8F00000000000LL;
    *(_DWORD *)(v19 + 92) = a9;
  }
  *(_DWORD *)(v19 + 212) = a10;
  if ( a10 )
    *(_QWORD *)v19 = v20 | 0x1000000000LL;
  ++*(_WORD *)(*(_QWORD *)(a1 + 64) + 20LL);
  if ( a11 )
    *a11 = v19;
  return 0LL;
}
