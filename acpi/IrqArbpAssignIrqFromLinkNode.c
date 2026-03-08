/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C009DB0C
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1A4 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     LinkNodeGetPossibleResources @ 0x1C00994B8 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C009D6BC (IrqArbIrqFromGsiv.c)
 *     IcGetPossibleInput @ 0x1C009F314 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C009F424 (IcIsInputValid.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  int PossibleResources; // ebx
  _DWORD *v6; // rdi
  unsigned int v7; // ebp
  int v8; // r11d
  int v9; // r12d
  char v10; // r15
  __int64 v11; // r14
  unsigned int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+28h] [rbp-40h]
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v22 = a1;
  P[0] = 0LL;
  LOBYTE(v22) = 0;
  v23 = 0;
  PossibleResources = LinkNodeGetPossibleResources(a3, P, &v22);
  v6 = P[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      20,
      27,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      (char)P[0]);
  }
  if ( PossibleResources < 0 )
    goto LABEL_14;
  v7 = v6[4];
  v8 = 0;
  if ( !v7 )
  {
LABEL_13:
    PossibleResources = -1073741275;
    goto LABEL_14;
  }
  v9 = (unsigned __int8)IrqArbPciAlternativeRotation;
  v10 = v22;
  while ( 1 )
  {
    v4 = (v9 + v8) % v7;
    v11 = 5 * v4;
    v12 = v6[5 * (unsigned int)v4 + 7];
    if ( v12 >= 0x10 || (v13 = (unsigned __int16)PciExclusionMask, !_bittest(&v13, v12)) )
    {
      if ( (int)IcGetPossibleInput(v12, v4, &v23) < 0 || v10 == v23 )
      {
        v14 = (unsigned int)v6[v11 + 7];
        if ( v14 >= a2[2] && v14 <= a2[3] )
          break;
      }
    }
    if ( ++v8 >= v7 )
      goto LABEL_13;
  }
  if ( !(unsigned __int8)IcIsInputValid(v12) )
  {
    PossibleResources = -1073741823;
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = PossibleResources;
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        20,
        29,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
        v20);
    }
    goto LABEL_16;
  }
  v18 = (unsigned int)IrqArbIrqFromGsiv(v16);
  v19 = a2[5];
  *a2 = v18;
  a2[1] = v18;
  *(_QWORD *)(v19 + 16) = 1LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    LODWORD(v20) = v6[v11 + 7];
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      20,
      28,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      v20);
  }
  PossibleResources = 0;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)PossibleResources;
}
