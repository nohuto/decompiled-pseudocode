void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int *v4; // [rsp+38h] [rbp+10h] BYREF
  HPALETTE v5; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v5);
    if ( !v2 )
      break;
    if ( (BYTE2(v5) & 0x1F) == 8 )
    {
      v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 40LL);
      EngAcquireSemaphore(v6);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v5);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
        if ( v4 )
          HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v6);
    }
  }
}
