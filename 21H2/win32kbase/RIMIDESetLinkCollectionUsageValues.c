/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1C019E460
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C019D008 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_SetUsageValue @ 0x1C018E94C (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C018E9B8 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMIDESetLinkCollectionUsageValues(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int v11; // edi
  unsigned int v12; // r13d
  char *v13; // r15
  struct _HIDP_PREPARSED_DATA *v14; // r12
  int v15; // eax
  int v16; // eax
  __int64 v17; // rsi
  unsigned __int16 *v18; // rbx
  unsigned int v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v21[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v21, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 456);
  v9 = *(_WORD *)(a3 + 2);
  v10 = *(_WORD *)a3;
  v11 = 0;
  v20[0] = 1;
  v12 = *(unsigned __int16 *)(v8 + 44);
  v13 = *(char **)(v8 + 24);
  v14 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  if ( rimHidP_SetUsageValue(HidP_Input, v10, a4, v9, *(_DWORD *)(a3 + 4), v14, v13, v12) < 0 )
  {
    v15 = *(_DWORD *)(a3 + 4);
    if ( v15 == 1 )
    {
      v11 = 1;
      v16 = *(_DWORD *)(a3 + 8);
      v21[0] = *(_QWORD *)a3;
      LODWORD(v21[1]) = v16;
    }
    else if ( v15 )
    {
      return 0LL;
    }
  }
  v17 = 0LL;
  if ( v11 )
  {
    v18 = (unsigned __int16 *)v21;
    do
    {
      if ( v20[0] <= 1 )
      {
        if ( rimHidP_SetUsages(HidP_Input, *v18, a4, (unsigned __int16 *)v21 + 6 * v17 + 1, v20, v14, v13, v12) < 0 )
          return 0LL;
        if ( a5 && *v18 == 13 && v18[1] == 66 )
          ++*a5;
      }
      v17 = (unsigned int)(v17 + 1);
      v18 += 6;
    }
    while ( (unsigned int)v17 < v11 );
  }
  return 1LL;
}
