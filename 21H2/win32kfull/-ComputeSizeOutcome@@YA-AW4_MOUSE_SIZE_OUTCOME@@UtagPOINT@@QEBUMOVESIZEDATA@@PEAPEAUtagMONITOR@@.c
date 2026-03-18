/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02097EC
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A7C0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD.c)
 */

__int64 __fastcall ComputeSizeOutcome(struct tagPOINT a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax
  struct tagMONITOR *v8; // rdx
  int v9; // ecx
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+40h] [rbp+18h] BYREF
  struct tagMONITOR *v13; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v7 = HitTargetAndMonitorFromPoint(
         a1,
         (const struct MOVESIZEDATA *const)a2,
         &v13,
         (enum THRESHOLD_MARGIN_DIRECTION *)&v12);
  v8 = v13;
  v9 = v12;
  *a3 = v13;
  *a4 = v9;
  if ( !v7 )
  {
    result = 4LL;
    if ( *(_DWORD *)(a2 + 240) != 4 )
      return result;
    return 1LL;
  }
  if ( (v9 == 3 || !v9) && (unsigned int)(*(_DWORD *)(a2 + 176) - 1) <= 1 )
    return 1LL;
  v10 = *(_DWORD *)(a2 + 240);
  if ( v10 == 4 )
    return 5LL;
  if ( v8 != *(struct tagMONITOR **)(a2 + 232) )
    return 3LL;
  if ( v9 == v10 )
    return 2LL;
  if ( v8 == *(struct tagMONITOR **)(a2 + 232) && v9 == v10 )
    return 0LL;
  else
    return 3LL;
}
