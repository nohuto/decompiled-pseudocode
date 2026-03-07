void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
