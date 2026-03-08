/*
 * XREFs of ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802A1FDC
 * Callers:
 *     ?GetDesktopTree@CHolographicInteropTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802A5C30 (-GetDesktopTree@CHolographicInteropTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHolographicManager::GetDefaultDesktopTree(RTL_SRWLOCK *this, struct CDesktopTree **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *Ptr; // rax
  __int64 v7; // rcx

  v4 = 0;
  AcquireSRWLockShared(this + 13);
  Ptr = this[19].Ptr;
  if ( this[18].Ptr == Ptr || (v5 = *(Ptr - 1)) == 0 )
  {
    *a2 = 0LL;
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023728, 0x2BEu, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 96);
    if ( v7 )
    {
      *a2 = (struct CDesktopTree *)v7;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 8));
    }
    else
    {
      *a2 = 0LL;
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x2B8u, 0LL);
    }
  }
  ReleaseSRWLockShared(this + 13);
  return v4;
}
