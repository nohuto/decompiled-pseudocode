/*
 * XREFs of ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x180296410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x180289FD8 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Present(CDummyRemotingSwapChain *this, const struct CRegion *a2)
{
  CD3DDevice *v2; // rsi
  int v4; // ebx
  unsigned int v5; // ecx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  bool v8; // zf
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rbx
  void *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx

  v2 = (CD3DDevice *)*((_QWORD *)this + 2);
  v4 = *((_DWORD *)v2 + 272);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0xC7u, 0LL);
  }
  else
  {
    v5 = 0;
    v6 = (char *)this + 128;
    v7 = 2LL;
    do
    {
      v8 = *v6 == 0;
      v9 = v5 + 1;
      v6 += 64;
      if ( !v8 )
        v9 = v5;
      v5 = v9;
      --v7;
    }
    while ( v7 );
    if ( v9 >= 2 )
    {
      v4 = -2003304309;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003304309, 0xD3u, 0LL);
    }
    else
    {
      v10 = *((_DWORD *)this + 50) + 1;
      *((_DWORD *)this + 50) = v10;
      v11 = (unsigned __int64)(v10 & 1) << 6;
      *(_OWORD *)((char *)this + v11 + 80) = 0LL;
      *(_OWORD *)((char *)this + v11 + 96) = 0LL;
      *(_OWORD *)((char *)this + v11 + 112) = 0LL;
      v12 = *(void **)((char *)this + v11 + 72);
      *((_BYTE *)this + v11 + 128) = 0;
      *(_DWORD *)((char *)this + v11 + 80) = v10;
      ResetEvent(v12);
      v13 = CD3DDevice::EnqueueSetEvent(v2, *(void **)((char *)this + v11 + 72));
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x112u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0xCFu, 0LL);
      }
    }
  }
  return (unsigned int)v4;
}
