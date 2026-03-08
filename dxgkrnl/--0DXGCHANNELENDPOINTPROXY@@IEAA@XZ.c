/*
 * XREFs of ??0DXGCHANNELENDPOINTPROXY@@IEAA@XZ @ 0x1C0360D10
 * Callers:
 *     ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C03614A8 (-Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

DXGCHANNELENDPOINTPROXY *__fastcall DXGCHANNELENDPOINTPROXY::DXGCHANNELENDPOINTPROXY(DXGCHANNELENDPOINTPROXY *this)
{
  DXGCHANNELENDPOINTPROXY *result; // rax
  _QWORD *v2; // rdx

  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
  *((_QWORD *)this + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 82;
  *((_DWORD *)this + 28) = 66;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 30) = 0x2000;
  result = this;
  v2 = (_QWORD *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  v2[1] = v2;
  *v2 = v2;
  return result;
}
