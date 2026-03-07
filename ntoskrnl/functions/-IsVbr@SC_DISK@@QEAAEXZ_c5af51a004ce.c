char __fastcall SC_DISK::IsVbr(SC_DISK *this)
{
  __int64 v1; // rsi
  char v2; // bl
  int v4; // ecx
  _BYTE *i; // rax
  unsigned __int64 v6; // r8
  unsigned int v7; // edi

  v1 = *((_QWORD *)this + 33);
  v2 = 0;
  if ( *(_WORD *)(v1 + 510) == 0xAA55 && ((*(_BYTE *)v1 + 23) & 0xFD) == 0 )
  {
    v2 = 1;
    if ( *((_DWORD *)this + 56) == 11 )
    {
      if ( *(_QWORD *)(v1 + 3) == 0x202020205346544ELL )
        return v2;
      v4 = 0;
      for ( i = (_BYTE *)(v1 + 450); !*i; i += 16 )
      {
        if ( (unsigned int)++v4 >= 4 )
          return v2;
      }
    }
    v6 = *((_QWORD *)this + 31);
    v7 = 0;
    while ( MBR_ENTRY::Validate((MBR_ENTRY *)(16LL * v7 + v1 + 446), 0, v6) )
    {
      if ( ++v7 >= 4 )
        return 0;
    }
  }
  return v2;
}
