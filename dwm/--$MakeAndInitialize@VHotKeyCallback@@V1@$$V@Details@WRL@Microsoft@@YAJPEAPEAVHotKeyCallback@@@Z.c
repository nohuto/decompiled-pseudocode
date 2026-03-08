/*
 * XREFs of ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000A694
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14000594C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HotKeyCallback@@QEAA@XZ @ 0x14000A76C (--0HotKeyCallback@@QEAA@XZ.c)
 *     ??1?$ComPtr@VHotKeyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x14000A85C (--1-$ComPtr@VHotKeyCallback@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VHotKeyCallback@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14000A880 (--1-$MakeAllocator@VHotKeyCallback@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000AE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHot_ea_14000AE00.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14000B038 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000C0EC (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(HotKeyCallback **a1)
{
  HotKeyCallback *v2; // rax
  int v3; // esi
  HotKeyCallback *v4; // rax
  HotKeyCallback *v5; // rbx
  volatile int *v6; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  HotKeyCallback *v10; // [rsp+30h] [rbp+8h] BYREF
  HotKeyCallback *v11; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (HotKeyCallback *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<HotKeyCallback>::~MakeAllocator<HotKeyCallback>(&v10);
    return (unsigned int)v3;
  }
  v4 = HotKeyCallback::HotKeyCallback(v2);
  v10 = 0LL;
  v5 = v4;
  v11 = v4;
  v3 = HotKeyCallback::RuntimeClassInitialize(v4);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<HotKeyCallback>::~ComPtr<HotKeyCallback>(&v11);
    goto LABEL_5;
  }
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 3);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_13;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v6);
LABEL_13:
    *a1 = v5;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(v5);
  }
  else
  {
    *a1 = 0LL;
  }
  return 0LL;
}
