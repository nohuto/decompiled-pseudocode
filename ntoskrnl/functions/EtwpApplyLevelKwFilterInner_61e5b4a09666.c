char __fastcall EtwpApplyLevelKwFilterInner(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int8 v6; // al

  v4 = *(_QWORD *)(104LL * a2 + *(_QWORD *)(a1 + 384) + 64);
  if ( !v4 )
    return 1;
  v6 = *(_BYTE *)(v4 + 16);
  if ( (a3 <= v6 || !v6) && (!a4 || (a4 & *(_QWORD *)v4) != 0 && (a4 & *(_QWORD *)(v4 + 8)) == *(_QWORD *)(v4 + 8)) )
    return *(_BYTE *)(v4 + 17);
  else
    return *(_BYTE *)(v4 + 17) == 0;
}
