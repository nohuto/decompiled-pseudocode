/*
 * XREFs of EtwTraceMoveRegion @ 0x1C0178750
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00E5FFE (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C00E60A6 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMoveRegion(__int64 a1, int a2, int a3, RECT *a4)
{
  DWORD RegionPtrData; // eax
  DWORD v9; // esi
  struct _RGNDATA *v10; // rax
  char *v11; // rbx
  int v12; // r8d
  const EVENT_DESCRIPTOR *v13; // rdx

  if ( a4 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000000000001000uLL) != 0
      && (qword_1C028DB28 & 0x8000000000001000uLL) == qword_1C028DB28 )
    {
      RegionPtrData = GrepGetRegionPtrData(a4, 0, 0LL);
      v9 = RegionPtrData;
      if ( RegionPtrData )
      {
        v10 = (struct _RGNDATA *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                   260LL,
                                   RegionPtrData,
                                   2037609301);
        v11 = (char *)v10;
        if ( v10 )
        {
          if ( (unsigned int)GrepGetRegionPtrData(a4, v9, v10) )
          {
            if ( a2 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              {
                v13 = (const EVENT_DESCRIPTOR *)&DirtyRgnEvent;
                goto LABEL_14;
              }
            }
            else if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v13 = (const EVENT_DESCRIPTOR *)&MoveRgnEvent;
LABEL_14:
              McTemplateK0xqnqNR3_EtwWriteTransfer((__int64)(v11 + 16), v13, v12, a1, a3);
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v11);
        }
      }
    }
  }
}
