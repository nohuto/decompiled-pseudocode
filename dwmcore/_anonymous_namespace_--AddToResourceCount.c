/*
 * XREFs of _anonymous_namespace_::AddToResourceCount @ 0x1800DF5C0
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180099B0C (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x18009C288 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x18009C3AC (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA798 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::AddToResourceCount(unsigned int a1, int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 > 0x2E )
  {
    v2 = a1 - 92;
    if ( !v2 )
    {
      DWORD1(xmmword_1803E2BC0) += a2;
      return;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
LABEL_9:
      LODWORD(xmmword_1803E2BC0) = a2 + xmmword_1803E2BC0;
      return;
    }
    v4 = v3 - 84;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 18;
        if ( v6 )
        {
          if ( v6 != 8 )
            goto LABEL_8;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_19;
  }
  if ( a1 == 46 )
  {
LABEL_19:
    DWORD2(xmmword_1803E2BB0) += a2;
    return;
  }
  v7 = a1 - 32;
  if ( v7 && (v8 = v7 - 2) != 0 && (v9 = v8 - 2) != 0 && (v10 = v9 - 2) != 0 && (v11 = v10 - 3) != 0 )
  {
    if ( v11 != 1 )
    {
LABEL_8:
      HIDWORD(xmmword_1803E2BB0) += a2;
      return;
    }
    HIDWORD(xmmword_1803E2BC0) += a2;
  }
  else
  {
    DWORD2(xmmword_1803E2BC0) += a2;
  }
}
