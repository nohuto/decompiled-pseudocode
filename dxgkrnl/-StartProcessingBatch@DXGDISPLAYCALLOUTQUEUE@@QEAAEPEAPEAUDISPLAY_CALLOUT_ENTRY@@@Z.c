/*
 * XREFs of ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0310C84
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02F83B0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

bool __fastcall DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY **a2)
{
  _QWORD *v4; // rdx
  struct DISPLAY_CALLOUT_ENTRY *v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  bool v8; // bl
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_QWORD *)this + 8)
    || (v4 = (_QWORD *)((char *)this + 48),
        v5 = (struct DISPLAY_CALLOUT_ENTRY *)*((_QWORD *)this + 6),
        v5 == (DXGDISPLAYCALLOUTQUEUE *)((char *)this + 48)) )
  {
    *a2 = 0LL;
    v8 = 0;
  }
  else
  {
    *((_QWORD *)this + 8) = KeGetCurrentThread();
    if ( *((_QWORD **)v5 + 1) != v4
      || (v6 = *(_QWORD *)v5, *(struct DISPLAY_CALLOUT_ENTRY **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = *v4 == (_QWORD)v4;
    *a2 = v5;
    v8 = !v7;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v8;
}
