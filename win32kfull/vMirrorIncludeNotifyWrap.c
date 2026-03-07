void __fastcall vMirrorIncludeNotifyWrap(__int64 a1, struct SURFACE *a2, int a3)
{
  __int64 v5; // rcx
  int v6; // edx
  Gre::Base *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v8 = v5;
  if ( v5
    && (*(_DWORD *)(v5 + 40) & 0x2020001) == 0x2020001
    && (*((_DWORD *)a2 + 28) & 0x4000000) != 0
    && a2 != SURFACE::pdibDefault
    && !(unsigned int)SURFACE::bStockSurface(a2)
    && (v6 & 0x400800) == 0 )
  {
    Gre::Base::Globals(v7);
    if ( a3 )
    {
      *((_DWORD *)a2 + 28) |= 0x10u;
      vMirrorNotifyDrawing((struct PDEVOBJ *)&v8, a2, 1);
    }
    else
    {
      vMirrorNotifyDrawing((struct PDEVOBJ *)&v8, a2, 0);
      *((_DWORD *)a2 + 28) &= ~0x10u;
    }
  }
}
