/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1403BFBC8
 * Callers:
 *     MiGetHugePageToZero @ 0x1402E41D8 (MiGetHugePageToZero.c)
 * Callees:
 *     MiWriteLargePte @ 0x1402443C4 (MiWriteLargePte.c)
 *     MiCreateUltraThreadContext @ 0x140244548 (MiCreateUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiStopPageAccessor @ 0x1402FD06C (MiStopPageAccessor.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     MiLockHugePfnInternal @ 0x14061F020 (MiLockHugePfnInternal.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  int UltraThreadContext; // r13d
  __int64 UltraMapping; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r8
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // r14
  _OWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 176);
  v3 = a1;
  v19[0] = 0LL;
  if ( *(_BYTE *)(a2 + 68) )
  {
    v18 = v2 & 0x3FFFFF;
    v5 = 0LL;
    v6 = qword_140C67A70 + 8 * v18;
    v2 = v18 << 18;
  }
  else
  {
    v5 = 48 * v2 - 0x220000000000LL;
    v6 = 0LL;
  }
  *(_DWORD *)(a2 + 96) = 512;
  *(_QWORD *)(a2 + 104) = a2 + 112;
  *(_DWORD *)(a2 + 324) = 1;
  *(_BYTE *)(a2 + 112) |= 1u;
  MiInitializePageColorBase(0LL, *(_DWORD *)(a2 + 320) + 1, (__int64)v19);
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 184, (__int64)v19, 1, 1u);
  if ( v5 )
  {
    v21 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
      v3 = a1;
    }
  }
  else
  {
    MiLockHugePfnInternal(v6, 0LL);
  }
  if ( *(_BYTE *)(a2 + 70) )
  {
    if ( v5 )
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((__int64)(v6 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)(v6 - qword_140C67A70) >> 3) & 0x1F)));
    if ( UltraThreadContext )
      MiDeleteUltraThreadContext(a2 + 184);
    return 1LL;
  }
  else if ( UltraThreadContext )
  {
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a2 + 184), 0, 0x40000LL, 1);
    v9 = (_QWORD *)(a2 + 80);
    v10 = UltraMapping;
    v11 = *(_QWORD *)(*(_QWORD *)(v3 + 88) + 168LL);
    v12 = *(_QWORD **)(v11 + 40);
    v13 = v11 + 32;
    if ( *v12 != v13 )
      __fastfail(3u);
    *v9 = v13;
    *(_QWORD *)(a2 + 88) = v12;
    *v12 = v9;
    *(_QWORD *)(v13 + 8) = v9;
    *(_QWORD *)(a2 + 312) = UltraMapping;
    *(_QWORD *)(a2 + 40) = UltraMapping;
    if ( v5 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v5);
    else
      ProtectionPfnCompatible = 4;
    v15 = MiWriteLargePte(v10, v2, 0, ProtectionPfnCompatible | 0xA4000000);
    v16 = *(_QWORD *)(a2 + 40) + 0x3FFFFFFFLL;
    *(_DWORD *)(a2 + 64) = 0;
    *(_QWORD *)(a2 + 48) = v16;
    *(_QWORD *)(a2 + 32) = v15;
    if ( v5 )
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((__int64)(v6 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)(v6 - qword_140C67A70) >> 3) & 0x1F)));
    *(_DWORD *)(v3 + 64) = 0;
    result = 0LL;
    *(_QWORD *)(v3 + 344) = a2;
    *(_WORD *)(v3 + 336) = 0;
  }
  else
  {
    if ( v5 )
    {
      MiStopPageAccessor(v5, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v6, 1);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((__int64)(v6 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)(v6 - qword_140C67A70) >> 3) & 0x1F)));
    }
    MiDeleteUltraThreadContext(a2 + 184);
    return 2LL;
  }
  return result;
}
