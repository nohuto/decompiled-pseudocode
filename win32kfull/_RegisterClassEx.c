__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int16 a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // bx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+50h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, 0LL);
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    v8 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), 7);
    if ( v8 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL);
  }
  v13 = 0;
  v9 = InternalRegisterClassEx(a1, a3, a4, &v13);
  if ( v9 != *(_QWORD *)v12[0] )
  {
    if ( v12[0] != gSmartObjNullRef && !--*(_DWORD *)(v12[0] + 8LL) )
    {
      if ( *(_BYTE *)(v12[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v12[0]);
    }
    if ( v9 )
    {
      v12[0] = *(_QWORD *)(v9 + 128);
      ++*(_DWORD *)(v12[0] + 8LL);
    }
    else
    {
      v12[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v12[0] )
  {
    if ( !v13 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL) + 16LL) = *a2;
    }
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL) + 2LL);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v12);
    return v10;
  }
  else
  {
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v12);
    return 0LL;
  }
}
