/*
 * XREFs of EditionNotifyDwmForSystemVisualCreation @ 0x1C01225C0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0122654 (DwmAsyncCreateDCompositionHwndTarget.c)
 */

__int64 __fastcall EditionNotifyDwmForSystemVisualCreation(__int64 a1, __int64 a2, CompositionObject *a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = 0LL;
    v4 = CompositionObject::OpenDwmHandle(a3, &v9);
    if ( v4 >= 0 )
    {
      v7 = (void *)ReferenceDwmApiPort(v6, v5);
      return (unsigned int)DwmAsyncCreateDCompositionHwndTarget(v7);
    }
  }
  return (unsigned int)v4;
}
