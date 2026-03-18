/*
 * XREFs of _GetPointerDeviceType @ 0x1C016C360
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D4A20 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0207D98 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C020804C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C0208E94 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C01E8F0C (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v2 = -1;
  if ( v1 && (*(_DWORD *)(v1 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 472), 0xFFFFFFFFLL);
  return v2;
}
