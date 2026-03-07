void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2)
{
  char *v4; // rbx
  PACCESS_TOKEN v5; // r14
  PACCESS_TOKEN v6; // rsi
  int v7; // eax
  char v8; // cl
  const WCHAR *v9; // rsi
  const WCHAR *v10; // r12
  void *ProcessImageFileName; // rbx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  const WCHAR *v16; // [rsp+40h] [rbp-20h] BYREF
  char *v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  char v20; // [rsp+A0h] [rbp+40h] BYREF
  char v21; // [rsp+A8h] [rbp+48h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
  {
    v18 = 256LL;
    v19 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17);
    if ( v16 )
    {
      v4 = v17;
      if ( v17 )
      {
        v21 = 0;
        v20 = 0;
        v5 = 0LL;
        v6 = PsReferencePrimaryToken(Process);
        RtlQueryPackageIdentity(v6, v16, &v18, 0LL, 0LL, &v21);
        PsDereferencePrimaryToken(v6);
        if ( a2 )
        {
          v5 = PsReferencePrimaryToken(a2);
          v7 = RtlQueryPackageIdentity(v5, v4, &v19, 0LL, 0LL, &v20);
          v8 = v20;
          if ( v7 < 0 )
            v8 = 0;
          v20 = v8;
        }
        else
        {
          v8 = v20;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
        {
          v9 = &word_1C02856D8;
          v10 = &word_1C02856D8;
          if ( v8 )
            v10 = (const WCHAR *)v4;
          if ( a2 )
            ProcessImageFileName = (void *)PsGetProcessImageFileName(a2);
          else
            ProcessImageFileName = &unk_1C02A2108;
          if ( v21 )
            v9 = v16;
          v12 = PsGetProcessImageFileName(Process);
          McTemplateK0szsz_EtwWriteTransfer(
            v14,
            v13,
            v15,
            v12,
            (__int64)v9,
            (__int64)ProcessImageFileName,
            (__int64)v10);
        }
        if ( v5 )
          PsDereferencePrimaryToken(v5);
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v17);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((char **)&v16);
  }
}
