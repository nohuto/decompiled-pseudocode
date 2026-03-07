__int64 __fastcall HUBDSM_CheckingBytesReturnedInAlternateConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  result = 4061LL;
  if ( *(_BYTE *)(v1 + 1733) == 2 && *(_DWORD *)(v1 + 256) < (unsigned int)*(unsigned __int16 *)(v1 + 1734) )
    return 4089LL;
  return result;
}
