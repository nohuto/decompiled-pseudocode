__int64 __fastcall DMMVIDPNPRESENTPATH::GetContentRotationHw(DMMVIDPNPRESENTPATH *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 29);
  if ( (_DWORD)result && (unsigned int)(result - 254) > 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 407LL) )
      return 1LL;
  }
  return result;
}
