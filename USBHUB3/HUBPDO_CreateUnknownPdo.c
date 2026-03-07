__int64 __fastcall HUBPDO_CreateUnknownPdo(_QWORD *a1)
{
  *(_DWORD *)(a1[1] + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}
