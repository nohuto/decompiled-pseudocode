/*
 * XREFs of PiSwDeviceCreate @ 0x140806D94
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwDeviceCreate(_QWORD *a1)
{
  unsigned int v2; // ebx
  _DWORD *Pool2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 208LL, 1466986064LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 1;
    v4 = (_QWORD *)(*a1 + 128LL);
    v4[1] = v4;
    *v4 = v4;
    v5 = (_QWORD *)(*a1 + 184LL);
    v5[1] = v5;
    *v5 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
