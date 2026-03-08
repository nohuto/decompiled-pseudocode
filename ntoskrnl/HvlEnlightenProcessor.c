/*
 * XREFs of HvlEnlightenProcessor @ 0x14037F430
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x14053ECAC (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403C8E08 (HvlpGetLpcbByLpIndex.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvlSharedIsr @ 0x140456D60 (HvlSharedIsr.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140456E50 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetupSchedulerAssist @ 0x14053FDA0 (HvlpSetupSchedulerAssist.c)
 *     HvlpGetRegister64 @ 0x1405468E0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140546A30 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x14093E420 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlEnlightenProcessor(char a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG LowPart; // edx
  ULONG v4; // r8d
  unsigned __int8 v5; // cl
  PHYSICAL_ADDRESS v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int *p_Number; // rbp
  __int64 v10; // rcx
  char v11; // bl
  __int64 LpcbByLpIndex; // rdi
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  PHYSICAL_ADDRESS v19; // [rsp+48h] [rbp+10h] BYREF
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v19.QuadPart = 0LL;
  v20 = 0LL;
  if ( HvlHypervisorConnected )
  {
    if ( !a1 || (result = HvlpFlags, (HvlpFlags & 2) == 0) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !a1 )
      {
        HvlpGetRegister64(589827LL, &v19);
        LowPart = v19.LowPart;
        v4 = v19.LowPart >> 6;
        v5 = v19.LowPart & 0x3F;
        HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = v19.LowPart >> 6;
        HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v5;
        if ( LowPart != CurrentPrcb->Number )
          HvlpVirtualProcessorsIdentityMapped = 0;
        if ( v4 < 0x10 )
        {
          if ( v4 > ((HvlpFlags >> 8) & 0xF) )
            HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v4 << 8)) & 0xF00;
        }
        else
        {
          HvlEnlightenments &= ~0x80u;
          HvlpEnlightenments &= ~0x80u;
        }
      }
      if ( (HvlpFlags & 0x80000) != 0 )
      {
        v19.QuadPart = 0LL;
        if ( (HvlpFlags & 2) != 0 )
        {
          HvlpGetRegister64(589843LL, &v19);
          v6 = v19;
          v7 = v19.QuadPart & 0xFFFFFFFFFFFFF000uLL;
          if ( CurrentPrcb->Number )
            v8 = MmMapIoSpaceEx(v7, 4096LL, 4u);
          else
            v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_140C01B30)(v7, 1LL, 4LL);
          CurrentPrcb->VirtualApicAssist = (void *)v8;
        }
        else
        {
          v6.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
        }
        HvlpSetRegister64(589843LL, v6.QuadPart | 1);
        p_Number = &CurrentPrcb->Number;
      }
      else
      {
        p_Number = &CurrentPrcb->Number;
      }
      HvlpSetupSchedulerAssist(CurrentPrcb);
      v11 = HvlpFlags;
      LpcbByLpIndex = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
        LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
        if ( (v11 & 0x20) != 0 )
        {
          HvlpGetRegister64(655379LL, &v20);
          v14 = v20;
          if ( (v20 & 1) == 0 )
          {
            v14 = v20 | 1;
            HvlpSetRegister64(655379LL, v20 | 1);
          }
          v15 = v14 & 0xFFFFFFFFFFFFF000uLL;
          if ( *p_Number )
            v16 = MmMapIoSpaceEx(v15, 4096LL, 4u);
          else
            v16 = ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_140C01B30)(v15, 1LL);
          *(_QWORD *)(LpcbByLpIndex + 40) = v16;
        }
      }
      if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 0x20) != 0 )
      {
        v17 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
        HvlpSetRegister64(655360LL, v17);
        __writemsr(0x40000094u, v17);
        HvlSharedIsr(1073741972LL, HIDWORD(v17));
      }
      result = HvlpFlags;
      if ( (HvlpFlags & 2) != 0 )
      {
        if ( *p_Number )
          return HvlpDiscoverTopologyLocal(
                   v10,
                   *(unsigned int *)(LpcbByLpIndex + 8),
                   LpcbByLpIndex + 16,
                   LpcbByLpIndex + 20);
      }
    }
  }
  return result;
}
