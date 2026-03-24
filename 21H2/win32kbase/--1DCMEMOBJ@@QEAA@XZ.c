/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003B430
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C003B4A4 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003B51C (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v2; // rax
  bool v3; // zf
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+10h] BYREF

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
      v6 = 0x400000;
      bDeleteDCOBJ((struct XDCOBJ *)v4, &v6, &v5);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
}
