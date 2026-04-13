/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x1800912B0
 * Callers:
 *     ?Lookup@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x180090C20 (-Lookup@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 v3; // r9
  bool v4; // bp
  __int64 v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdi
  int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    v13 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD *, __int64))(*(_QWORD *)v10 + 48LL))(v10, &v13, a3, v3);
    v3 = (unsigned int)v11;
    if ( v11 >= 0 )
    {
      v4 = a2 == v13;
      v3 = 0LL;
      if ( a2 == v13 )
      {
        LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *, _QWORD))(*(_QWORD *)v10 + 56LL))(
                        v10,
                        a3,
                        a3,
                        0LL);
        break;
      }
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (int)v3 < 0 )
      goto LABEL_12;
  }
  if ( (int)v3 < 0 )
    goto LABEL_12;
  if ( !v4 )
    LODWORD(v3) = -2147483637;
  if ( (int)v3 < 0 )
LABEL_12:
    *a3 = 0;
  return (unsigned int)v3;
}
