/*
 * XREFs of EtwTraceLifetimeAccum @ 0x1C008AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00E5FFE (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C00E60A6 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceLifetimeAccum(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // eax
  unsigned int v7; // esi
  struct _RGNDATA *v8; // rax
  char *v9; // rbx
  int v10; // r8d

  if ( a3 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000000000001000uLL) != 0
      && (qword_1C028DB28 & 0x8000000000001000uLL) == qword_1C028DB28 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      v7 = RegionPtrData;
      if ( RegionPtrData )
      {
        v8 = (struct _RGNDATA *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                  260LL,
                                  RegionPtrData,
                                  2037609301);
        v9 = (char *)v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0xqnqNR3_EtwWriteTransfer((_DWORD)v9 + 16, (unsigned int)&ModifyRgnEvent, v10, a1, a2);
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v9);
        }
      }
    }
  }
}
