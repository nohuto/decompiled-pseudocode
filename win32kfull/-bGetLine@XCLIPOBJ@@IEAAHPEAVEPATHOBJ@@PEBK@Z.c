__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, const unsigned int *a3)
{
  __int64 v4; // r8
  int v5; // edi
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  v8 = 0;
  v4 = *((_QWORD *)this + 18);
  v5 = 0;
  while ( (*(_DWORD *)(v4 + 24) & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)v4 <= 1u )
    {
      if ( (*(_DWORD *)(v4 + 24) & 8) != 0 )
      {
        *(_QWORD *)(v4 + 4) = **(_QWORD **)(v4 + 16);
        *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v5 )
          return 1LL;
      }
      else
      {
        if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, &v8) )
          return 0LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v8 | v5) )
          return 1LL;
        v5 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 4) = **(_QWORD **)(v4 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v5 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
    }
    v4 = *((_QWORD *)this + 18);
  }
  return 0LL;
}
