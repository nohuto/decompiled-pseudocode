/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1C016B768
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0130580 (NtUserInitializePointerDeviceInjectionEx.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01B3800 (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0168074 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C016ADBC (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v10; // ebx
  char *v12; // rdx
  __int16 v13; // si
  unsigned int v14; // r8d
  char *v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm1
  unsigned int v18; // ebx
  __int64 v19; // rax
  struct _HIDP_DEVICE_DESC v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_DEVICE_DESC v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[160]; // [rsp+D0h] [rbp-30h] BYREF
  char v24; // [rsp+170h] [rbp+70h] BYREF

  v10 = 0;
  memset(&v22, 0, sizeof(v22));
  if ( a7 )
    *a7 = 0LL;
  memmove(v23, &commonUsages, 0xA0uLL);
  if ( a1 == 2 )
  {
    v12 = (char *)&touchUsages;
    v13 = 4;
    v14 = 10;
  }
  else
  {
    if ( a1 != 3 )
      return 0LL;
    v12 = (char *)&penUsages;
    v13 = 2;
    v14 = 1;
  }
  v15 = &v24;
  do
  {
    if ( v10 >= 7 )
      break;
    v16 = v10++;
    v16 *= 32LL;
    v17 = *(_OWORD *)&v12[v16 + 16];
    *(_OWORD *)v15 = *(_OWORD *)&v12[v16];
    *((_OWORD *)v15 + 1) = v17;
    v15 += 32;
  }
  while ( v10 + 5 < 0xC );
  v18 = BuildReportDescriptor(0xDu, v13, (struct tagUSAGE_PROPERTIES *)v23, 0xCu, v14, &v22);
  if ( v18 )
  {
    v21 = v22;
    v19 = RIMIDECreatePseudoHIDDevice(13, v13, a2, a4, a3, (__int128 *)&v21, 0, a5, a6, 0LL);
    if ( v19 )
      *a7 = v19;
    else
      return 0;
  }
  return v18;
}
