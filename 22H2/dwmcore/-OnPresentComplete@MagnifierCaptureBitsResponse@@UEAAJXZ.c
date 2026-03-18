/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801F9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034CA4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801032C0 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801F9F30 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  CD3DDevice **v2; // rdi
  CD3DDevice **i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = &stru_1803EA130;
  EnterCriticalSection(&stru_1803EA130);
  v2 = (CD3DDevice **)xmmword_1803EA160;
  for ( i = (CD3DDevice **)qword_1803EA158; i != v2; i += 2 )
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
