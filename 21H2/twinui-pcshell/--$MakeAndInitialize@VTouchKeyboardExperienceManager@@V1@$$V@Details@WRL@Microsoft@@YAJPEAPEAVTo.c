/*
 * XREFs of ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803B4544
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803B8440 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x1803B6B28 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BB744 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803BFA14 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManager,TouchKeyboardExperienceManager,>(
        volatile signed __int64 **a1)
{
  TouchKeyboardExperienceManager *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  void *v9; // [rsp+48h] [rbp+10h] BYREF
  TouchKeyboardExperienceManager *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (TouchKeyboardExperienceManager *)operator new(0x3B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v4 = (volatile signed __int64 *)TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(v2);
    v9 = (void *)v4;
    v3 = TouchKeyboardExperienceManager::RuntimeClassInitialize((TouchKeyboardExperienceManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v6 = *((_QWORD *)v4 + 31);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != 0x7FFFFFFF )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64(v4 + 31, v6 + 1, v6);
            if ( v7 != v6 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
      }
LABEL_11:
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
