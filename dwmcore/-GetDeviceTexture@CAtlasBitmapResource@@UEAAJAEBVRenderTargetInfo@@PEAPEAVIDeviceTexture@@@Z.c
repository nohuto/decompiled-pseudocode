__int64 __fastcall CAtlasBitmapResource::GetDeviceTexture(
        CAtlasBitmapResource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 3) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  v4 = *((_QWORD *)this + 2);
  if ( !v4 )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304307, 0x86u, 0LL);
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, 0x9Fu, 0LL);
    return v8;
  }
  v5 = *(_QWORD *)(v4 + 8) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL) + 16LL);
  v6 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v5 + 48LL))(
         v5,
         a2,
         a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x89u, 0LL);
    goto LABEL_8;
  }
  return v8;
}
