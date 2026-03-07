__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 1;
    if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
    {
      *a2 = 0LL;
      a2[1] = 0x7FFFFFFFFFFFLL;
      a2[2] = qword_140C66CE8;
      v5 = MiHyperSpaceSize();
      v4 = 2;
      *(_QWORD *)(v6 + 24) = v5 + qword_140C66CE8 - 1;
      return v4;
    }
    if ( (*(_BYTE *)(v3 + 184) & 7) == 1 )
    {
      *a2 = qword_140C65668;
      v10 = qword_140C65668 + 0x7FFFFFFFFFLL;
    }
    else
    {
      switch ( *(_BYTE *)(v3 + 184) & 7 )
      {
        case 2:
          *a2 = qword_140C66B60;
          v8 = qword_140C66B40;
          v9 = qword_140C66B60;
          break;
        case 3:
          *a2 = qword_140C66B18;
          v8 = qword_140C66AF8;
          v9 = qword_140C66B18;
          break;
        case 4:
          *a2 = qword_140C66A88;
          v8 = qword_140C66A68;
          v9 = qword_140C66A88;
          break;
        case 5:
          *a2 = qword_140C6A198;
          v10 = qword_140C6A1A0 + qword_140C6A198 - 1;
          goto LABEL_11;
        case 6:
          *a2 = qword_140C669B0;
          v8 = qword_140C66990;
          v9 = qword_140C669B0;
          break;
        case 7:
          *a2 = qword_140C6A168;
          v10 = qword_140C6A170 + qword_140C6A168 - 1;
          goto LABEL_11;
        default:
          return v4;
      }
      v10 = v9 - 1 + (v8 << 21);
    }
LABEL_11:
    a2[1] = v10;
    return v4;
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF67FFFFFFFFFuLL;
  a2[3] = -1LL;
  a2[2] = 0xFFFFF70000000000uLL;
  return 2LL;
}
