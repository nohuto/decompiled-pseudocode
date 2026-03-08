/*
 * XREFs of ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1C0013B64
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C0012D54 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1C00159A4 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x1C020AB04 (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::RefreshRegions(CCursorClip::DeadzoneJumping *this)
{
  char v2; // bl
  char *v3; // rax
  _QWORD *v4; // rsi
  _QWORD **v5; // r15
  unsigned __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  char *QuotaZInit; // rax
  CCursorClip::DeadzoneJumping *v11; // rcx
  struct CCursorClip::DeadzoneJumping::RegionInfo *v12; // rsi
  struct CCursorClip::DeadzoneJumping::RegionInfo *v13; // rdi
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE *v16; // [rsp+28h] [rbp-20h]
  struct CCursorClip::DeadzoneJumping::RegionPortal *v17; // [rsp+58h] [rbp+10h] BYREF

  CCursorClip::DeadzoneJumping::Cleanup(this);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v15);
  v2 = 0;
  v3 = (char *)*((_QWORD *)gpInputConfig + 3);
  if ( !v3 )
    v3 = (char *)gpInputConfig + 32;
  v4 = 0LL;
  v5 = (_QWORD **)(v3 + 1456);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v8 = *v5;
  while ( 1 )
  {
    v9 = 0LL;
    if ( v8 != v5 )
      v9 = v8 + 2;
    if ( !v9 )
      break;
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v7, v6, 0x28uLL, 0x6A637A44u);
    v7 = (NSInstrumentation::CLeakTrackingAllocator *)QuotaZInit;
    if ( !QuotaZInit )
    {
      CCursorClip::DeadzoneJumping::Cleanup(this);
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    *(_OWORD *)(QuotaZInit + 8) = *(_OWORD *)v9;
    *((_WORD *)QuotaZInit + 16) = *((_WORD *)v9 + 10);
    *(_QWORD *)QuotaZInit = 0LL;
    *((_QWORD *)QuotaZInit + 3) = 0LL;
    if ( v4 )
      *v4 = QuotaZInit;
    else
      *(_QWORD *)this = QuotaZInit;
    v8 = (_QWORD *)*v8;
    v4 = QuotaZInit;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  v12 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
  if ( *(_QWORD *)this )
  {
    v13 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
    do
    {
      if ( v13 )
      {
        while ( 1 )
        {
          if ( v12 != v13 )
          {
            v17 = 0LL;
            if ( (int)CCursorClip::DeadzoneJumping::CreatePortal(v11, v12, v13, &v17) < 0 )
            {
              CCursorClip::DeadzoneJumping::Cleanup(this);
              goto LABEL_19;
            }
            v11 = v17;
            if ( v17 )
            {
              *(_QWORD *)v17 = *((_QWORD *)v12 + 3);
              *((_QWORD *)v12 + 3) = v11;
            }
          }
          v13 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v13;
          if ( !v13 )
          {
            v13 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
            break;
          }
        }
      }
      v12 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v12;
    }
    while ( v12 );
  }
  v2 = 1;
LABEL_19:
  ExReleaseResourceLite(*v16);
  KeLeaveCriticalRegion();
  return v2;
}
