/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C001D2A8
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKBLTOBJ *__fastcall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  DEVLOCKBLTOBJ *result; // rax

  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 22) = 0;
  DLODCOBJ::DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  DLODCOBJ::DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 176));
  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
