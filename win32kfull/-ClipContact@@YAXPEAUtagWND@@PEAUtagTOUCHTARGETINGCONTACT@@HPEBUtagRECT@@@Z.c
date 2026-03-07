void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int RegionData; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  _OWORD *v11; // rdi
  __int64 v12; // rsi
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_QWORD *)(v4 + 168);
  if ( v5 )
  {
    RegionData = GreGetRegionData(*(_QWORD *)(v4 + 168), 0LL, 0LL);
    v7 = RegionData;
    if ( RegionData > 0 )
    {
      v8 = Win32AllocPoolZInit(RegionData, 1920103253LL);
      v9 = (_DWORD *)v8;
      if ( v8 )
      {
        if ( (unsigned int)GreGetRegionData(v5, v7, v8) )
        {
          v10 = v9[2];
          v11 = v9 + 8;
          if ( v10 > 0 )
          {
            v12 = (unsigned int)v10;
            do
            {
              v13[0] = *v11;
              TouchTargetingClipContact(v13);
              ++v11;
              --v12;
            }
            while ( v12 );
          }
        }
        Win32FreePool(v9);
      }
    }
  }
  else
  {
    v13[0] = *(_OWORD *)(v4 + 88);
    TouchTargetingClipContact(v13);
  }
}
