/*
 * XREFs of SizeBoxHwnd @ 0x1C024E490
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEBE8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     FindNCHit @ 0x1C00E609C (FindNCHit.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     DrawSize @ 0x1C022CAE8 (DrawSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  int v3; // ebx
  int v4; // r11d
  int v5; // r10d
  char v6; // cl
  int v8; // ecx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  v3 = *(_DWORD *)(v1 + 100);
  v4 = *(_BYTE *)(v1 + 26) & 0x40;
  if ( (*(_BYTE *)(v1 + 26) & 0x40) != 0 )
    v5 = *(_DWORD *)(v1 + 88);
  else
    v5 = *(_DWORD *)(v1 + 96);
  while ( 1 )
  {
    if ( (*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D )
      return 0LL;
    v6 = *(_BYTE *)(v1 + 31);
    if ( (*(_BYTE *)(v1 + 30) & 4) != 0 )
      break;
    if ( (v6 & 0x40) == 0 || (*(_BYTE *)(v1 + 16) & 8) != 0 )
      return 0LL;
    v2 = *(_QWORD *)(v2 + 104);
    v1 = *(_QWORD *)(v2 + 40);
  }
  if ( (v6 & 1) != 0 )
    return 0LL;
  if ( v4 )
    v8 = *(_DWORD *)(v1 + 104);
  else
    v8 = *(_DWORD *)(v1 + 112);
  if ( !v4 )
  {
    if ( v5 + 2 >= v8 )
      goto LABEL_19;
    return 0LL;
  }
  if ( v5 - 2 > v8 )
    return 0LL;
LABEL_19:
  if ( v3 + 2 < *(_DWORD *)(v1 + 116) )
    return 0LL;
  return v2;
}
