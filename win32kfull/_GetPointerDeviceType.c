/*
 * XREFs of _GetPointerDeviceType @ 0x1C0146218
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01AE304 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E89DC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E8CF8 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E9A50 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C01C43EC (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v4 = -1;
  if ( v1 && (*(_DWORD *)(v1 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 472), 0xFFFFFFFFLL, v2, v3);
  return v4;
}
