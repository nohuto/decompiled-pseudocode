void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *Image; // rax
  __int64 v7; // rcx
  struct tagCURSOR *v8; // rbp
  int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  DestinationString = 0LL;
  for ( i = 0; i < 7; ++i )
  {
    while ( 1 )
    {
      v3 = 552LL * i;
      FastGetProfileStringFromIDW(
        a1,
        5LL,
        *(unsigned __int16 *)((char *)&gasysico + v3 + 2),
        &word_1C03142AC,
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
      Image = xxxClientLoadImage((char **)&DestinationString, v4, 1u, 0, 0, v5);
      if ( Image && (*((_DWORD *)Image + 20) & 0x40) == 0 )
        zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
      if ( i != 5 )
        break;
      v8 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
      if ( !v8 )
        break;
      DpiForSystem = GetDpiForSystem(v7);
      DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
      v12 = GetDpiForSystem(v11);
      v13 = GetDpiDependentMetric(20, v12);
      v15 = xxxClientLoadImage((char **)&DestinationString, v14, 1u, v13, DpiDependentMetric, v5);
      if ( !v15 || (*((_DWORD *)v15 + 20) & 0x40) != 0 )
        break;
      zzzSetSystemImage((struct tagCURSOR *)v15, v8);
      i = 6;
    }
  }
}
