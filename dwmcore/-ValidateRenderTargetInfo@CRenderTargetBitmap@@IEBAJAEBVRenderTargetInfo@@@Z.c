__int64 __fastcall CRenderTargetBitmap::ValidateRenderTargetInfo(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2)
{
  unsigned int v2; // edi
  char *v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  char *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 17) )
  {
    if ( *((_BYTE *)this + 144) )
    {
      v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
      v6 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v5 + 32LL))(v5, &v12);
      if ( *(_DWORD *)a2 == *(_DWORD *)v6
        && *((_DWORD *)a2 + 1) == *(_DWORD *)(v6 + 4)
        && ((v7 = *((_DWORD *)a2 + 2),
             v8 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16,
             v6 = *(unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v8 + 16LL))(v8, &v12),
             (_DWORD)v6 == DisplayId::None)
         || (_DWORD)v6 == v7
         || v7 == DisplayId::All) )
      {
        v9 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 24LL))(v9) && !*((_BYTE *)a2 + 20) )
        {
          v2 = -2147024891;
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024891, 0x19Eu, 0LL);
        }
      }
      else
      {
        v2 = -2003304287;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003304287, 0x199u, 0LL);
      }
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
  }
  return v2;
}
