__int64 __fastcall WdInstrExecuteInstruction(__int64 a1, int a2, unsigned int *a3)
{
  char v5; // r8
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // r8d
  int v11; // eax

  v5 = *(_BYTE *)(a1 + 1);
  v6 = 0;
  switch ( v5 & 0x3F )
  {
    case 0:
      if ( a3 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 24));
        v10 = *(_DWORD *)(a1 + 52);
        v11 = *(_DWORD *)(a1 + 56) & (v9 >> *(_BYTE *)(a1 + 49));
        LOBYTE(v6) = v11 == v10;
        *a3 = v6;
        return v10 != v11 ? 0xC0000001 : 0;
      }
      return (unsigned int)-1073741811;
    case 1:
      if ( a3 )
      {
        *a3 = *(_DWORD *)(a1 + 56) & ((*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 24)) >> *(_BYTE *)(a1 + 49));
        return v6;
      }
      return (unsigned int)-1073741811;
    case 2:
      v7 = *(_DWORD *)(a1 + 56) & *(_DWORD *)(a1 + 52);
      break;
    case 3:
      v7 = a2 & *(_DWORD *)(a1 + 56);
      break;
    default:
      return v6;
  }
  v8 = v7 << *(_BYTE *)(a1 + 49);
  if ( v5 < 0 )
    v8 |= (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 24)) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 40))(*(_QWORD *)(a1 + 24), v8);
  return v6;
}
