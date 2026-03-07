unsigned __int16 *__fastcall FHOBJ::pwszName(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    v3 = *(_DWORD *)(v2 + 8);
  else
    v3 = *(_DWORD *)(v2 + 16);
  return (unsigned __int16 *)(v2 + v3);
}
