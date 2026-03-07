void __fastcall DXGDEVICE::CloseInternalCddPrimaryHandle(DXGDEVICE *this, struct COREDEVICEACCESS *a2)
{
  __int64 i; // rdi
  struct DXGRESOURCE *v5; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 472); i = (unsigned int)(i + 1) )
  {
    v5 = (struct DXGRESOURCE *)*((_QWORD *)this + i + 83);
    if ( v5 )
    {
      if ( *((_BYTE *)this + i + 648) )
      {
        DXGDEVICE::DestroyAllocationInternal(
          this,
          0,
          0LL,
          v5,
          a2,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        *((_BYTE *)this + i + 648) = 0;
      }
    }
  }
}
