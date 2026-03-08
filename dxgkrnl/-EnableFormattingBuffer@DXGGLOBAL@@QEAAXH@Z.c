/*
 * XREFs of ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C030DB3C
 * Callers:
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C030D9E0 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02BC2C0 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall DXGGLOBAL::EnableFormattingBuffer(DXGGLOBAL *this, int a2)
{
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  char v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *v3;
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( v5[366] )
    {
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      if ( (_BYTE)v6 )
      {
        v10 = v5;
        v11 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
        if ( *((_DWORD *)v5 + 50) == 1 )
          ADAPTER_RENDER::EnableFormattingBuffer((ADAPTER_RENDER *)v5[366], a2);
        if ( v11 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      }
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
