/*
 * XREFs of ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140015B4C
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140015710 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140015C00 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140064CF4 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@.c)
 */

void __fastcall ApplyVolumeRamp(
        struct CFadeWindowLUT *a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  unsigned int v8; // eax
  float (__fastcall *v9)(unsigned __int8 *); // rax
  void (__fastcall *v10)(unsigned __int8 *, float); // rax
  float (__fastcall *v11)(unsigned __int8 *); // r10
  void (__fastcall *v12)(unsigned __int8 *, float); // r10
  float (__fastcall *v13)(unsigned __int8 *); // r11
  float (__fastcall *v14)(unsigned __int8 *); // r11
  unsigned int v15; // [rsp+20h] [rbp-28h]
  float (__fastcall *v16)(unsigned __int8 *); // [rsp+28h] [rbp-20h]
  void (__fastcall *v17)(unsigned __int8 *, float); // [rsp+30h] [rbp-18h]

  switch ( a6 )
  {
    case 0x10u:
      v17 = F32TOI16;
      v9 = I16TOF32;
      break;
    case 8u:
      v17 = F32TOUI8;
      v16 = UI8TOF32;
      if ( !a8 )
      {
LABEL_8:
        v8 = a5;
LABEL_9:
        v15 = v8;
LABEL_10:
        ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
          (_DWORD)a1,
          (_DWORD)a2,
          a3,
          a4,
          v15,
          (__int64)v16,
          (__int64)v17);
        return;
      }
      goto LABEL_34;
    case 0x14u:
      v17 = F32TOI20;
      v9 = I20TOF32;
      break;
    case 0x18u:
      v12 = F32TOI24W;
      v8 = a5;
      if ( !a8 )
      {
        if ( a5 != 32 )
          v12 = F32TOI24;
        v14 = I24WTOF32;
        if ( a5 != 32 )
          v14 = I24TOF32;
        v17 = v12;
        v16 = v14;
        goto LABEL_9;
      }
      if ( a5 != 32 )
        v12 = F32TOI24;
      v13 = I24WTOF32;
      if ( a5 != 32 )
        v13 = I24TOF32;
      v17 = v12;
      v16 = v13;
      goto LABEL_35;
    default:
      if ( !a8 )
      {
        if ( a7 == 3 )
        {
          v17 = F32OutTOF32;
          v16 = F32InTOF32;
        }
        else
        {
          v17 = F32TOI32;
          v16 = I32TOF32;
        }
        goto LABEL_8;
      }
      v10 = F32OutTOF32;
      if ( a7 != 3 )
        v10 = F32TOI32;
      v11 = F32InTOF32;
      v17 = v10;
      if ( a7 != 3 )
        v11 = I32TOF32;
      v16 = v11;
LABEL_34:
      v8 = a5;
LABEL_35:
      ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        (_DWORD)a1,
        (_DWORD)a2,
        a3,
        a4,
        v8,
        (__int64)v16,
        (__int64)v17);
      return;
  }
  v16 = v9;
  v15 = a5;
  if ( !a8 )
    goto LABEL_10;
  ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
    (_DWORD)a1,
    (_DWORD)a2,
    a3,
    a4,
    a5,
    (__int64)v9,
    (__int64)v17);
}
