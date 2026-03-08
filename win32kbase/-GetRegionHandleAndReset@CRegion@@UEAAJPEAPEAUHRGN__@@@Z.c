/*
 * XREFs of ?GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z @ 0x1C001C540
 * Callers:
 *     <none>
 * Callees:
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C001C5D0 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::GetRegionHandleAndReset(CRegion *this, HRGN *a2)
{
  int v3; // r8d
  unsigned int v5; // ebx
  int v6; // r8d
  HRGN v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 3);
  v5 = -1073741823;
  if ( !v3 )
    goto LABEL_6;
  v6 = v3 - 1;
  if ( !v6 )
  {
    *a2 = (HRGN)1;
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    v9 = *((_QWORD *)this + 2);
    v7 = GreHRGNFromRegionCore((struct RGNCOREOBJ *)&v9);
    *a2 = v7;
    if ( !v7 )
    {
      v5 = -1073741801;
      goto LABEL_7;
    }
    *((_QWORD *)this + 2) = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  (*(void (__fastcall **)(CRegion *))(*(_QWORD *)this + 16LL))(this);
  return v5;
}
