/*
 * XREFs of IrqTranslatorEjectInterface @ 0x1C009A750
 * Callers:
 *     ACPIRootIrpQueryInterface @ 0x1C00944D0 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 */

__int64 __fastcall IrqTranslatorEjectInterface(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  size_t v4; // r8
  unsigned int v5; // eax
  _DWORD Src[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  void (*v9)(); // [rsp+30h] [rbp-28h]
  void (*v10)(); // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v11)(__int64, __int64, int, __int64, int, __int64, _OWORD *); // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v12)(__int64, _OWORD *, __int64, _DWORD *, __int64 *); // [rsp+48h] [rbp-10h]

  Src[1] = 0;
  v3 = *(_QWORD *)(a3 + 184);
  v4 = 48LL;
  Src[0] = 65584;
  v9 = PciConfigPinToLine;
  v10 = PciConfigPinToLine;
  v11 = IrqTranslateResources;
  v12 = IrqTranslateRequirements;
  v5 = *(unsigned __int16 *)(v3 + 16);
  v8 = a1;
  if ( (unsigned __int16)v5 <= 0x30u )
    v4 = v5;
  memmove(*(void **)(v3 + 24), Src, v4);
  return 0LL;
}
