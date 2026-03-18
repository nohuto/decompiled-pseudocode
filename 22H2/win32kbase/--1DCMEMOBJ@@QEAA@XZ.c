/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003BBC0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C003BC08 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00AFFC8 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v2; // rax
  bool v3; // zf
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    DCOBJ::DCOBJ((DCOBJ *)v4);
    v2 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    v3 = *((_DWORD *)this + 4) == 0;
    v4[0] = v2;
    if ( v3 )
    {
      v5 = 0;
      GrepDeleteDCOBJ((struct XDCOBJ *)v4, 0x400000u, &v5);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
}
