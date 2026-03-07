__int64 __fastcall IovpInternalCompletionTrap(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  return 0LL;
}
