void __fastcall DXGDISPLAYCALLOUTQUEUE::EndProcessingBatch(DXGDISPLAYCALLOUTQUEUE *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
