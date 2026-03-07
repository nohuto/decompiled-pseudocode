__int64 __fastcall CBufferRealization::Create(
        const struct CSM_REALIZATION_INFO *a1,
        bool a2,
        struct CBufferRealization **a3)
{
  signed int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // xmm0_8

  *a3 = 0LL;
  v6 = -1073741811;
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 || (unsigned int)(*(_DWORD *)a1 - 3) <= 1 )
      v6 = *((_QWORD *)a1 + 1) == 0LL ? 0xC000000D : 0;
LABEL_4:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)a1 + 1) )
    goto LABEL_4;
LABEL_5:
  v7 = operator new[](0x58uLL, 0x724D5343u, 256LL);
  if ( v7 )
  {
    *(_QWORD *)v7 = &CBufferRealization::`vftable';
    *(_OWORD *)(v7 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(v7 + 40) = *((_OWORD *)a1 + 1);
    v8 = *((_QWORD *)a1 + 4);
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_DWORD *)(v7 + 80) = 0;
    *(_QWORD *)(v7 + 56) = v8;
    v6 = CBufferRealization::Initialize((CBufferRealization *)v7, a2);
    if ( v6 < 0 )
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
    else
      *a3 = (struct CBufferRealization *)v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
