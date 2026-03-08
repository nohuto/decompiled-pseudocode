/*
 * XREFs of EditionRimDeviceReadNotification @ 0x1C01A7950
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01A79D4 (FindRimDevBackedDeviceInfo.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0200DDC (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C0243FAC (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

void __fastcall EditionRimDeviceReadNotification(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 RimDevBackedDeviceInfo; // rax
  void *v8; // rdx
  __int64 v9; // rcx
  struct RawInputManagerDeviceObject *v10; // rbx
  InteractiveControlManager *v11; // rax

  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 0LL);
  if ( RimDevBackedDeviceInfo || (RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 1LL)) != 0 )
  {
    v9 = *(unsigned int *)(RimDevBackedDeviceInfo + 200);
    if ( (v9 & 0x100) != 0 )
    {
      v10 = *(struct RawInputManagerDeviceObject **)(RimDevBackedDeviceInfo + 32);
      v11 = InteractiveControlManager::Instance(v9);
      InteractiveControlManager::OnInputReport(v11, v10, a1, a3);
    }
    else if ( (v9 & 0x200) != 0 )
    {
      InkProcessorOnInkDeviceInputReport((struct RawInputManagerDeviceObject *)v9, v8);
    }
  }
}
