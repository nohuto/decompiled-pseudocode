/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180093398
 * Callers:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800931E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180093240 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009347C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800934B4 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x18009357C (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154A98 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r8
  __int128 v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-38h]
  __int128 v36; // [rsp+40h] [rbp-28h] BYREF
  __int64 v37; // [rsp+50h] [rbp-18h]

  v4 = (char *)this + 32;
  v5 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first(
                   (char *)this + 32,
                   a2,
                   a3,
                   a4,
                   v34,
                   *((_QWORD *)&v34 + 1));
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v4);
  v10 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v7, v8, v9, v34, *((_QWORD *)&v34 + 1)) + 8 * v6;
  while ( v5 != (_QWORD *)v10 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    ++v5;
  }
  v11 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v4);
  v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v12, v13, v14, v34, *((_QWORD *)&v34 + 1)) + 8 * v11;
  v19 = (v15 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v16, v17, v18, v34, *((_QWORD *)&v34 + 1))) >> 3;
  if ( v19 )
  {
    v20 = detail::pointer_buffer_impl<CDrawListEntry *>::size(v4);
    v24 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v21, v22, v23, v34, *((_QWORD *)&v34 + 1)) + 8 * v20;
    v29 = (v24 - detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v25, v26, v27, v34, *((_QWORD *)&v34 + 1))) >> 3;
    if ( v19 > v29 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    else
    {
      v32 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v4, v28, v30, v31, v34, *((_QWORD *)&v34 + 1));
      if ( v19 == v29 )
      {
LABEL_7:
        detail::pointer_buffer_impl<CDrawListEntry *>::consume(v4, -(__int64)v19, v33);
        return;
      }
    }
    v35 = 0LL;
    *(_QWORD *)&v34 = v32;
    *((_QWORD *)&v34 + 1) = v29;
    v37 = 0LL;
    v36 = v34;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v34,
      v32 + 8 * v19,
      v32 + 8 * v29,
      &v36);
    goto LABEL_7;
  }
}
