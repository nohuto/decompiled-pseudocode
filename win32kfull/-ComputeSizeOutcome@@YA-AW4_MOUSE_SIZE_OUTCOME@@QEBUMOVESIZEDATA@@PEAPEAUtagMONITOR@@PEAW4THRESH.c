/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EA46C
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EB088 (-HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRE.c)
 */

__int64 __fastcall ComputeSizeOutcome(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v5; // edx
  unsigned int v7; // ebp
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 200) >> 15;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 268);
  v15 = 0;
  v16 = 0LL;
  v9 = HitTargetAndMonitorFromPoint(v8, v5 & 7, &v16, &v15);
  v10 = v16;
  v11 = v15;
  *a2 = v16;
  *a3 = v11;
  if ( !v9 )
  {
    v12 = 1;
    if ( *(_DWORD *)(a1 + 240) != 4 )
      return 4;
    return v12;
  }
  if ( v11 == 3 || !v11 )
  {
    v12 = 1;
    if ( (unsigned int)(*(_DWORD *)(a1 + 176) - 1) <= 1 )
      return v12;
  }
  v13 = *(_DWORD *)(a1 + 240);
  if ( v13 == 4 )
    goto LABEL_12;
  if ( v10 != *(_QWORD *)(a1 + 232) )
    return 3LL;
  if ( v11 == v13 )
    return 2LL;
  if ( v10 != *(_QWORD *)(a1 + 232) || v11 != v13 )
    return 3LL;
LABEL_12:
  if ( v13 == 4 )
    return 5;
  return v7;
}
