__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(a1, *(_QWORD *)a2);
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(a1 + 8, *(_QWORD *)(a2 + 8));
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
  result = a1;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  return result;
}
