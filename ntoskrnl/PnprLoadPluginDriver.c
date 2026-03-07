__int64 __fastcall PnprLoadPluginDriver(_QWORD *a1, __int64 a2)
{
  int PluginDriverImagePath; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  ULONG_PTR v8; // rax
  int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath >= 0 )
  {
    PluginDriverImagePath = MmLoadSystemImage((int)&DestinationString, 0, 0, 2, (__int64)&v12, (__int64)&v13);
    if ( PluginDriverImagePath >= 0 )
    {
      memset((void *)(a2 + 8), 0, 0x58uLL);
      v8 = v12;
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)a2 = 96;
      PluginDriverImagePath = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 56))(a2, 0LL);
      if ( PluginDriverImagePath >= 0 )
      {
        if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
        {
          PluginDriverImagePath = 0;
          *a1 = v12;
          goto LABEL_23;
        }
        v5 = PnprContext;
        PluginDriverImagePath = -1073741637;
        v6 = *(_DWORD *)(PnprContext + 33272);
        if ( !v6 )
          v6 = 4893;
        v7 = 9;
      }
      else
      {
        v5 = PnprContext;
        v6 = *(_DWORD *)(PnprContext + 33272);
        if ( !v6 )
          v6 = 4877;
        v7 = 8;
      }
    }
    else
    {
      v5 = PnprContext;
      v6 = *(_DWORD *)(PnprContext + 33272);
      if ( !v6 )
        v6 = 4863;
      v7 = 10;
    }
    *(_DWORD *)(v5 + 33272) = v6;
    v9 = *(_DWORD *)(v5 + 33276);
    if ( !v9 )
      v9 = v7;
    *(_DWORD *)(v5 + 33276) = v9;
  }
  if ( v12 )
    MmUnloadSystemImage(v12);
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
