/*
 * XREFs of hCreateSolidBrushInternal @ 0x1C001C240
 * Callers:
 *     GreCreateSolidBrush @ 0x1C0019060 (GreCreateSolidBrush.c)
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

HBRUSH __fastcall hCreateSolidBrushInternal(unsigned int a1, int a2, HBRUSH a3, int a4)
{
  __int64 v4; // rbx
  __int64 *v6; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)GreSetSolidBrushInternal(a3, a1, a2, 0) )
      return a3;
  }
  else
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v8, a1, 7u, a2, a4);
    v6 = (__int64 *)v8[0];
    if ( v8[0] )
    {
      *(_DWORD *)(v8[0] + 40LL) |= 4u;
      v4 = *v6;
      v9 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v8);
  }
  return (HBRUSH)v4;
}
