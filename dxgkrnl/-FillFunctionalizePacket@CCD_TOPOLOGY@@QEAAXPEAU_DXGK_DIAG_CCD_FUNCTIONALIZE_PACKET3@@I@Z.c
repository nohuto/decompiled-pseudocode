void __fastcall CCD_TOPOLOGY::FillFunctionalizePacket(
        CCD_TOPOLOGY *this,
        struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *a2,
        unsigned int a3)
{
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx

  memset(a2, 0, a3);
  *(_DWORD *)a2 = 36;
  v6 = 0;
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 1) = a3;
  *(_OWORD *)((char *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 12) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
  v7 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v7 + 20) )
  {
    do
    {
      v8 = 296LL * v6;
      v9 = v6++;
      v9 <<= 6;
      *(_DWORD *)((char *)a2 + v9 + 56) = *(_DWORD *)(v8 + v7 + 80);
      *(_DWORD *)((char *)a2 + v9 + 60) = *(_DWORD *)(v8 + v7 + 84);
      *(_QWORD *)((char *)a2 + v9 + 72) = *(_QWORD *)(v8 + v7 + 56);
      *(_QWORD *)((char *)a2 + v9 + 64) = *(_QWORD *)(v8 + v7 + 72);
      *(_DWORD *)((char *)a2 + v9 + 104) = *(_DWORD *)(v8 + v7 + 196);
      *(_QWORD *)((char *)a2 + v9 + 80) = *(_QWORD *)(v8 + v7 + 208);
      *(_OWORD *)((char *)a2 + v9 + 88) = *(_OWORD *)(v8 + v7 + 224);
      *(_DWORD *)((char *)a2 + v9 + 108) = *(_DWORD *)(v8 + v7 + 316);
      *(_DWORD *)((char *)a2 + v9 + 112) = *(_DWORD *)(v8 + v7 + 260);
      *(_DWORD *)((char *)a2 + v9 + 116) = *(_DWORD *)(v8 + v7 + 264);
      v7 = *((_QWORD *)this + 8);
    }
    while ( v6 < *(unsigned __int16 *)(v7 + 20) );
  }
}
