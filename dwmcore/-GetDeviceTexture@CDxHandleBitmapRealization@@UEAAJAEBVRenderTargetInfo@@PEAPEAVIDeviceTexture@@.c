__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  int BitmapInternal; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  __int64 v15; // rax
  struct IDeviceTexture *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this - 464;
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 58) + 64LL))((char *)this - 464);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xAEu, 0LL);
    return v8;
  }
  else
  {
    *a3 = 0LL;
    v9 = *((unsigned __int8 *)a2 + 20);
    v10 = *((unsigned int *)a2 + 2);
    v11 = *(_QWORD *)a2;
    v19 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v11, v10, v9, &v19);
    v14 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, BitmapInternal, 0x60u, 0LL);
      v15 = v19;
    }
    else
    {
      v15 = 0LL;
      if ( v19 )
        v16 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v19 + 8) + 20LL) + v19 + 8);
      else
        v16 = 0LL;
      *a3 = v16;
    }
    if ( v15 )
    {
      v18 = *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + v15 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v14, 0xB0u, 0LL);
    return (unsigned int)v14;
  }
}
