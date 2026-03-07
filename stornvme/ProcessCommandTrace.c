__int64 __fastcall ProcessCommandTrace(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int128 v4; // xmm2
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 *v7; // rcx
  __int64 v8; // r12
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  v4 = *(_OWORD *)(v3 + 4096);
  if ( DWORD1(v4) == -1 || (v5 = *(_DWORD *)(a1 + 232), v6 = 0, !v5) )
  {
LABEL_17:
    v8 = 0LL;
  }
  else
  {
    v7 = (__int64 *)(a1 + 1952);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        if ( *(_DWORD *)(v8 + 16) == HIDWORD(*(_QWORD *)(v3 + 4096)) )
          break;
      }
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(a1 + 24) )
    StorPortExtendedFunction(87LL, a1, v8, 0LL);
  if ( (*(_BYTE *)(v3 + 4253) & 1) != 0 )
  {
    result = (unsigned int)(unsigned __int8)v4 - 1;
    switch ( (char)v4 )
    {
      case 1:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 2:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 5:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 6:
        if ( *(_BYTE *)(a1 + 24) )
          result = StorPortExtendedFunction(85LL, a1, v8, 0LL);
        break;
      case 9:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 10:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 16:
        if ( *(_BYTE *)(a1 + 24) )
          goto LABEL_35;
        break;
      case 17:
        if ( *(_BYTE *)(a1 + 24) )
          goto LABEL_35;
        break;
      case 25:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case 26:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case -128:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
      case -127:
        if ( *(_BYTE *)(a1 + 24) )
          goto LABEL_35;
        break;
      case -126:
        if ( *(_BYTE *)(a1 + 24) )
LABEL_35:
          result = StorPortExtendedFunction(86LL, a1, v8, 0LL);
        break;
      default:
        if ( *(_BYTE *)(a1 + 24) )
          return StorPortExtendedFunction(87LL, a1, v8, 0LL);
        break;
    }
  }
  else
  {
    result = (unsigned int)(unsigned __int8)v4 - 1;
    if ( (unsigned __int8)v4 == 1 || (result = (unsigned int)(unsigned __int8)v4 - 2, (unsigned __int8)v4 == 2) )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        return result;
      return StorPortExtendedFunction(87LL, a1, v8, 0LL);
    }
    if ( (unsigned __int8)v4 == 9 )
    {
      if ( *(_BYTE *)(a1 + 24) )
        return StorPortExtendedFunction(87LL, a1, v8, 0LL);
    }
    else if ( *(_BYTE *)(a1 + 24) )
    {
      return StorPortExtendedFunction(87LL, a1, v8, 0LL);
    }
  }
  return result;
}
