/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18029923C
 * Callers:
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x1802893DC (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 * Callees:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003D244 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x180288A1C (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

bool __fastcall CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(CD2DResourceManager *this)
{
  CD2DContext *v1; // rdi
  bool result; // al
  char *v3; // rbx
  struct CD2DResource *v5; // rbp
  CD2DContext *v6; // r14
  bool v7; // zf
  char *v8; // r12
  CD2DContext *v9; // rcx
  CD2DContext **v10; // rax
  bool v11; // bp

  v1 = *(CD2DContext **)this;
  result = 0;
  v3 = 0LL;
  if ( *(CD2DResourceManager **)this != this )
  {
    do
    {
      v5 = (CD2DContext *)((char *)v1 - 40);
      v6 = v1;
      v7 = *((_BYTE *)v1 - 6) == 0;
      v8 = v3;
      v1 = *(CD2DContext **)v1;
      if ( !v7 )
      {
        v3 = 0LL;
        if ( v1 != this && v1 != (CD2DContext *)40 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v1 - 5) + 8LL))((__int64)v1 - 40);
          v3 = (char *)v1 - 40;
        }
        v9 = *(CD2DContext **)v6;
        if ( *(CD2DContext **)(*(_QWORD *)v6 + 8LL) != v6 || (v10 = (CD2DContext **)*((_QWORD *)v6 + 1), *v10 != v6) )
          __fastfail(3u);
        *v10 = v9;
        *((_QWORD *)v9 + 1) = v10;
        CD2DResourceManager::UnmanageResource((CD2DContext **)this, v5);
        CD2DResource::MarkInvalid(v5);
        if ( v8 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
        result = 1;
      }
      v11 = result;
    }
    while ( v1 != this );
    if ( v3 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
      return v11;
    }
  }
  return result;
}
