/*
 * XREFs of ACPIDeviceMatchCallback @ 0x1C002CB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDeviceMatchCallback(__int64 **a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ecx
  unsigned __int8 *v6; // rax
  __int64 v7; // r9
  int v8; // r8d
  int v9; // edx

  if ( a2 == 1 && a4 == 1 && *((_DWORD *)*a1 + 2) == 8 && (v4 = **a1, v5 = 0, v4) )
  {
    if ( !_bittest64((const signed __int64 *)(v4 + 8), 0x2Du) )
      return 2;
    v6 = *(unsigned __int8 **)(v4 + 608);
    v7 = *a3 - (_QWORD)v6;
    do
    {
      v8 = v6[v7];
      v9 = *v6 - v8;
      if ( v9 )
        break;
      ++v6;
    }
    while ( v8 );
    if ( !v9 )
      return 2;
  }
  else
  {
    return 1;
  }
  return v5;
}
