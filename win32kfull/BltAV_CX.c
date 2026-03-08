/*
 * XREFs of BltAV_CX @ 0x1C025F420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall BltAV_CX(__int64 a1)
{
  _BYTE *v1; // r8
  char *v2; // r9
  _BYTE *v3; // r10
  __int64 v4; // r11
  int v5; // ecx
  char result; // al

  v1 = *(_BYTE **)(a1 + 352);
  v2 = (char *)(*(_QWORD *)(a1 + 248) + 3LL);
  v3 = *(_BYTE **)(a1 + 360);
  v4 = *(int *)(a1 + 368);
  if ( (*(_DWORD *)a1 & 0x2000) != 0 )
  {
    do
    {
      v5 = (unsigned __int8)*v2;
      v2 += 4;
      *v1 = (v5 + (unsigned int)(unsigned __int8)*v1 + 1) >> 1;
      v1 += v4;
    }
    while ( v1 != v3 );
  }
  else
  {
    do
    {
      result = *v2;
      v2 += 4;
      *v1 = result;
      v1 += v4;
    }
    while ( v1 != v3 );
  }
  return result;
}
