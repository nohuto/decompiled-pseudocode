/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0006260
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     FreeMsiInfo @ 0x1C000642C (FreeMsiInfo.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rbx
  unsigned __int16 v4; // bp
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _OWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v3 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  ((void (*)(void))FreeMsiInfo)();
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 2) > 1 )
    goto LABEL_18;
  v4 = 0;
  if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v9) )
    goto LABEL_17;
  do
  {
    if ( v4 )
    {
      if ( v3 == *((_QWORD *)&v9[0] + 1) && *(_DWORD *)(a1 + 16) != 3 )
        *(_DWORD *)(a1 + 16) = 2;
    }
    else
    {
      v3 = *((_QWORD *)&v9[0] + 1);
    }
    ++v4;
  }
  while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v4, v9) );
  if ( !v4 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 16) = 1;
LABEL_18:
    v4 = 1;
  }
  v5 = (_QWORD *)(a1 + 280);
  *(_WORD *)(a1 + 272) = v4;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v4, 1701672526LL);
  if ( *(_QWORD *)(a1 + 280) )
  {
    NVMeZeroMemory(*(void **)(a1 + 280), 24 * *(unsigned __int16 *)(a1 + 272));
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 272), 1701672526LL);
    if ( *(_QWORD *)(a1 + 288) )
    {
      NVMeZeroMemory(*(void **)(a1 + 288), 16 * *(unsigned __int16 *)(a1 + 272));
      while ( v1 < *(_WORD *)(a1 + 272) )
      {
        v6 = 3LL * v1;
        *(_DWORD *)(*v5 + 8 * v6) = v1;
        v7 = *(_QWORD *)(a1 + 288) + 16LL * v1++;
        *(_QWORD *)(*v5 + 8 * v6 + 8) = v7;
      }
      return 1;
    }
  }
  FreeMsiInfo(a1);
  return 0;
}
