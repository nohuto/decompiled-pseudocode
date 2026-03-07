__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, int *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  DC *v5; // rsi
  int *v6; // rbx
  int *v7; // rbp
  int AltLock; // eax
  DC *v10; // [rsp+50h] [rbp+18h] BYREF

  GreAcquireHmgrSemaphore(a1);
  v3 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v3 = HmgSafeNextObjt(v3, 1, &v10);
    if ( !v3 )
      break;
    v5 = v10;
    v6 = (int *)*((_QWORD *)v10 + 62);
    if ( v6 )
    {
      v7 = (int *)*((_QWORD *)v6 + 70);
      if ( v7 )
      {
        DC::pSurface(v10, *((struct SURFACE **)v6 + 70));
        *((_DWORD *)v5 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v7);
        AltLock = HmgQueryAltLock(*(_QWORD *)v6);
        if ( AltLock == 1 )
        {
          *((_QWORD *)v6 + 70) = 0LL;
          SURFACE::bDeleteSurface((__int64)v6, 0, 0);
          if ( v6 == a2 )
            return GreReleaseHmgrSemaphore(v4);
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v6, 0LL);
        }
      }
    }
  }
  return GreReleaseHmgrSemaphore(v4);
}
