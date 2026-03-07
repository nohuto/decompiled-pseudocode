void __fastcall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *((_QWORD *)this + 11) = a2;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = (char *)this + 8;
  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 8) = *a3;
    dhpdev = a2->dhpdev;
    *((_QWORD *)this + 3) = dhpdev;
    if ( dhpdev )
    {
      *(_QWORD *)this = (char *)a2 - 24;
      *((_QWORD *)this + 4) = a2->dhsurf;
      *((_DWORD *)this + 19) = a2[1].hsurf;
      if ( IsMetaDevBitmapForMirroring(a2) && (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL) & 0x20000) != 0 )
      {
        *((_QWORD *)this + 10) = v7;
        *((_DWORD *)this + 18) = 1;
        *(_WORD *)(v6 + 100) = 0;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
        SURFACE::dhpdev(*(SURFACE **)this, 0LL);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
      }
      else if ( *(_WORD *)(v6 + 100) || (*(_BYTE *)(v5 + 78) & 0x20) != 0 )
      {
        *((_DWORD *)this + 18) = 2;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0LL;
  }
}
