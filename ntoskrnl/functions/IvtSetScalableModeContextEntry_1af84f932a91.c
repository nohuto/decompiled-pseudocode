__int64 __fastcall IvtSetScalableModeContextEntry(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // ecx
  __int64 *v4; // r9
  _QWORD *v5; // r10
  __int64 result; // rax

  if ( (*(_BYTE *)a2 & 1) == 0 )
    *a3 = *a2;
  v3 = 3;
  v4 = a2 + 3;
  v5 = a3 + 3;
  do
  {
    result = *v4--;
    *v5-- = result;
    --v3;
  }
  while ( v3 );
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    result = *a2;
    *a3 = *a2;
  }
  return result;
}
