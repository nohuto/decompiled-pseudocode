__int64 DxgkGetVirtualFrameBufferAccessCount(void)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int *v1; // rcx
  unsigned int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGGLOBAL *)((char *)Global + 1632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v1 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 203);
  if ( v1 )
    v2 = *v1;
  else
    v2 = 0;
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
