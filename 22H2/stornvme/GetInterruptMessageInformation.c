/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0009B6C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     FreeMsiInfo @ 0x1C0009A38 (FreeMsiInfo.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v3; // bp
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8

  v1 = 0;
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  FreeMsiInfo(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 2) > 1 )
    goto LABEL_10;
  v3 = 0;
  if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL) )
    goto LABEL_9;
  do
  {
    if ( v3 && *(_DWORD *)(a1 + 16) != 3 )
      *(_DWORD *)(a1 + 16) = 2;
    ++v3;
  }
  while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v3) );
  if ( !v3 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 16) = 1;
LABEL_10:
    v3 = 1;
  }
  v4 = (_QWORD *)(a1 + 288);
  *(_WORD *)(a1 + 280) = v3;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v3);
  if ( *(_QWORD *)(a1 + 288) )
  {
    NVMeZeroMemory(*(void **)(a1 + 288), 24 * *(unsigned __int16 *)(a1 + 280));
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 280));
    if ( *(_QWORD *)(a1 + 296) )
    {
      NVMeZeroMemory(*(void **)(a1 + 296), 16 * *(unsigned __int16 *)(a1 + 280));
      while ( v1 < *(_WORD *)(a1 + 280) )
      {
        v5 = 3LL * v1;
        *(_DWORD *)(*v4 + 8 * v5) = v1;
        v6 = *(_QWORD *)(a1 + 296) + 16LL * v1++;
        *(_QWORD *)(*v4 + 8 * v5 + 8) = v6;
      }
      return 1;
    }
  }
  FreeMsiInfo(a1);
  return 0;
}
