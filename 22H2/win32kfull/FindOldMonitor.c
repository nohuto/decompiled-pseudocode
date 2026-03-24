/*
 * XREFs of FindOldMonitor @ 0x1C0041D9C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E8DC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040980 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxComputeProposedPerMonRect @ 0x1C0040CD4 (xxxComputeProposedPerMonRect.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0041F48 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0041FC8 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall FindOldMonitor(__int64 a1, _DWORD *a2, __int128 *a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // edi
  struct tagMONITORPOS *i; // r15
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  unsigned int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[88]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[43]; // [rsp+C8h] [rbp-38h] BYREF

  v20 = a1;
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, 0x150uLL);
  v6 = -1;
  v7 = 0;
  v24[5] = v23;
  if ( a3 )
    v8 = *a3;
  else
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  v18 = v8;
  v9 = HIDWORD(v8) - DWORD1(v8);
  v10 = DWORD2(v8) - v8;
  if ( DWORD2(v8) == (_DWORD)v8 )
  {
    v10 = 1;
    DWORD2(v18) = DWORD2(v8) + 1;
  }
  if ( !v9 )
  {
    ++HIDWORD(v18);
    v9 = 1;
  }
  v11 = 0;
  for ( i = (struct tagMONITORPOS *)(a2 + 2); (signed int)v11 < *a2; ++v11 )
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v23, i);
    v19 = 0LL;
    v13 = *(_DWORD *)(*(_QWORD *)(v20 + 40) + 288LL) >> 8;
    LOWORD(v13) = v13 & 0x1FF;
    v21 = *(_OWORD *)GetMonitorRectForDpi(v22, v24, v13);
    if ( (unsigned int)IntersectRect(&v19, &v18, &v21) )
    {
      v14 = DWORD2(v19) - v19;
      v15 = HIDWORD(v19) - DWORD1(v19);
      DWORD2(v19) = v14;
      HIDWORD(v19) -= DWORD1(v19);
      if ( v14 == v10 && v15 == v9 )
        return v11;
      v17 = v15 * v14;
      if ( v17 > v7 )
      {
        v7 = v17;
        v6 = v11;
      }
    }
    i = (struct tagMONITORPOS *)((char *)i + 48);
  }
  return v6;
}
