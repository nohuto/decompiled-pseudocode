/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C022700C
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02270EC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GetScreenRect @ 0x1C00E4C8C (GetScreenRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C02AA584 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  int v15[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x29D )
  {
    v10 = 0;
    v11 = 1;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 88);
    v11 = 0;
  }
  v15[0] = a4 + v10;
  v15[2] = a4 + a6;
  if ( v11 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(v9 + 92);
  v15[3] = a7 + a5;
  v15[1] = a5 + v12;
  v14 = *GetScreenRect(&v14);
  if ( (unsigned int)IntersectRect(v15, v15, v14.m128i_i32) )
    return GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), a2, a3);
  else
    return 0LL;
}
