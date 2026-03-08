/*
 * XREFs of ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C00F5A22
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1C023A6B4 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowMoveNow(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        int *a4)
{
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  unsigned __int64 v12; // r11
  int v13; // ecx
  int v14; // ecx

  if ( (*(_DWORD *)a3 & 0x800) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (*(_DWORD *)a3 & 0x80u) != 0 )
    {
      v9 = 1;
      goto LABEL_6;
    }
  }
  v9 = 0;
LABEL_6:
  v10 = CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x20u, 0);
  if ( *((_DWORD *)this + 911) != 2 )
  {
    if ( v9 && (*(_DWORD *)a3 & 0x1000) != 0 )
      return 0LL;
    v12 = *((_QWORD *)this + 12);
    if ( *((_DWORD *)this + 5) )
      v13 = *((_DWORD *)this + 115);
    else
      v13 = 0;
    if ( v8 || (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)a3 + 9)) / v12) < *((unsigned int *)this + v13 + 130) )
    {
      v14 = 0;
      if ( v8 )
      {
LABEL_22:
        if ( !v14 && !v10 )
          goto LABEL_10;
        return 1LL;
      }
    }
    else
    {
      v14 = 1;
    }
    if ( (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)this + 488)) / v12) <= *((unsigned int *)this + 135) )
      return 1LL;
    goto LABEL_22;
  }
  if ( v9 && !v10 )
  {
    *a4 = 1;
LABEL_10:
    *(_DWORD *)a3 |= 0x1000u;
    return 0LL;
  }
  return 1LL;
}
