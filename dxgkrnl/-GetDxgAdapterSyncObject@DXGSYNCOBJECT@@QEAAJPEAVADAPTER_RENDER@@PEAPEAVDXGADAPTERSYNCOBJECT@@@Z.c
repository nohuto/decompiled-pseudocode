__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  struct ADAPTER_RENDER *v5; // rax

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3);
  if ( a2 && (v5 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 39), v5 != a2) )
  {
    WdLogSingleEntry4(2LL, this, v5, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
      (__int64)this,
      *((_QWORD *)this + 39),
      (__int64)a2,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *a3 = (struct DXGADAPTERSYNCOBJECT *)(((unsigned __int64)this + 296) & -(__int64)(this != 0LL));
    return 0LL;
  }
}
