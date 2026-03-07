void __fastcall VfPnpVerifyNewRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const void *a6)
{
  const void *v6; // rdi
  int v8; // ebp
  _WORD *v9; // rbx

  v6 = *(const void **)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v8 != -1073741637 )
  {
    if ( *(_BYTE *)(a4 + 1) != 13 && (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
      ViErrorReport1(0x20Eu, a6, *(const void **)a1);
    if ( v8 < 0 )
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
  }
  if ( *(_BYTE *)(a4 + 1) == 9 )
  {
    v9 = *(_WORD **)(a4 + 8);
    if ( MmIsNonPagedSystemAddressValid(v9) )
    {
      if ( !v9[1] )
        ViErrorReport1(0x233u, a6, v6);
      if ( *v9 < 0x40u )
        ViErrorReport1(0x234u, a6, v6);
      if ( *((_DWORD *)v9 + 2) != -1 )
        ViErrorReport1(0x235u, a6, v6);
      if ( *((_DWORD *)v9 + 3) != -1 )
        ViErrorReport1(0x236u, a6, v6);
    }
  }
}
