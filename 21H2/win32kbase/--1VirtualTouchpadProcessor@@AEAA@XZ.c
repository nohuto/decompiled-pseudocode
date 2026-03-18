/*
 * XREFs of ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F2C2C
 * Callers:
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C01F2D3C (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C01F4164 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 */

void __fastcall VirtualTouchpadProcessor::~VirtualTouchpadProcessor(struct VPTPTouchpad **this, unsigned int a2)
{
  struct VPTPTouchpad *v3; // rbx
  VPTPContact **v4; // rsi
  VPTPContact *v5; // rcx

  while ( 1 )
  {
    v3 = *this;
    if ( *this == (struct VPTPTouchpad *)this )
      break;
    v4 = (VPTPContact **)((char *)v3 + 16);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == (VPTPContact *)v4 )
        break;
      if ( v5 )
        VPTPContact::`scalar deleting destructor'(v5, a2);
    }
    VirtualTouchpadProcessor::RemoveTouchpad(v5, v3);
  }
}
