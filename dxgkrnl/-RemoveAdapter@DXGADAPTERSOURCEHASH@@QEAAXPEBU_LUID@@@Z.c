void __fastcall DXGADAPTERSOURCEHASH::RemoveAdapter(DXGADAPTERSOURCEHASH *this, const struct _LUID *a2)
{
  unsigned int ActualBufferSize; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48));
  v5 = (_DWORD *)*((_QWORD *)this + 6);
  v6 = ActualBufferSize >> 4;
  if ( v6 > 1 << *((_DWORD *)this + 17) )
    v6 = 1 << *((_DWORD *)this + 17);
  if ( v6 )
  {
    v7 = v6;
    do
    {
      if ( *v5 == a2->LowPart && v5[1] == a2->HighPart )
        v5[3] &= ~1u;
      v5 += 4;
      --v7;
    }
    while ( v7 );
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
