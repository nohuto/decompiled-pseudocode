void __fastcall EtwTraceMoveRegion(__int64 a1, int a2, int a3, struct REGION *a4)
{
  DWORD RegionPtrData; // eax
  DWORD v9; // esi
  struct _RGNDATA *v10; // rax
  char *v11; // rbx
  int v12; // r8d
  const EVENT_DESCRIPTOR *v13; // rdx

  if ( a4 )
  {
    if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000000000001000uLL) != 0
      && (qword_1C02C4058 & 0x8000000000001000uLL) == qword_1C02C4058 )
    {
      RegionPtrData = GrepGetRegionPtrData(a4, 0, 0LL);
      v9 = RegionPtrData;
      if ( RegionPtrData )
      {
        v10 = (struct _RGNDATA *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   gpLeakTrackingAllocator,
                                   260LL,
                                   RegionPtrData,
                                   0x79737355u);
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
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
        }
      }
    }
  }
}
