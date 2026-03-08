/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0009AAC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     FreeMsiInfo @ 0x1C0009978 (FreeMsiInfo.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 v6; // rbx
  unsigned __int16 v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v6 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  FreeMsiInfo(a1, a2, a3, a4);
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 2) > 1 )
    goto LABEL_12;
  v7 = 0;
  if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v15) )
    goto LABEL_11;
  do
  {
    if ( v7 )
    {
      if ( v6 == *((_QWORD *)&v15[0] + 1) && *(_DWORD *)(a1 + 16) != 3 )
        *(_DWORD *)(a1 + 16) = 2;
    }
    else
    {
      v6 = *((_QWORD *)&v15[0] + 1);
    }
    ++v7;
  }
  while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v7, v15) );
  if ( !v7 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 16) = 1;
LABEL_12:
    v7 = 1;
  }
  v8 = (_QWORD *)(a1 + 288);
  *(_WORD *)(a1 + 280) = v7;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v7, 1701672526LL);
  if ( *(_QWORD *)(a1 + 288) )
  {
    NVMeZeroMemory(*(void **)(a1 + 288), 24 * *(unsigned __int16 *)(a1 + 280));
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 280), 1701672526LL);
    if ( *(_QWORD *)(a1 + 296) )
    {
      NVMeZeroMemory(*(void **)(a1 + 296), 16 * *(unsigned __int16 *)(a1 + 280));
      while ( v4 < *(_WORD *)(a1 + 280) )
      {
        v12 = 3LL * v4;
        *(_DWORD *)(*v8 + 8 * v12) = v4;
        v13 = *(_QWORD *)(a1 + 296) + 16LL * v4++;
        *(_QWORD *)(*v8 + 8 * v12 + 8) = v13;
      }
      return 1;
    }
  }
  FreeMsiInfo(a1, v9, v10, v11);
  return 0;
}
