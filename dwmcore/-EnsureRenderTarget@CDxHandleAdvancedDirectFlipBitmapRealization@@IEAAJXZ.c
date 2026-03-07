__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRenderTarget(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 *v6; // r14
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  char *v12; // rcx
  int *v13; // rax
  int v14; // edi
  int v15; // ebx
  __int64 (__fastcall ***v16)(_QWORD); // rcx
  __int64 v17; // rax
  int DeviceTextureTarget; // eax
  __int64 v19; // rcx
  char v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16);
  v3 = (**v2)(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xCFu, 0LL);
  }
  else
  {
    v6 = (__int64 *)((char *)this + 416);
    if ( !*((_QWORD *)this + 52) )
    {
      v7 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
      v9 = *v6;
      v10 = v8;
      *v6 = 0LL;
      if ( v9 )
      {
        v11 = *(int *)(*(_QWORD *)(v9 + 8) + 4LL) + v9 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
      v13 = (int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v12 + 16LL))(v12, &v21);
      v14 = *((_DWORD *)this + 36);
      v15 = *v13;
      v16 = (__int64 (__fastcall ***)(_QWORD))(*((_QWORD *)this + 47)
                                             + 16LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 20LL));
      v17 = (**v16)(v16);
      DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(v10, v17, 3, v14, v15, 0, 0, (__int64 *)this + 52);
      v5 = DeviceTextureTarget;
      if ( DeviceTextureTarget < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DeviceTextureTarget, 0xDBu, 0LL);
    }
  }
  return v5;
}
