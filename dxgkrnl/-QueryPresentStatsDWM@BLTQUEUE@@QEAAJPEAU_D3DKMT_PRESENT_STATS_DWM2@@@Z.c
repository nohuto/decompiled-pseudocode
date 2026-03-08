/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C0225370
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C0221B7E (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C002A2C4 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM2 *a2)
{
  struct _KMUTANT *v2; // rbx
  int v5; // eax
  union _LARGE_INTEGER v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 264);
  KeWaitForSingleObject((char *)this + 264, Executive, 0, 0, 0LL);
  v5 = *((_DWORD *)this + 80);
  v7.QuadPart = 0LL;
  *((_DWORD *)a2 + 1) = v5;
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 81);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 82);
  BLTQUEUE::UpdateVsyncCount(this, &v7);
  *((_QWORD *)a2 + 2) = (__int64)(v7.QuadPart
                                * *((unsigned int *)a2 + 2)
                                * (unsigned __int64)*((unsigned int *)this + 93))
                      / *((unsigned int *)this + 92);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 112);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 112);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 57);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 57);
  KeReleaseMutex(v2, 0);
  return 0LL;
}
