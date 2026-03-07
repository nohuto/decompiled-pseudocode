__int64 __fastcall HUBPDO_D3ColdSupportInterfaceSetD3ColdSupport(_QWORD *a1, char a2)
{
  void (__fastcall *v2)(_QWORD); // rax
  __int64 result; // rax

  v2 = (void (__fastcall *)(_QWORD))a1[43];
  if ( v2 )
    v2(a1[40]);
  result = a1[3];
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(result + 1636), 0x1000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(result + 1636), 0xFFFFEFFF);
  return result;
}
