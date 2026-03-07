__int64 __fastcall ST_STORE<SM_TRAITS>::StRegionReadDereference(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rdx
  char v5; // cl

  v2 = *(_QWORD *)(a1 + 1040);
  result = a2;
  v4 = *(_QWORD *)(a1 + 1032);
  v5 = *(_BYTE *)(result + v2);
  if ( v5 )
    *(_BYTE *)(result + v2) = v5 - 1;
  else
    *(_WORD *)(v4 + 2 * result) &= ~0x4000u;
  return result;
}
