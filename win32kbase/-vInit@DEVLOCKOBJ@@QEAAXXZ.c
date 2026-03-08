/*
 * XREFs of ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001A958
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001A928 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C001A998 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vInit(DEVLOCKOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
}
