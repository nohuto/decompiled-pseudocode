__int64 __fastcall CopyObjData(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      result = *(_QWORD *)(a2 + 8);
      _InterlockedAdd((volatile signed __int32 *)(result + 8), 1u);
    }
    else if ( *(_QWORD *)(a2 + 32) )
    {
      _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
      *(_WORD *)a1 |= 1u;
      *(_QWORD *)(a1 + 8) = a2;
    }
  }
  return result;
}
