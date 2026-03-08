/*
 * XREFs of EtwTraceLifetimeAccum @ 0x1C00AAD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00EF31A (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C00EF3C2 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
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
    if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000000000001000uLL) != 0
      && (qword_1C02C4058 & 0x8000000000001000uLL) == qword_1C02C4058 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      v7 = RegionPtrData;
      if ( RegionPtrData )
      {
        v8 = (struct _RGNDATA *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                  gpLeakTrackingAllocator,
                                  260LL,
                                  RegionPtrData,
                                  0x79737355u);
        v9 = (char *)v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0xqnqNR3_EtwWriteTransfer((_DWORD)v9 + 16, (unsigned int)&ModifyRgnEvent, v10, a1, a2);
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
        }
      }
    }
  }
}
