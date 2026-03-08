/*
 * XREFs of ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x1C00BD100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C00BD170 (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall W32kCddInitPdev(HDEV a1, void *const a2, unsigned int *a3, struct _devicemodeW **a4, void **a5)
{
  unsigned int v5; // ebx
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rax

  v5 = 0;
  if ( a1 && (GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a2)) != 0LL )
  {
    *a3 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 47);
    *a4 = (struct _devicemodeW *)*((_QWORD *)GraphicsDeviceFromDevObjHandle + 22);
    *a5 = &gDxgkWin32kEngInterface;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
