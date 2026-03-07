void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int128 v5; // [rsp+20h] [rbp-10h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  *(_QWORD *)((char *)this + 4620) = 0LL;
  *(_QWORD *)((char *)this + 4628) = -1LL;
  v3 = 0;
  v4 = (_DWORD *)((char *)Global + 304540);
  v5 = 0LL;
  do
  {
    DWORD1(v5) = *v4;
    if ( DWORD1(v5) )
    {
      if ( v3 )
      {
        LODWORD(v5) = v5 | 2;
        DWORD2(v5) |= 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v5) = v5 | 1;
        DWORD2(v5) |= 0xFFFFFFFC;
      }
      HIDWORD(v5) = v3;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 2 );
}
