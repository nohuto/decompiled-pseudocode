/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18027E660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z @ 0x1800A66CC (--$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IWICBitmapLock **); // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 )
  {
    if ( a4 )
    {
      v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 *))(*((_QWORD *)this - 3) + 24LL))(
              (char *)this - 24,
              a2,
              a3,
              &v15);
      v9 = v10;
      if ( v10 < 0 )
      {
        v14 = 278;
      }
      else
      {
        v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IWICBitmapLock **))(v15
                                                                                 + 8
                                                                                 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL));
        v10 = (**v12)(v12, &IID_IWICBitmapLock, a4);
        v9 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v14 = 280;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v14, 0LL);
      goto LABEL_10;
    }
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x112u, 0LL);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x111u, 0LL);
  }
LABEL_10:
  ReleaseInterfaceNoNULL<IBitmapLock>(v15);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v9;
}
