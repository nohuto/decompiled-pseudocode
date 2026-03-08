/*
 * XREFs of ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180295F30
 * Callers:
 *     ?GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180295EB0 (-GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x180295BD8 (-CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z.c)
 *     ?GetKernelHandle@CD3DDevice@@QEBAIXZ @ 0x180295E5C (-GetKernelHandle@CD3DDevice@@QEBAIXZ.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::GetPresentStatisticsDWM(
        CDummyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  unsigned int v2; // r15d
  unsigned int *v3; // r14
  unsigned int v4; // r12d
  CDummyRemotingSwapChain::CPresentStats *v5; // rbp
  unsigned int i; // esi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  _DWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-30h]

  v2 = 0;
  v3 = (unsigned int *)((char *)this + 80);
  v4 = 0;
  v5 = (CDummyRemotingSwapChain *)((char *)this + 72);
  for ( i = 0; i < 2; ++i )
  {
    if ( CDummyRemotingSwapChain::CPresentStats::CheckPresentCompleted(
           v5,
           *((struct CD3DDevice **)this + 2),
           *((_DWORD *)this + 14))
      && *v3 >= v2 )
    {
      v2 = *v3;
      v4 = i;
    }
    v5 = (CDummyRemotingSwapChain::CPresentStats *)((char *)v5 + 64);
    v3 += 16;
  }
  v9 = (unsigned __int64)v4 << 6;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + v9 + 80);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + v9 + 96);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + v9 + 112);
  v13[0] = CD3DDevice::GetKernelHandle(*((CD3DDevice **)this + 2));
  v10 = *((_DWORD *)this + 14);
  v14 = 0LL;
  LODWORD(v14) = v10;
  v13[1] = 4;
  v15 = 0LL;
  v16 = 0LL;
  if ( !(unsigned int)D3DKMTGetDeviceState(v13) )
  {
    v11 = DWORD2(v15);
    *((_QWORD *)a2 + 3) = v16;
    *((_DWORD *)a2 + 4) = v11;
    *((_DWORD *)a2 + 9) = v11;
  }
  return 0LL;
}
