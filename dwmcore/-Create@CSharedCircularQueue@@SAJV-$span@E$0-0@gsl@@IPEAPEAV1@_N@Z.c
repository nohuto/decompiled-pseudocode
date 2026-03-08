/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x18022B0E0
 * Callers:
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x18022B1CC (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802507C8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180260F50 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, volatile __int32 ***a3, char a4)
{
  volatile __int32 *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned int v8; // edi
  unsigned __int64 v9; // rbp
  volatile __int32 **v10; // rax
  __int64 v11; // rcx
  volatile __int32 **v12; // r8

  v4 = (volatile __int32 *)*((_QWORD *)a1 + 1);
  v5 = a2;
  v8 = 0;
  if ( ((unsigned __int8)v4 & 3) != 0
    || a2 - 1 > 0xFF
    || (v9 = *a1, a1 = (unsigned int *)(2 * a2 + 8LL), v9 < (unsigned __int64)a1) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x37u, 0LL);
  }
  else
  {
    v10 = (volatile __int32 **)DefaultHeap::Alloc(0x10uLL);
    v12 = v10;
    if ( v10 )
    {
      *v10 = v4;
      *((_DWORD *)v10 + 2) = v5;
      *((_DWORD *)v10 + 3) = (v9 - 8) / v5;
    }
    else
    {
      v12 = 0LL;
    }
    *a3 = v12;
    if ( v12 )
    {
      if ( a4 )
      {
        _InterlockedExchange(*v12, 0);
        _InterlockedExchange(*v12 + 1, 0);
      }
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x3Du, 0LL);
    }
  }
  return v8;
}
