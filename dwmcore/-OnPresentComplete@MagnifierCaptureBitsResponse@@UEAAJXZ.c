__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  CD3DDevice **v2; // rdi
  CD3DDevice **i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  v2 = (CD3DDevice **)xmmword_1803E7050;
  for ( i = (CD3DDevice **)qword_1803E7048; i != v2; i += 2 )
  {
    if ( *((int *)*i + 272) >= 0 )
      CD3DDevice::Flush(*i);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  *(_BYTE *)(*((_QWORD *)this + 211) + 1756LL) = 0;
  v4 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x6Au, 0LL);
  return v6;
}
