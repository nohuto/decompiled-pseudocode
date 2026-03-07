__int64 __fastcall XmXlatOpcode(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  int v4; // eax
  unsigned __int16 *OffsetAddress; // rax

  *(_DWORD *)(a1 + 120) = 0;
  v1 = a1 + 24;
  v3 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 137) )
    v4 = *(_DWORD *)(a1 + 36);
  else
    v4 = *(unsigned __int16 *)(a1 + 36);
  OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(a1, (unsigned int)(v3 + v4));
  XmSetSourceValue(a1, OffsetAddress);
  *(_QWORD *)(a1 + 88) = v1;
  return 1LL;
}
