__int64 __fastcall HUBISM_StoringRequestInSSDisabled(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 168) = a2;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  return 6005LL;
}
