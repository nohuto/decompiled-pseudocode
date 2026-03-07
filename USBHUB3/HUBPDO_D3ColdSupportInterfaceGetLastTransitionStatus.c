__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetLastTransitionStatus(__int64 a1, _DWORD *a2)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax

  *a2 = 1;
  v3 = *(__int64 (__fastcall **)(_QWORD))(a1 + 376);
  if ( !v3 || (result = v3(*(_QWORD *)(a1 + 320)), *a2 != 2) )
  {
    result = *(unsigned int *)(a1 + 32);
    if ( (result & 0x40) != 0 )
      *a2 = 2;
  }
  return result;
}
