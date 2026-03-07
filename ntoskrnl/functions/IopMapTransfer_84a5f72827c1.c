__int64 __fastcall IopMapTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, char a6)
{
  bool v7; // zf
  unsigned int v9; // eax
  __int64 result; // rax
  _QWORD *v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+50h] [rbp-28h]
  __int128 v21; // [rsp+58h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-10h]

  v18[1] = 0;
  v7 = *(_DWORD *)(a1 + 520) == 3;
  v21 = 0LL;
  v22 = 0LL;
  *(_BYTE *)(a1 + 524) = 1;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 252);
    if ( *a5 > v9 )
      *a5 = v9;
  }
  result = IoMapTransferInternal(a1, a2, a3, a4, a5, a6, 0);
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    v11 = *(_QWORD **)(a3 + 24);
    v12 = result & 0xFFF;
    v13 = (v12 + *a5 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_BYTE *)(a3 + 64) )
    {
      v17 = *(unsigned int *)(a3 + 16);
      result = v12 + *v11 + v17 + *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a3 + 16) = v13 + v17;
    }
    else
    {
      v14 = *(_QWORD *)(a3 + 40);
      v18[0] = 1;
      v19 = result & 0xFFFFFFFFFFFFF000uLL;
      v20 = v13;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _DWORD *, __int128 *))(HalpDmaIommuInterfaceFcnTable + 144))(
        v11,
        v14,
        3LL,
        v18,
        &v21);
      v15 = *((_QWORD *)&v21 + 1);
      v16 = (_QWORD *)v21;
      *(_QWORD *)(a3 + 40) += v13;
      return *v16 + v12 + v15;
    }
  }
  return result;
}
