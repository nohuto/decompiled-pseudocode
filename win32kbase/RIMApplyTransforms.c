__int64 __fastcall RIMApplyTransforms(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // r14d
  bool v11; // zf
  _DWORD *v12; // r13
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 360);
  v6 = 0;
  if ( (v5 & 8) == 0 || (v5 & 0x2000) != 0 )
  {
    v18 = 0;
    RIMTransformCoordinates(a1, a2, a3 + 4, a4, (__int64)&v18);
    v11 = (*(_DWORD *)(a1 + 360) & 0x200) == 0;
    v12 = a5;
    *a5 = v18;
    if ( v11 )
    {
      *(_QWORD *)(a3 + 12) = *(_QWORD *)(a3 + 4);
    }
    else
    {
      RIMTransformCoordinates(a1, a2, a3 + 12, a4, (__int64)&v18);
      *v12 = v18;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 1) <= 4 )
      RIMApplyDisplayOrientationToPointerProps(*(_DWORD *)(a1 + 224), (unsigned int *)(a3 + 56));
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a3 + 4), (_DWORD *)(a3 + 120));
  v13 = *(_DWORD *)(a1 + 360);
  if ( (v13 & 8) == 0 || (v13 & 0x2000) != 0 )
  {
    v6 = RIMTransformPhysicalPointToScreen(a1, a3 + 120, a3 + 112);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 160);
    *(_DWORD *)(a3 + 4) += v14;
    *(_DWORD *)(a3 + 8) += HIDWORD(v14);
    *(_QWORD *)(a3 + 112) = *(_QWORD *)(a3 + 4);
    ApiSetTransformForInputMagnification(a1, a3 + 120);
    *(_QWORD *)(a3 + 12) = *(_QWORD *)(a3 + 4);
  }
  if ( *(_DWORD *)(a3 + 20) )
  {
    if ( ((*(_DWORD *)(a1 + 224) - 2) & 0xFFFFFFFD) == 0 )
    {
      v15 = *(_DWORD *)(a1 + 360);
      if ( (v15 & 8) == 0 || (v15 & 0x2000) != 0 )
      {
        v16 = *(_DWORD *)(a3 + 24);
        *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 28);
        *(_DWORD *)(a3 + 28) = v16;
      }
    }
    RIMSetContactBoundary(a1, a3 + 184, *(_QWORD *)(a3 + 12), *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28));
    *(_OWORD *)(a3 + 168) = *(_OWORD *)(a3 + 184);
  }
  return (unsigned int)v6;
}
