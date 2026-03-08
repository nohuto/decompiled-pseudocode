/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C024A494
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024A264 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  unsigned int v3; // ebp
  int v5; // edi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // ecx
  __int16 v10; // ax

  v3 = *((_DWORD *)this + 12) * *((_DWORD *)this + 7);
  v5 = 0;
  v6 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) / *(_QWORD *)this;
  v7 = 120 * abs32(*((_DWORD *)this + 15));
  *((_DWORD *)this + 16) += v7;
  if ( v6 >= *((int *)InteractiveControlManager::Instance(v7) + 47) )
  {
    v8 = *((_DWORD *)this + 16);
    if ( v8 >= v3 )
    {
      do
      {
        v5 += *((_DWORD *)this + 12);
        v8 -= v3;
      }
      while ( v8 >= v3 );
      *((_DWORD *)this + 16) = v8;
    }
  }
  if ( v5 )
  {
    v9 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
    v10 = -(__int16)v5;
    if ( *((_DWORD *)this + 14) == 2 )
    {
      if ( v9 <= 0 )
        LOWORD(v5) = -(__int16)v5;
    }
    else
    {
      if ( v9 <= 0 )
        v10 = v5;
      LOWORD(v5) = v10;
    }
  }
  else
  {
    LOWORD(v5) = 0;
  }
  *a2 = v5;
  return 0LL;
}
