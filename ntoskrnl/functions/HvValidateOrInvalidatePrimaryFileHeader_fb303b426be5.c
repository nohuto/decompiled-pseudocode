__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bp
  char v5; // r14
  int v7; // ebx
  _DWORD *Pool2; // rsi
  int v9; // ecx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  int v12; // ebx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  _DWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+40h] [rbp-18h]

  v17[1] = 0;
  v4 = a3;
  v5 = a2;
  if ( *(_QWORD *)(a1 + 1544) )
  {
    v7 = a4 & 1;
    if ( (_BYTE)a3 )
    {
      Pool2 = *(_DWORD **)(a1 + 1776);
    }
    else
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4096LL, 1867074883LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v14 = *(_OWORD **)(a1 + 64);
      a2 = 4LL;
      v15 = Pool2;
      a3 = 128LL;
      do
      {
        *v15 = *v14;
        v15[1] = v14[1];
        v15[2] = v14[2];
        v15[3] = v14[3];
        v15[4] = v14[4];
        v15[5] = v14[5];
        v15[6] = v14[6];
        v15 += 8;
        v16 = v14[7];
        v14 += 8;
        *(v15 - 1) = v16;
        --a2;
      }
      while ( a2 );
    }
    v9 = *(_DWORD *)(a1 + 172);
    v10 = v9 - 1;
    if ( v5 )
      v10 = *(_DWORD *)(a1 + 172);
    Pool2[2] = v10;
    Pool2[1] = v9;
    Pool2[127] = HvpHeaderCheckSum(Pool2, a2, a3);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a1 + 40);
    v17[0] = 0;
    v18 = Pool2;
    v19 = 4096;
    v12 = v11(a1, 0LL, v17, 1LL, v7);
    if ( v12 >= 0 )
    {
      v12 = CmpFileFlushAndPurge(a1, 0LL);
      if ( v12 >= 0 )
      {
        *(_BYTE *)(a1 + 194) = v5;
        v12 = 0;
        *(_DWORD *)(a1 + 184) = Pool2[2];
      }
    }
    if ( !v4 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
