__int64 __fastcall MmFillEtwHugeIoSpaceInformation(
        unsigned __int16 **a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _DWORD *a5)
{
  unsigned int v5; // edi
  unsigned int v7; // eax
  unsigned __int16 *v8; // r15
  bool v9; // cc
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = a3;
  v18 = 0LL;
  v16[0] = 0LL;
  v7 = (unsigned __int16)KeNumberNodes;
  v8 = *a1;
  v9 = a3 <= (unsigned __int16)KeNumberNodes;
  *a4 = 0;
  if ( !v9 )
    v5 = v7;
  v10 = 0;
  if ( v5 )
  {
    v11 = 0LL;
    v12 = a2 + 20;
    do
    {
      *(_OWORD *)(v12 - 20) = 0LL;
      *(_QWORD *)(v12 - 4) = 0LL;
      *(_DWORD *)(v12 + 4) = 0;
      ++v10;
      v13 = v11 + *((_QWORD *)v8 + 2);
      *(_DWORD *)(v12 - 20) = v10;
      MiGetNodeHugeRangeCounts(v13, &v17, &v18, v16);
      v14 = v17;
      *(_QWORD *)v12 = v18;
      *(_QWORD *)(v12 - 8) = v16[0];
      *(_QWORD *)(v12 - 16) = v14;
      if ( v14 )
        *a4 = 1;
      v11 += 25408LL;
      v12 += 28LL;
    }
    while ( v10 < v5 );
  }
  result = v10;
  *a5 = *v8;
  return result;
}
