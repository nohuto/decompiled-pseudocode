__int64 __fastcall ClrFTrueVis(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 i; // rbx

  result = a1[5];
  v3 = *(_QWORD *)(result + 136);
  if ( v3 || (*(_BYTE *)(result + 17) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0, a1, 0x110u, 1);
    *(_QWORD *)(a1[5] + 136) = 0LL;
    result = DecPaintCount((__int64)a1);
  }
  for ( i = a1[14]; i; i = *(_QWORD *)(i + 88) )
  {
    result = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}
