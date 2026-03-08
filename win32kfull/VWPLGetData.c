/*
 * XREFs of VWPLGetData @ 0x1C00CBC04
 * Callers:
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00CB534 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CBBC4 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CBF8C (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLGetData(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // ecx
  _QWORD *v7; // r8
  __int64 result; // rax

  v3 = 0;
  if ( !a1 )
    return 0LL;
  v6 = *a1;
  if ( v6 )
  {
    v7 = a1 + 6;
    do
    {
      if ( a2 == *v7 )
        break;
      ++v3;
      v7 += 2;
    }
    while ( v3 < v6 );
  }
  if ( v3 >= v6 )
    return 0LL;
  result = 1LL;
  *a3 = *(_QWORD *)&a1[4 * v3 + 4];
  return result;
}
