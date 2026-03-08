/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C001B820
 * Callers:
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(DISPLAY_SOURCE *this, int a2, char a3)
{
  __int64 v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = MEMORY[0xFFFFF78000000320];
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DISPLAY_SOURCE *)((char *)this + 3784), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *((_DWORD *)this + 998) >= 0xAu )
    *((_DWORD *)this + 998) = 0;
  *((_QWORD *)this + 2 * *((unsigned int *)this + 998) + 479) = v6 * KeQueryTimeIncrement();
  *((_DWORD *)this + 4 * *((unsigned int *)this + 998) + 960) = a2;
  *((_BYTE *)this + 16 * (unsigned int)(*((_DWORD *)this + 998))++ + 3844) = a3;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
