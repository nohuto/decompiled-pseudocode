__int64 __fastcall EditionNotifyDwmForSystemVisualCreation(__int64 a1, __int64 a2, CompositionObject *a3)
{
  int v4; // edi
  __int64 v5; // rcx
  void *v6; // rax
  void *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v8 = 0LL;
    v4 = CompositionObject::OpenDwmHandle(a3, &v8);
    if ( v4 >= 0 )
    {
      v6 = (void *)ReferenceDwmApiPort(v5);
      return (unsigned int)DwmAsyncCreateDCompositionHwndTarget(v6);
    }
  }
  return (unsigned int)v4;
}
