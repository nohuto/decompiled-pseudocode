__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback(
        __int64 a1,
        CCD_TOPOLOGY *a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  unsigned int i; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rdx
  __int64 v16; // rax

  for ( i = 0; ; ++i )
  {
    v11 = *((_QWORD *)a2 + 8);
    v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
    if ( i >= v12 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
    v14 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 7) == a3
      && *((_DWORD *)PathDescriptor + 4) == *(_DWORD *)(a1 + 404)
      && *((_DWORD *)PathDescriptor + 5) == *(_DWORD *)(a1 + 408) )
    {
      if ( a5 )
        *(_QWORD *)PathDescriptor |= 0x200000000000000uLL;
      if ( a6 )
        *(_QWORD *)PathDescriptor |= 0x100000000000000uLL;
      switch ( a4 )
      {
        case 1:
          *(_QWORD *)PathDescriptor |= 0x100000000000000uLL;
          continue;
        case 2:
          v16 = 0x500000000000000LL;
          break;
        case 3:
          goto LABEL_23;
        case 4:
          v16 = 0x900000000000000LL;
          break;
        case 5:
LABEL_23:
          v16 = 0x1100000000000000LL;
          break;
        default:
          continue;
      }
      *(_QWORD *)v14 |= v16;
      continue;
    }
  }
  return 0LL;
}
