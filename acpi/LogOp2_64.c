__int64 __fastcall LogOp2_64(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  bool v4; // di
  int v5; // ebp
  __int64 v6; // rax

  v2 = 0LL;
  v4 = 0;
  v5 = ValidateArgTypes(a1, a2[10], 1, "II");
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( *(_DWORD *)(a2[7] + 8LL) == 144 )
  {
    v6 = a2[10];
    if ( !*(_QWORD *)(v6 + 16) )
      goto LABEL_15;
  }
  else
  {
    if ( *(_DWORD *)(a2[7] + 8LL) != 145 )
    {
      switch ( *(_DWORD *)(a2[7] + 8LL) )
      {
        case 0x93:
          v4 = *(_QWORD *)(a2[10] + 16LL) == *(_QWORD *)(a2[10] + 56LL);
          break;
        case 0x94:
          v4 = *(_QWORD *)(a2[10] + 16LL) > *(_QWORD *)(a2[10] + 56LL);
          break;
        case 0x95:
          v4 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
          break;
      }
      goto LABEL_15;
    }
    v6 = a2[10];
    if ( *(_QWORD *)(v6 + 16) )
      goto LABEL_14;
  }
  if ( *(_QWORD *)(v6 + 56) )
LABEL_14:
    v4 = 1;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( v4 )
    v2 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
  *(_QWORD *)(a2[11] + 16LL) = v2;
  return (unsigned int)v5;
}
