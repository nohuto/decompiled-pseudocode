/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C0025830
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1C0022900 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0024D68 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0025544 (RtlInitUnicodeStringOrId.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *Image; // rax
  struct tagCURSOR *v7; // rbp
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int8 *v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  DestinationString = 0LL;
  for ( i = 0; i < 7; ++i )
  {
    v3 = 552LL * i;
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *(unsigned __int16 *)((char *)&gasysico + v3 + 2),
      &word_1C02E597C,
      SourceString,
      260,
      0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
      v5 = 576;
    }
    Image = xxxClientLoadImage(&DestinationString.Length, v4, 1u, 0, 0, v5);
    if ( Image && (*((_DWORD *)Image + 20) & 0x40) == 0 )
      zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
    if ( i == 5 )
    {
      v7 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
      if ( v7 )
      {
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
        v10 = GetDpiForSystem();
        v11 = GetDpiDependentMetric(20LL, v10);
        v13 = xxxClientLoadImage(&DestinationString.Length, v12, 1u, v11, DpiDependentMetric, v5);
        if ( v13 )
        {
          if ( (*((_DWORD *)v13 + 20) & 0x40) == 0 )
            zzzSetSystemImage((struct tagCURSOR *)v13, v7);
        }
      }
    }
  }
}
