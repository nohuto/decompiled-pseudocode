/*
 * XREFs of ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0089500
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C006CA8C (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::GetInfo(CCompositionSwapchainBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  NTSTATUS Handle; // r8d
  DxgkCompositionObject *v4; // rcx
  __int128 v6; // xmm1

  Handle = 0;
  v4 = (DxgkCompositionObject *)*((_QWORD *)this + 89);
  if ( !v4 || (Handle = DxgkCompositionObject::CreateHandle(v4, 0x10000000u, 0LL, 0, (void **)a2 + 145), Handle >= 0) )
  {
    *(_DWORD *)a2 = 3;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
    *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
    *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
    v6 = *((_OWORD *)this + 11);
    *((_DWORD *)a2 + 40) = 0;
    *((_OWORD *)a2 + 9) = v6;
    *((_DWORD *)a2 + 41) = *((_DWORD *)this + 68);
    *((_QWORD *)a2 + 146) = *((_QWORD *)this + 90);
  }
  return (unsigned int)Handle;
}
