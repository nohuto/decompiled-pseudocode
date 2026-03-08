/*
 * XREFs of KiProcessControlProtectionFromKernelMode @ 0x140579EC8
 * Callers:
 *     KiProcessControlProtection @ 0x140579B40 (KiProcessControlProtection.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x140579720 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405798B4 (KiGetCurrentKernelShadowStackBounds.c)
 *     KiLogControlProtectionKernelModeReturnMismatch @ 0x140579960 (KiLogControlProtectionKernelModeReturnMismatch.c)
 */

__int64 __fastcall KiProcessControlProtectionFromKernelMode(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v5; // esi
  unsigned __int64 v6; // r15
  unsigned __int64 CurrentKernelShadowStackBounds; // rax
  ULONG_PTR v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // r9
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+44h] [rbp-34h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 352);
  v2 = 0;
  v20 = 0LL;
  __asm { rdsspq  rdi }
  v5 = 2;
  if ( (unsigned __int64)(v1 - 1) <= 1 && (_RDI & 7) == 0 )
  {
    v6 = **(_QWORD **)(a1 + 384);
    if ( v6 >= 0xFFFF800000000000uLL )
    {
      CurrentKernelShadowStackBounds = KiGetCurrentKernelShadowStackBounds(&v20);
      v8 = *(_QWORD *)(a1 + 216);
      v9 = CurrentKernelShadowStackBounds;
      v10 = *(_QWORD *)(a1 + 352);
      v11 = (_QWORD *)(v8 + 32);
      if ( v10 == 1 )
      {
        while ( (unsigned __int64)v11 < v20 )
        {
          if ( *v11 >= 0x10000uLL && *v11 == v6 )
          {
            if ( (int)VslKernelShadowStackAssist(0, v8, 0LL, (ULONG_PTR)v11, 0LL, 4) >= 0 )
              v5 = 1;
            _InterlockedAdd(&dword_140D1F240, 1u);
            return v5;
          }
          ++v11;
        }
      }
      v12 = 0LL;
      if ( (_BYTE)KiKernelCetAuditModeEnabled )
      {
        v13 = (KeGetCurrentThread()->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
        if ( _RDI >= v13 && _RDI <= v13 + 640 )
          v12 = _RDI + 2048;
        if ( (int)KiFixupControlProtectionKernelModeReturnMismatch(v9, v8, v6, v12, v10 == 2) >= 0 )
        {
          v14 = *(_QWORD *)(a1 + 360);
          v18 = 0LL;
          v16[0] = v14;
          LODWORD(v14) = *(_DWORD *)(a1 + 352);
          LOBYTE(v2) = v12 != 0;
          v19 = v2;
          v16[1] = v6;
          v17 = v14;
          KiLogControlProtectionKernelModeReturnMismatch(1u, (__int64)v16);
          return 1;
        }
      }
    }
  }
  return v5;
}
