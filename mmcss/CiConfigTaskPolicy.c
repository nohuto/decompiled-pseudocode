unsigned __int8 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 result; // al
  bool v3; // zf
  __int64 v4; // rcx

  result = *(_BYTE *)(a1 + 3) & 0xFE;
  v3 = CiSystemResponsiveness == 100;
  *(_BYTE *)(a1 + 3) = result;
  if ( v3 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)result >> 4) & 7];
  }
  else
  {
    if ( (result & 0x70) == 0x30 )
    {
      *(_BYTE *)a1 = 24;
    }
    else
    {
      *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)result >> 4) & 7];
      if ( (result & 0x70) != 0x20 )
        goto LABEL_5;
    }
    result |= 1u;
    *(_BYTE *)(a1 + 3) = result;
  }
LABEL_5:
  v4 = qword_1C0007270 & *(_QWORD *)(a1 + 32);
  v3 = (qword_1C0007270 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) = v4;
  if ( v3 )
    v4 = qword_1C0007270;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
