__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v6; // xmm1
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 160);
  v6 = *(_OWORD *)(a1 + 176);
  v8 = *a2;
  v10 = v3;
  *(_OWORD *)v11 = v6;
  if ( !(unsigned int)RIMConvertPointCoordinates(v8, v11, (int *)&v10, (_QWORD *)a3) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  ApiSetTransformForInputMagnification(a1, a2);
  return 0LL;
}
