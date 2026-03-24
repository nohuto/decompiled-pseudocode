/*
 * XREFs of CreateCacheDC @ 0x1C006B8B0
 * Callers:
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     GreGetBounds @ 0x1C0037E80 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 *     IsGetStyleWindowSupported @ 0x1C006BAD8 (IsGetStyleWindowSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  HDEV v7; // rcx
  HDC DisplayDC; // rbp
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // esi
  int v13; // eax
  __int64 v14; // rdx

  v6 = Win32AllocPool(96LL, 0x63647355u);
  if ( !v6 )
    return 0LL;
  if ( a3 )
    v7 = *(HDEV *)(a3 + 232);
  else
    v7 = *(HDEV *)(gpDispInfo + 40);
  DisplayDC = GreCreateDisplayDC(v7, 0, 2);
  if ( !DisplayDC )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() >= 0 && qword_1C02566B0 )
      v9 = qword_1C02566B0(a1, 2848LL);
    else
      v9 = 0LL;
    v10 = a2 & 0xFFFFBFFF;
    if ( v9 )
      v10 = a2;
    a2 = v10;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 24);
  *(_QWORD *)(gpDispInfo + 24) = v6;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = a3;
  v11 = -1073741637;
  *(_QWORD *)(v6 + 8) = DisplayDC;
  *(_DWORD *)(v6 + 64) = a2;
  *(_QWORD *)(v6 + 16) = a1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v9;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx((__int64)DisplayDC, 0x80000002, 0, 0);
    *(_QWORD *)(v6 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 248) = v6;
    if ( (a2 & 0x4000) != 0 )
    {
      v13 = qword_1C02566F8 ? qword_1C02566F8() : -1073741637;
      if ( v13 >= 0 && qword_1C0256700 )
        qword_1C0256700(v6, 0LL);
    }
  }
  else
  {
    GreSetDCOwnerEx((__int64)DisplayDC, 0x80000012, 0, 0);
    *(_QWORD *)(v6 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 136);
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v14 + 40) = v6;
    *(_DWORD *)(v6 + 64) |= 0x1000u;
    if ( qword_1C02566E8 )
      v11 = qword_1C02566E8();
    if ( v11 >= 0 && qword_1C02566F0 )
      qword_1C02566F0(v6);
  }
  if ( *(_QWORD *)(gpDispInfo + 32) )
    GreGetBounds(*(HDC *)(v6 + 8), 0LL, 1);
  return *(_QWORD *)(v6 + 8);
}
