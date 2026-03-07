void __fastcall DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE(DXGVMBUSMESSAGE *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( v2 != (char *)this + 20 )
      ExFreePoolWithTag(v2, 0x4D767844u);
  }
}
