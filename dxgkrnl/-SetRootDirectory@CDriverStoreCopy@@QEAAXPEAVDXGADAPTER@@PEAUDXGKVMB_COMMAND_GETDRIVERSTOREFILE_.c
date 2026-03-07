void __fastcall CDriverStoreCopy::SetRootDirectory(
        CDriverStoreCopy *this,
        struct DXGADAPTER *a2,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a3)
{
  NTSTATUS v6; // eax
  _WORD *v7; // r11
  _WORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  signed __int64 v15; // r8
  __int16 v16; // r9
  char *v17; // rax

  v6 = RtlStringCbCopyW((unsigned __int16 *)this + 12, 0x208uLL, (size_t *)((char *)a3 + 60));
  *((_DWORD *)a3 + 4) = v6;
  if ( v6 >= 0 )
  {
    v8 = v7;
    v9 = 260LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    v10 = (260 - v9) & -(__int64)(v9 != 0);
    v11 = v9 == 0 ? 0xC000000D : 0;
    if ( v9 )
    {
      v12 = (char *)&v7[v10];
      v13 = 260 - v10;
      if ( 260 != v10 )
      {
        v14 = 2147483646LL;
        v15 = (char *)L"\\" - v12;
        do
        {
          if ( !v14 )
            break;
          v16 = *(_WORD *)&v12[v15];
          if ( !v16 )
            break;
          *(_WORD *)v12 = v16;
          --v14;
          v12 += 2;
          --v13;
        }
        while ( v13 );
      }
      v17 = v12 - 2;
      if ( v13 )
        v17 = v12;
      v11 = v13 == 0 ? 0x80000005 : 0;
      *(_WORD *)v17 = 0;
    }
    *((_DWORD *)a3 + 4) = v11;
    CDriverStoreCopy::InitializeSystem32Links(this, a2);
  }
}
