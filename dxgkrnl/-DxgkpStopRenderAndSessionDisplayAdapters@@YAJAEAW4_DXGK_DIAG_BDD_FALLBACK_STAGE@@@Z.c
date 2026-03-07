__int64 __fastcall DxgkpStopRenderAndSessionDisplayAdapters(enum _DXGK_DIAG_BDD_FALLBACK_STAGE *a1)
{
  struct DXGGLOBAL *Global; // rbx
  DXGGLOBAL *v3; // rax
  DXGADAPTER *v4; // rsi
  struct DXGGLOBAL *v6; // rax
  DXGGLOBAL *v7; // rax
  DXGADAPTER *v8; // rsi
  struct DXGGLOBAL *v9; // rax
  __int16 v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  if ( *((_QWORD *)Global + 121) == *((_QWORD *)DXGGLOBAL::GetGlobal() + 119) )
  {
    v7 = DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::ReferenceBddFallbackAdapter(v7, &v11);
    if ( !v8 )
    {
      *(_DWORD *)a1 = 3;
      return 3221226021LL;
    }
    v10 = 1;
    v9 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v9,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
      (__int64)&v10,
      4);
    DXGADAPTER::ReleaseReference(v8);
    if ( !HIBYTE(v10) )
    {
      *(_DWORD *)a1 = 6;
      return 3221225473LL;
    }
  }
  else
  {
    v11 = 0LL;
    v3 = DXGGLOBAL::GetGlobal();
    v4 = DXGGLOBAL::ReferenceWarpAdapter(v3, &v11);
    if ( !v4 )
    {
      *(_DWORD *)a1 = 2;
      return 3221226021LL;
    }
    v10 = 0;
    v6 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v6,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
      (__int64)&v10,
      3);
    DXGADAPTER::ReleaseReference(v4);
    if ( !HIBYTE(v10) )
    {
      *(_DWORD *)a1 = 5;
      return 3221225473LL;
    }
  }
  return 0LL;
}
