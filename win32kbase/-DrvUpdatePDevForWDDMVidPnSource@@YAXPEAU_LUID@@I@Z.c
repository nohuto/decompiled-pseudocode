void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // r8d
  struct _LUID *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate<1>(i);
    v6 = v5;
    if ( !v5 )
      break;
    v7 = *(_DWORD *)(v5 + 40) & 0x20401;
    v9 = v5;
    if ( v7 == 1 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart
          && v8->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 248LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v6);
        }
      }
    }
  }
}
