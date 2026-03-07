__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE *a2,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *a3)
{
  unsigned int v5; // ebx
  void *v6; // rax

  v5 = -1073741811;
  v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 64LL))(
                 *((_QWORD *)this + 1),
                 *((unsigned int *)a2 + 3),
                 17LL);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    v5 = 0;
  }
  else
  {
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
  }
  *((_DWORD *)a3 + 1) = v5;
  return v5;
}
